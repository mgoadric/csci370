using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Building : MonoBehaviour
{

    public GameObject piano;

    // Start is called before the first frame update
    void Start()
    {
        Instantiate(piano);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
