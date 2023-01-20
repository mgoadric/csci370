using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Building : MonoBehaviour
{

    public GameObject piano;

    // Start is called before the first frame update
    void Start()
    {
        InvokeRepeating("DropPiano", 2.0f, 2.5f);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void DropPiano() {
        Instantiate(piano);
    }
}
