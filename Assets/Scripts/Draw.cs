using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Draw : MonoBehaviour
{

    public int objectCount;
    private List<GameObject> gameObjects = new List<GameObject>();
    public ParticleSystem ps; 

    public GameObject drawPrefab;

    // Start is called before the first frame update
    void Start()
    {
        for(int i = 0; i < objectCount; i++)
        {
            var newObj = Instantiate(drawPrefab);
            gameObjects.Add(newObj); 
        }
    }

    // Update is called once per frame
    void Update()
    {
        DrawCircles(); 
    }

    void DrawCircles()
    {
        float x = 0;
        float z = 0;

        foreach (GameObject objects in gameObjects)
        {
            
            objects.transform.position = new Vector3(Mathf.Cos(Time.time) * x, Mathf.Sin(Time.time * Mathf.PerlinNoise(Mathf.PI, x)) * Mathf.PI, z + 0.01f);
            Material mat = new Material(Shader.Find("Standard")); 
            mat.color = Random.ColorHSV(Color.red.r, Color.blue.b);
            var newMat = objects.gameObject.GetComponent<Material>();
            newMat = mat;
            x = x + 1f;
            z = z + 0.01f; 
        }
    }
}
