using UnityEngine;

public class Drive : MonoBehaviour
{

    private Rigidbody2D rigidbody2D;

    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        rigidbody2D = GetComponent<Rigidbody2D>();
        rigidbody2D.AddForce(transform.right * 30);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void FixedUpdate() {
                //rigidbody2D.AddForce(transform.right);

    }
}
