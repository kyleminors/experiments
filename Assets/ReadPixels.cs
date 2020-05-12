using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Fenderrio.ImageWarp;

public class ReadPixels : MonoBehaviour
{

    public ImageWarp imageWarp;

    public Camera arCamera; 
    public GameObject rectContainer;
    public RectTransform rawImage;
    public Texture2D texture;

    public RawImage warpImage;

    public RawImage newRect;

    public Material material;

    public Sprite newSprite;

    private bool capture;

    public void ReadTexture()
    {
        Debug.Log("1");
        Vector3 rectorVector; 
        rectorVector = arCamera.WorldToScreenPoint(rectContainer.transform.position);
        Vector3 scaleVector = rawImage.rect.size; 
        texture = new Texture2D(Screen.width, Screen.height, TextureFormat.RGB24, false);
        //texture.ReadPixels(new Rect(0, 0, (float)rawImage.localScale.x, (float)rawImage.localScale.y), 0, 0, false);
        texture.ReadPixels(new Rect(0, 0, Screen.width, Screen.height), 0, 0, false);

        Debug.Log("scale vector " + scaleVector); 

        texture.Apply();

        Sprite sprite = Sprite.Create(texture, new Rect(0, 0,  1000, 1000), new Vector2(1.0f, 1.0f), 100.0f); 
        Debug.Log("2");


        imageWarp.sprite = sprite;// texture; 

        capture = false;
        Debug.Log("3");

    }

    private void OnPostRender()
    {

        if (capture)
            ReadTexture();

    }

    public void Capture()
    {
        capture = true; 
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
