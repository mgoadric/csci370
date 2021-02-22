using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RunnerMove : MonoBehaviour
{
    // Derived from https://stuartspixelgames.com/2018/06/24/simple-2d-top-down-movement-unity-c/
    Rigidbody2D body;
    SpriteRenderer sr;
    Animator animator;

 
    float horizontal;

    public float runSpeed = 5f;
    public float jumpForce = 400f;

    private bool jumping;
 
    void Start()
    {
        body = GetComponent<Rigidbody2D>();
        sr = GetComponent<SpriteRenderer>();
        animator = GetComponent<Animator>();
     }

    void Update()
    {
        // Gives a value between -1 and 1
        horizontal = Input.GetAxisRaw("Horizontal"); // -1 is left

        animator.SetFloat("horizontal", horizontal);

        if (horizontal >= 0)
        {
            sr.flipX = true;
        } else
        {
            sr.flipX = false;
        }

        if (Input.GetKeyDown("space") && !jumping)
        {
            body.AddForce(new Vector2(0, jumpForce));
            jumping = true;
        }
 
     }

    void FixedUpdate()
    {
        body.velocity = new Vector2(horizontal * runSpeed, body.velocity.y);
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        jumping = false;
    }
}