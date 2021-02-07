using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour
{
    Rigidbody2D body;

    float horizontal;
    float vertical;
    float moveLimiter = 0.7f;

    public float runSpeed = .01f;

    private bool sliding = false;

    public GameObject glowSprite;

    void Start()
    {
        body = GetComponent<Rigidbody2D>();
    }

    void Update()
    {
        // Gives a value between -1 and 1
        horizontal = Input.GetAxisRaw("Horizontal"); // -1 is left
        vertical = Input.GetAxisRaw("Vertical"); // -1 is down
        if (GameManager.Instance.power > 0)
        {
            glowSprite.SetActive(true);
        } else
        {
            glowSprite.SetActive(false);
        }
    }

    void FixedUpdate()
    {
        if (horizontal != 0 && vertical != 0) // Check for diagonal movement
        {
            // limit movement speed diagonally, so you move at 70% speed
            horizontal *= moveLimiter;
            vertical *= moveLimiter;
        }

        if (!sliding)
        {
            body.velocity = new Vector2(horizontal * runSpeed, vertical * runSpeed);
        }
    }

    public void Slide(bool sliding)
    {
        this.sliding = sliding;
    }
}
