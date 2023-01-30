using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Van : MonoBehaviour
{

    public GameObject notes;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnTriggerEnter2D(Collider2D col) {
        print("Entering Collision with van");
        if (col.gameObject.tag == "Piano") {
            Destroy(col.gameObject);
            Instantiate(notes);
            GameManager.Instance.IncScore(1);
        }
    }
}
