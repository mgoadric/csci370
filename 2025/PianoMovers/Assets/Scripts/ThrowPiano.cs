using System.Collections;
using UnityEngine;

public class ThrowPiano : MonoBehaviour
{

    public GameObject piano;

    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        //InvokeRepeating("DropPiano", 2.0f, 2.5f);
        StartCoroutine("DropPiano2");

    }

    IEnumerator DropPiano2() {
      for (;;) {
        Instantiate(piano);
        yield return new WaitForSeconds(Random.Range(1f, 4f));
      }
    }

    void DropPiano() {
      Instantiate(piano);
    }


    // Update is called once per frame
    void Update()
    {
        
    }
}
