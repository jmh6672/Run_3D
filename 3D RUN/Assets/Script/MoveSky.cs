using UnityEngine;
using System.Collections;

public class MoveSky : MonoBehaviour {

	// Use this for initialization
	void Start () {
		Screen.orientation = ScreenOrientation.Landscape;
		Screen.sleepTimeout = SleepTimeout.NeverSleep;
	}
	
	// Update is called once per frame
	void Update () {
		transform.Rotate(0, 0.1f, 0);
	}
}
