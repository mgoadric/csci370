using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class GameManager : MonoBehaviour
{

    int score = 0;
    public TextMeshProUGUI scoreText;
    public GameObject building;
    public GameObject startButton;

    void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
    }

    public static GameManager Instance { get; private set; }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void IncScore(int ds)
    {
        score += ds;
        scoreText.text = "Score : " + score;
    }

    public void StartButton()
    {
        Debug.Log("Clicked!");
        Building b = building.GetComponent<Building>();
        b.StartThrowing();
        startButton.SetActive(false);
    }

}
