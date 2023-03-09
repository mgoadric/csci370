using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class FPSMovement : MonoBehaviour
{
    public GameObject body;

    private Rigidbody rigidbody;

    private Animator animator;

    private bool grounded = true;

    private float horizontal;
    private float vertical;
    
    private float moveLimiter = 0.7f;

    public float runSpeed = 5f;

    void Start () {
        animator = body.GetComponent<Animator>();
        rigidbody = GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void Update()
    {
        horizontal = Input.GetAxisRaw("Horizontal");
        vertical = Input.GetAxisRaw("Vertical");

        // when you want to jump
        if (Input.GetKeyDown(KeyCode.Space) && grounded)
        {
            grounded = false;
            rigidbody.AddRelativeForce(new Vector3(0, 5f, 0), ForceMode.Impulse);
            animator.SetTrigger("jump");
        }
    }

    void FixedUpdate() {
        if (horizontal != 0 && vertical != 0) {
            horizontal *= moveLimiter;
            vertical *= moveLimiter;
        }
        Vector3 v = new Vector3(horizontal * runSpeed, 0, vertical * runSpeed);
        animator.SetFloat("speed", v.sqrMagnitude);
        print(v);
        if (v != Vector3.zero)
        {
            gameObject.transform.forward = v;
        }
        rigidbody.velocity = v + new Vector3(0, rigidbody.velocity.y, 0);

    }

    /// <summary>
    /// Check for collision back to the ground, and re-enable the NavMeshAgent
    /// </summary>
    private void OnCollisionEnter(Collision collision)
    {
        print("Hit Something!");
        if (collision.collider != null && collision.collider.tag == "Ground")
        {
            print("It is the ground!");
            if (!grounded)
            {
                grounded = true;
            }
        }
    }
}
