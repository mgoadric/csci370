using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{

    public static GameManager Instance { get; private set; } 

    public GameObject canvas;
    public GameObject dialogBox;
    public GameObject dialogText;
    public GameObject events;

    public GameObject startButton;

    private string myText = "";

    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(gameObject);
            DontDestroyOnLoad(canvas);
            DontDestroyOnLoad(events);
        }
        else
        {
            Destroy(gameObject);
        }
    }


    // Start is called before the first frame update
    void Start()
    {
        DialogHide();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void DialogMaker(string text)
    {
        dialogBox.SetActive(true);
        StartCoroutine(TypeText(text));
        myText = text;
    }

    public void DialogHide()
    {
        dialogBox.SetActive(false);
        StopAllCoroutines();
    }

    IEnumerator TypeText(string text)
    {
        dialogText.GetComponent<TextMeshProUGUI>().text = "";
        foreach (char c in text.ToCharArray())
        {
            dialogText.GetComponent<TextMeshProUGUI>().text += c;
            yield return new WaitForSeconds(0.03f);
        }
    }

    public void StartButton()
    {
        startButton.SetActive(false);
        InvokeRepeating("RestartScene", 0, 10f);
    }

    void RestartScene()
    {
        AsyncOperation asyncLoad = SceneManager.LoadSceneAsync("FirstWorld");

    }
}
