using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class HeroMove : MonoBehaviour {
	public static HeroMove manager;
	public Transform[] Item;
	public Transform HeroPoint;
	public Transform Mcamera;
	public Transform firstPoint;
	public GameObject EndUI;
	public GameObject StageOn;
	public float dump = 0.4f;
	public GameObject FeverParticle;
	public GameObject[] ItemParticle;
	public Text Bonus;
	public float jumpTime = 0.4f;
	public bool keyRock = false;
	public AudioClip moveSnd;
	public AudioClip jumpSnd;
	public AudioClip ItemSnd;
	public AudioClip feverSnd;
	public AudioClip getSnd;
	public Canvas canvas;
	public Transform camera;
	public Animator anim;
	public AudioClip EndSnd;

	bool delay = false;
	bool jump = false;
	bool nonGoal = false;
	bool fever =false;

	Vector3 ang; 
	float halfWidth;
	float halfWidthL;
	float halfWidthR;
	float touchHiehgt;
	Vector2 firstFingerPos;
	Vector2 lastFingerPos;
	float random;
	float randomPos;
	float makeTime=0.5f;
	float moveTime=0.3f;
	int m=2;
	int score;

	void Start(){
		manager = this;
		ang = HeroPoint.eulerAngles;
		halfWidth = Screen.width * 0.5f;
		halfWidthL = Screen.width * 0.1f;
		halfWidthR = Screen.width * 0.9f;
		touchHiehgt = Screen.height * 0.8f;
		anim = transform.GetComponent<Animator>();
	}
	void Update () {
		moveTime-=Time.deltaTime;
		if (Input.touchCount > 0) {
			if(Input.GetTouch(0).phase==TouchPhase.Began){
				firstFingerPos = Input.GetTouch(0).position;
				//if(Input.GetTouch(0).tapCount == 2){
				//}
			}
			if(Input.GetTouch(0).phase == TouchPhase.Moved){
				keyRock=true;
				lastFingerPos = Input.GetTouch(0).position;	
			}
			if(Input.GetTouch(0).phase == TouchPhase.Ended){
				keyRock=false;
				lastFingerPos = Input.GetTouch(0).position;
			}
			if(keyRock==false){
				if((firstFingerPos.y - lastFingerPos.y) < -150 && delay==false){
					if(firstFingerPos.x < halfWidthL || firstFingerPos.x > halfWidthR){
						jump=true;
						StartCoroutine (KeyRock ());
						StartCoroutine (Delay ());
						AudioSource.PlayClipAtPoint(jumpSnd, camera.position);
					}
				}else if((firstFingerPos.y - lastFingerPos.y) > -5 || (firstFingerPos.y - lastFingerPos.y) < 5){
					if(moveTime<0){
						if (firstFingerPos.x < halfWidth && firstFingerPos.x > halfWidthL && firstFingerPos.y<touchHiehgt){
							ang.z -= 45;
							AudioSource.PlayClipAtPoint(moveSnd, camera.position);
						}
						if (firstFingerPos.x > halfWidth && firstFingerPos.x < halfWidthR && firstFingerPos.y<touchHiehgt){
							ang.z += 45;
							AudioSource.PlayClipAtPoint(moveSnd, camera.position);
						}
						moveTime=0.18f;
					}
				}
			}
		}
		if (jump == true) {
			transform.position = Vector3.Slerp (transform.position, HeroPoint.position, jumpTime * 0.2f);
			jumpTime -= Time.deltaTime;
			if(jumpTime < 0)
				transform.position = Vector3.Slerp (transform.position, firstPoint.position, 0.15f);
		}
		HeroPoint.eulerAngles = ang;
		Mcamera.rotation = Quaternion.Lerp (Mcamera.rotation, HeroPoint.rotation, dump);

		makeTime -= Time.deltaTime;
		if (makeTime < 0 && fever == true) {
			makeTime= 5.0f / (GameManager.manager.speed * 2);
			for (int i=0; i<8; i++) {
				random = Random.Range (0,2);
				if(random==0)
					Instantiate(Item[i]);
			}
		}
	}
	void MakeITEM(){
		if (GameManager.manager.stage >= 10)
			m = 1;
		for(int i = 0; i > -36; i -= m){
			for(int k=0; k<8; k++){
				Vector3 pos = Item[k].position;
				random = Random.Range (0,2);
				if(random==0)
					Instantiate(Item[k],new Vector3(pos.x,pos.y,i),Quaternion.identity);
			}
		}
	}
	void OnTriggerEnter(Collider obj){
		if (obj.transform.tag == "GOAL" && nonGoal==false) {
			AudioSource.PlayClipAtPoint (EndSnd, camera.position);
			GameManager.manager.end=true;
			EndUI.SetActive(true);
			EndUI.transform.GetComponent<Animator>().SetBool("Ending",true);
			keyRock=true;
			PlayerPrefs.SetInt("FinalScore", GameManager.manager.score);
			GooglePlayManager.Instance.PostToLeaderboard();
			anim.SetBool("Dead", true);
			Time.timeScale=0;
		}
		if (obj.transform.tag == "FEVER") {
			GameManager.manager.stage += 1;
			StartCoroutine(this.FeverTime());
			StartCoroutine(this.MakeBonus());
		}
		if (obj.transform.tag == "ITEM") {
			score = (int)GameManager.manager.stage * 10;
			StartCoroutine("BonusText");
			GameManager.manager.score += (int)GameManager.manager.stage * 10;
			Destroy(obj.gameObject);
			Instantiate(ItemParticle[0]);
			AudioSource.PlayClipAtPoint(ItemSnd,camera.position);
			StartCoroutine(this.ItemEffect());
		}
		if (obj.transform.tag == "ITEM2") {
			score = (int)GameManager.manager.stage;
			StartCoroutine("BonusText");
			GameManager.manager.score += (int)GameManager.manager.stage;
			AudioSource.PlayClipAtPoint(getSnd,camera.position);
			Destroy(obj.gameObject);
		}
	}
	void BonusText(){
		Text obj = Instantiate (Bonus,Bonus.rectTransform.position,Bonus.rectTransform.rotation)as Text;
		obj.transform.SetParent (canvas.transform, false);
		obj.text = "+" + score;
	}
	IEnumerator MakeBonus(){
		fever = true;
		float feverTime = 2 + (GameManager.manager.stage/2);
		yield return new WaitForSeconds (feverTime);
		fever = false;
	}
	IEnumerator FeverTime(){
		MakeITEM();
		nonGoal = true;
		GameManager.manager.speed *= 2;
		StageOn.SetActive(true);
		Instantiate (FeverParticle);
		GameManager.manager.GetComponent<AudioSource> ().pitch = 1.2f;
		AudioSource.PlayClipAtPoint(feverSnd,camera.position);
		this.GetComponent<Animator> ().speed *= 2;
		yield return new WaitForSeconds (3.0f);
		nonGoal = false;
		GameManager.manager.GetComponent<AudioSource> ().pitch = 1.0f;
		this.GetComponent<Animator> ().speed /= 2;
		Destroy (GameObject.Find("SpeedEffect(Clone)"));
		GameManager.manager.speed /= 2;
		StageOn.SetActive(false);
	}
	IEnumerator ItemEffect(){
		GameManager.manager.speed /= 2;
		ItemParticle [1].SetActive (true);
		yield return new WaitForSeconds (3.0f);
		GameManager.manager.speed *= 2;
		ItemParticle [1].SetActive (false);
	}
	IEnumerator KeyRock(){
		keyRock = true;
		yield return new WaitForSeconds(0.5f);
		keyRock = false;
	}
	IEnumerator Delay(){
		delay = true;
		yield return new WaitForSeconds(1.0f);
		delay = false;
		jump = false;
		jumpTime = 0.4f;
	}
}
