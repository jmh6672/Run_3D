using UnityEngine;
using System.Collections;

public class PlaneMove : MonoBehaviour {

	// Update is called once per frame
	void Update () {
		float speed = GameManager.manager.speed;
		transform.Translate (Vector3.back * speed * Time.deltaTime);
		if (transform.position.z < - 50)
			Destroy (gameObject);
	}
	
}