using UnityEngine;

public class Piano : MonoBehaviour
{

    private Rigidbody2D rb2D;
    private AudioSource audioSource;

    private bool crashed;

    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        rb2D = GetComponent<Rigidbody2D>();
        audioSource = GetComponent<AudioSource>();
        rb2D.AddForce(transform.right * 135);
        crashed = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (!crashed && transform.position.y < -5) {
            crashed = true;
            audioSource.Play();
            Destroy(gameObject, 4);
        }
    }
}
