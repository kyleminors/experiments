using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ComputeCall : MonoBehaviour
{
    public Color color;
    public ComputeShader computeShader;
    public RenderTexture renderTexture; 
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        int kernel = computeShader.FindKernel("CSMain"); 

        renderTexture = new RenderTexture(512, 512, 24); 
        renderTexture.enableRandomWrite = true;
        renderTexture.Create();
        
        computeShader.SetTexture(kernel, "Result", renderTexture);

        computeShader.SetVector("color", color);
        computeShader.Dispatch(kernel, 512/64, 512/8, 1); 
    }
}
