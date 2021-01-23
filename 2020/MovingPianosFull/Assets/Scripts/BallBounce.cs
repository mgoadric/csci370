using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BallBounce : MonoBehaviour
{

    private Rigidbody2D rb2D;
    private AudioSource audioData;
    private bool crashed = false;
 
    // Start is called before the first frame update
    void Start()
    {
        rb2D = GetComponent<Rigidbody2D>();
        rb2D.AddForce(transform.right * 135);
        Debug.Log("Testing");
        audioData = GetComponent<AudioSource>();
    }

    // Update is called once per frame
    void Update()
    {
        if (transform.position.y < -4.5f && !crashed)
        {
            GameManager.Instance.IncScore(-1);
            StartCoroutine("Crash");
            crashed = true;
        }
    }

    IEnumerator Crash()
    {
        audioData.Play();
        Debug.Log("Playing Crash Now?");
        yield return new WaitForSeconds(audioData.clip.length);
        Destroy(gameObject);
    }
}
