using System.Collections;
using System.Collections.Generic;
// MoveDestination.cs
using UnityEngine;

public class NavMeshScript : MonoBehaviour {

	public Transform goal;

	void Start () {
		UnityEngine.AI.NavMeshAgent agent = GetComponent<UnityEngine.AI.NavMeshAgent>();
		agent.destination = goal.position; 
	}
}
