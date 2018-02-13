using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class GameManager : MonoBehaviour {
	public static GameManager manager;
	public GameObject[] goal;
	public Transform Fever;
	public Transform Item;
	public Slider gage;
	
	public bool end;

	float playTime=0;
	float playSeTime=0;
	float playMiTime=0;
	float randomNum;
	float difficult=100;
	float makeTime=1.0f;
	float scTime=1.0f;

	public float stageTime = 10.0f;
	public float stage = 1;
	public float speed = 10;
	public int score = 0;

	public Text txtTime;
	public Text txtStage;
	public Text txtScore;
	public Text StageOn;
	public GameObject newScore;
	public Text bestSc;
	public Text FianlSc;
	string timeStr;

	void Start () {
		end = false;
		manager = this;
		Screen.orientation = ScreenOrientation.Landscape;
		Screen.sleepTimeout = SleepTimeout.NeverSleep;
		for (int i=0; i<16; i++) {
			goal[i].GetComponent<Animator>().enabled=false;
			goal[i].GetComponent<Collider>().enabled=true;
		}
	}
	
	void Update () {
		stageTime -= Time.deltaTime;
		makeTime -= Time.deltaTime;
		gage.value += Time.deltaTime;

		scTime -= Time.deltaTime;
		if (scTime < 0) {
			score += 1;
			if (stage < 5)
				scTime = 1.0f;
			else if (stage < 10)
				scTime = 0.5f;
			else if (stage < 15)
				scTime = 0.25f;
			else 
				scTime = 0.1f;
		}

		if (stage >= 10)
			GetComponent<AudioSource> ().pitch = 1.2f;
		else if (stage >= 6)
			GetComponent<AudioSource> ().pitch = 1.1f;

		if (stageTime < 0) {
			stageTime = 10.0f + stage;
			Instantiate (Fever);
		}
		if (stage % 2 == 0) {
			if (speed < 30)
				speed = 10.0f + (stage * 2.5f);
			else
				speed = 30;
		} else if (stage % 2 == 1) {
			if (difficult > 30)
				difficult = 110 - (stage * 10);
			else
				difficult = 30;
		}

		if (makeTime < 0 && end == false) {
			makeTime = 1.0f;
			if (speed >= 20)
				makeTime = 0.5f;
			else if (speed == 30)
				makeTime = 0.3f;
			for (int i = 0; i < 8; i++) {
				randomNum = Random.Range (0, difficult);
				if (randomNum > 5 && randomNum <= 20)
					Instantiate (goal [i]);
			}
			for (int i = 8; i < 16; i++) {
				randomNum = Random.Range (0, difficult);
				if (randomNum <= 5)
					Instantiate (goal [i]);
			}
			randomNum = Random.Range (0, 100);
			if (randomNum <= 2)
				Instantiate (Item);
		}

		playTime += Time.deltaTime;
		playSeTime += Time.deltaTime;
		if (playSeTime >= 59.9f) {
			playSeTime = 0;
			playMiTime++;
		}

		timeStr = "" + playMiTime.ToString ("00:") + playSeTime.ToString ("00");
		txtTime.text = timeStr;
		txtStage.text = "STAGE " + stage;
		txtScore.text = "SCORE : " + score;
		StageOn.text = "" + stage;

		if (end == true) {
			if(score > PlayerPrefs.GetInt ("BestScore")){
				newScore.SetActive(true);
				PlayerPrefs.SetInt("BestScore",score);
			}
			
			FianlSc.text = score.ToString ();
			bestSc.text = PlayerPrefs.GetInt ("BestScore").ToString ();
		}
	}
}