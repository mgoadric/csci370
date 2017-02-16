using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WallScript : MonoBehaviour {

	AudioSource aud;
	public AudioClip[] impactClip;

	// Use this for initialization
	void Awake () {
		aud = gameObject.GetComponent<AudioSource>();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnCollisionEnter(Collision coll) {
		print("in collision");
		if (coll.gameObject.tag == "Projectile") {
			aud.PlayOneShot(impactClip[0], 0.7f);
			Destroy(this.gameObject.GetComponent<MeshRenderer>());
			Destroy(this.gameObject.GetComponent<BoxCollider>());
			Destroy(this.gameObject, 1f);
		}
	}
}
