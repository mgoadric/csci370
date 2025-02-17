using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class GameManager : MonoBehaviour
{

    public static GameManager Instance {get; private set;}

    private int score;

    public TextMeshProUGUI scoreText;
    public GameObject banner;
    public GameObject button;

    public GameObject building;

    void Awake() {
        if (Instance == null) {
            Instance = this;
            DontDestroyOnLoad(gameObject);
        } else {
            Destroy(gameObject);
        }

    }

    public void IncScore(int ds) {
        score += ds;
        scoreText.text = "Score : " + score;
    }

    public void StartGame() {
        score = 0;
        scoreText.text = "Score : " + score;

        building.GetComponent<Building>().DropPianos();
        banner.SetActive(false);
        button.SetActive(false);
    }

    public void StopGame() {
        building.GetComponent<Building>().StopDropping();
        banner.SetActive(true);
        button.SetActive(true);
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
