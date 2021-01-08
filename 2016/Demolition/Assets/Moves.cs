using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Moves : MonoBehaviour {

	public GameObject castle;
	public GameObject slingshot;

	// Use this for initialization
	void Start () {
		castle = GameObject.Find("Castle");
		slingshot = GameObject.Find("Slingshot");
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void MoveCastle() {
		FollowCam.S.poi = castle;
	}

	public void MoveSlingshot() {
		FollowCam.S.poi = slingshot;
	}
}
