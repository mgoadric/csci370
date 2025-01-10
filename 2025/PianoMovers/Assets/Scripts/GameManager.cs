using TMPro;
using UnityEngine;

public class GameManager : MonoBehaviour
{

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

    int score = 0;
    public TextMeshProUGUI scoreText;

    public void IncScore(int ds)
    {
        score += ds;
        scoreText.text = "Score: " + score;
    }


    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
