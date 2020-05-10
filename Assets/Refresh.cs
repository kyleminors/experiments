using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement; 
public class Refresh : MonoBehaviour
{
    [SerializeField]
    private string scene;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    public void RefreshScene()
    {
        SceneManager.LoadScene(scene, LoadSceneMode.Single); 
    }
}
