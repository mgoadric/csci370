using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Door : MonoBehaviour
{

    public string scene;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OnTriggerEnter2D(Collider2D collider2D) {
        print("Entered..");
        if (collider2D.gameObject.CompareTag("Player")) {
            GameManager.Instance.EnterDoor(scene);
        }
    }
}
