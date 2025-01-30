using UnityEngine;

public class Piano : MonoBehaviour
{

    private Rigidbody2D rb2D;

    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        rb2D = GetComponent<Rigidbody2D>();
        rb2D.AddForce(transform.right * 135);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
