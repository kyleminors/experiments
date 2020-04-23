using System.Collections;
using System.Collections.Generic;
using System.IO; 
using UnityEngine;
using UnityEngine.UI;

public class SaveImage : MonoBehaviour
{
    public RawImage rawImageUI;
    public Canvas canvas; 
    public Rect quad; 
    public ImageTarget imageTarget;
    Texture2D tex;

    void Update()
    {
        rawImageUI.texture = imageTarget.rawtex; 
    }

    

    public void DoCapture()
    {
        StartCoroutine("Capture"); 
        imageTarget.rawtex = tex; 

    }

    IEnumerator Capture()
    {
        yield return new WaitForEndOfFrame();

        int width = (int)quad.width;
        int height = (int)quad.height;
        tex = new Texture2D(width, height, TextureFormat.RGB24, false);

        tex.ReadPixels(new Rect(canvas.transform.position.x, canvas.transform.position.y, 1000, 1000), 0, 0);
        tex.Apply();
        Debug.Log("2");

        byte[] bytes = tex.EncodeToPNG();
        
        File.WriteAllBytes(Application.dataPath + "/../newImageTrack.png", bytes);

        Debug.Log("3");

        
    }
}
