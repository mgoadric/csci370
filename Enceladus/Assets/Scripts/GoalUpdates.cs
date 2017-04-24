using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class GoalUpdates : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		TextMeshProUGUI gt = this.GetComponent<TextMeshProUGUI>();
		gt.SetText("Goal:" + LevelManager.S.time);
	}
}
