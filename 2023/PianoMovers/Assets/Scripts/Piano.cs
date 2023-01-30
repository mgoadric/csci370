using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Piano : MonoBehaviour
{

    private AudioSource audio;
    private bool crashed;

    // Start is called before the first frame update
    void Start()
    {
        audio = GetComponent<AudioSource>();
    }

    // Update is called once per frame
    void Update()
    {
        if (transform.position.y < -5 && !crashed) {
            audio.Play();
            print("Crash!!!");
            crashed = true;
        }
    }
}
