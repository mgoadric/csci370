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
            StartCoroutine("Crash");
            crashed = true;
            GameObject[] others = GameObject.FindGameObjectsWithTag("Piano");
            foreach(GameObject piano in others) {
                if (piano != this.gameObject) {
                    GameObject.Destroy(piano);
                }
            }
            GameManager.Instance.StopGame();
        }
    }

    IEnumerator Crash()
    {
        audio.Play();
        Debug.Log("Playing Crash Now?");
        yield return new WaitForSeconds(audio.clip.length);
        Destroy(gameObject);
    }
}
