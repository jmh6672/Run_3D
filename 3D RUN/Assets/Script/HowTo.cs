using UnityEngine;
using System.Collections;

public class HowTo : MonoBehaviour {
	public GameObject QuitUI;
	public AudioClip snd;
	public GameObject[] view;
	public GameObject StartUI;
	public GameObject NextUI;
	public Transform camera;

	int i=0;

	void Update () {
		if (Application.platform == RuntimePlatform.Android) {
			if (Input.GetKey (KeyCode.Escape)) {
				QuitUI.SetActive (true);
			}
		}
	}
	public void OnClick(GameObject obj){
		AudioSource.PlayClipAtPoint (snd, camera.position);
		if (obj.tag == "START") {
			Application.LoadLevel (1);
		}
		if (obj.tag == "MENU") {
			Application.LoadLevel (0);
		}
		if (obj.tag == "NEXT") {
			if(i==5){
				StartUI.SetActive(true);
				NextUI.SetActive(false);
			}
			else{
				view[i].SetActive(false);
				view[i+1].SetActive(true);
				i++;
			}
		}
		if (obj.tag == "YES")
			Application.Quit ();
		if (obj.tag == "NO") {
			QuitUI.SetActive (false);
		}
	}
}
