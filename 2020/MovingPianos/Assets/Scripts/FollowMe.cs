using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowMe : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
      Vector2 pos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
      transform.position = new Vector2(pos.x, transform.position.y);
    }
}
