using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowCam : MonoBehaviour {

	public GameObject playerSprite;
	public float boundaryPercent;
	public float easing;

	private float lBound;
	private float rBound;

	// Use this for initialization
	void Start () {
		lBound = boundaryPercent * Camera.main.pixelWidth;
		rBound = Camera.main.pixelWidth - lBound;
	}
	
	// Update is called once per frame
	void FixedUpdate () {

		Vector3 spriteLoc = Camera.main.WorldToScreenPoint(playerSprite.transform.position);

		Vector3 pos = transform.position;

		if (spriteLoc.x < lBound) {
			pos.x -= lBound - spriteLoc.x;
		} else if (spriteLoc.x > rBound) {
			pos.x += spriteLoc.x - rBound;
		}

		pos = Vector3.Lerp(transform.position, pos, easing);

		transform.position = pos;

	}
}
