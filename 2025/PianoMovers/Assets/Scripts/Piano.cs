using UnityEngine;

public class Piano : MonoBehaviour
{

    private Rigidbody2D rb2D;
    private bool crashed = false;

    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        rb2D = GetComponent<Rigidbody2D>();
        rb2D.AddForce(transform.right * 135);
    }

    // Update is called once per frame
    void Update()
    {
        if (!crashed && transform.position.y < -4) {
            crashed = true;
            AudioSource audioSource = GetComponent<AudioSource>();
            audioSource.Play();
            Destroy(gameObject, 5);
        }
    }
}
