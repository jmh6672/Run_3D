using UnityEngine;
using System.Collections;

public class MainManager : MonoBehaviour {
	static bool sAutoAuthenticate = true;
	// Use this for initialization
	void Start () {
		if (sAutoAuthenticate)
		{
			GooglePlayManager.Instance.Authenticate();
			sAutoAuthenticate = false;
		}
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
