using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class Abulance : MonoBehaviour
{

    public GameObject notes;
    private AudioSource audioSource;

    // Start is called before the first frame update
    void Start()
    {
        audioSource = GetComponent<AudioSource>();
    }

    // Update is called once per frame
    void Update()
    {

    }

    void OnCollisionEnter2D(Collision2D col)
    {
        Debug.Log("OnCollisionEnter2D");
        Destroy(col.gameObject);

        Instantiate(notes);
        audioSource.Play();

        GameManager.Instance.IncScore(1);
    }
}
