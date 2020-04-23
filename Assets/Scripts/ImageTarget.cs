using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using System.IO;

[CreateAssetMenu(fileName = "Data", menuName = "ScriptableObjects/ImageTarget", order = 1)]

public class ImageTarget : ScriptableObject
{
    public Texture2D rawtex;

    GameObject container;

    public RawImage rawImage;
    public RawImage imageTarget;
    XRReferenceImageLibrary thisLibrary;

    void Start()
    {
        var manager = container.AddComponent<ARTrackedImageManager>();
        manager.referenceLibrary = thisLibrary;
        manager.enabled = true;
    }
    public void AddImageTarget(RawImage newImage)
    {
        ARTrackedImage aRTrackedImage;
       // aRTrackedImage.referenceImage = rawImage; 
        XRReferenceImage imageR;
      //  imageR.texture = rawImage.texture; 

    }

}



