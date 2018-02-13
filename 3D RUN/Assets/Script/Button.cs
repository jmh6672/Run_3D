using UnityEngine;
using System.Collections;

public class Button : MonoBehaviour {

	public GameObject FullGage;
	public GameObject PuaseUI;
	public GameObject EndUI;
	public GameObject QuitUI;
	public GameObject RankUI;
	public GameObject OffSound;
	public AudioClip snd;
	public AudioClip GageSnd;
	public Transform camera;
	bool EfGage=false;
	
	void Update(){
		if (Application.loadedLevel == 1 && GameManager.manager.gage.value == 10)
			FullGage.SetActive(true);
		if (EfGage == true) {
			FullGage.SetActive(false);
			StartCoroutine ("EffectGage");
		}
		if (Application.platform == RuntimePlatform.Android) {
			if (Input.GetKey (KeyCode.Escape)) {
				Time.timeScale = 0;
				QuitUI.SetActive (true);
				PuaseUI.SetActive (true);
			}
		}
		if(AudioListener.pause==true)
			OffSound.SetActive(true);
		else
			OffSound.SetActive(false);
	}

	public void OnClick(GameObject obj){
		AudioSource.PlayClipAtPoint(snd,camera.position);
		if (obj.tag == "START") {
			Time.timeScale=1;
			Application.LoadLevel(1);
		}
		if (Application.loadedLevel == 1) {
			if (obj.tag == "PUASE") {
				Time.timeScale = 0;
				PuaseUI.SetActive (true);
				HeroMove.manager.keyRock=true;
			}
			if (obj.tag == "MENU") {
				Time.timeScale = 1;
				Application.LoadLevel ("MAIN");
			}
			if (obj.tag == "BACK") {
				Time.timeScale = 1;
				PuaseUI.SetActive (false);
				HeroMove.manager.keyRock=false;
			}
			if (obj.tag == "GAGE") {
				EfGage=true;
			}
		}
		if (obj.tag == "RANK") {
			OnLeaderboard();
		}
		if (obj.tag == "SOUND") {
			if(AudioListener.pause==false)
				AudioListener.pause=true;
			else		
				AudioListener.pause=false;
		}
		if (obj.tag == "HOWTO") {
			Application.LoadLevel(2);
		}
		if (obj.tag == "YES")
			Application.Quit ();
		if (obj.tag == "NO") {
			QuitUI.SetActive(false);
		}
	}
	IEnumerator EffectGage(){
		for (int i=0; i<16; i++) {
			GameManager.manager.goal[i].GetComponent<Animator>().enabled=true;
			GameManager.manager.goal[i].GetComponent<Collider>().enabled=false;
		}
		AudioSource.PlayClipAtPoint (GageSnd,camera.position);
		GameManager.manager.gage.value -= Time.deltaTime*10.0f;
		yield return new WaitForSeconds(3.0f);
		for (int i=0; i<16; i++) {
			GameManager.manager.goal[i].GetComponent<Animator>().enabled=false;
			GameManager.manager.goal[i].GetComponent<Collider>().enabled=true;
		}
		EfGage = false;
	}

	public void OnLogIn()
	{
		if (GooglePlayManager.Instance.Authenticating)
		{
			return;
		}
		
		if (GooglePlayManager.Instance.Authenticated)
		{
			GooglePlayManager.Instance.LogOut();
		}
		
		else
		{
			GooglePlayManager.Instance.Authenticate();
		}
	}
	
	// 리더보드 함수
	public void OnLeaderboard()
	{
		GooglePlayManager.Instance.ShowLeaderboardUI();
	}
}
