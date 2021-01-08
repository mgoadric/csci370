using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class GameManager : MonoBehaviour {

	public bool intro;

	public GameObject goal;
	public GameObject level;
	public GameObject moves;
	public GameObject marquee;

	// Use this for initialization
	void Start () {
		intro = true;
		goal.SetActive(false);
		level.SetActive(false);
		moves.SetActive(false);
	}
	
	// Update is called once per frame
	void Update () {
		if (intro) {
			if (Input.GetKeyDown("space")) {
				GetComponent<AudioSource>().Play();
				goal.SetActive(true);
				level.SetActive(true);
				moves.SetActive(true);
				marquee.SetActive(false);
				LevelManager.S.LoadLevel(0);
				intro = false;
			}
		} else if (LevelManager.S.alldone) {
			intro = true;
			goal.SetActive(false);
			level.SetActive(false);
			moves.SetActive(false);		
			marquee.SetActive(true);
			TextMeshProUGUI gt = marquee.GetComponent<TextMeshProUGUI>();
			gt.SetText("Phase 1 Complete\n\nMore levels to come\n\nWritten by Mark Goadrich for Ludum Dare 38\nCredit\nhttps://www.nasa.gov/image-feature/illustration-of-cassini-spacecraft-diving-through-plume-of-ocean-world-enceladus/\nhttp://ftextures.com/textures-solar-panel-module.html\nhttp://soundbible.com/1813-Slowed-Breathing.html\nhttps://nasa3d.arc.nasa.gov/detail/astronaut\nhttp://www.bfxr.net/\n\nPress Space to play again");

		}
	}
}
