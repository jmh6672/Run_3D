using UnityEngine;
using System.Collections;

public class DestroySelf : MonoBehaviour {

	public float timeout = 0.5f;
	float time=0;
	
	// Update is called once per frame
	void Update () {
		time += Time.deltaTime;
		if(time > timeout || GameManager.manager.end==true){
			Destroy (gameObject);
		}
	}

}
