using UnityEngine;

public class Piano : MonoBehaviour
{

    private Rigidbody2D rigidbody2D;
    
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        rigidbody2D = GetComponent<Rigidbody2D>();
        rigidbody2D.AddForce(transform.right * 135);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
