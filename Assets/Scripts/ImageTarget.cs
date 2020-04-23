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

    public RawImage rawImage;
    public RawImage imageTarget;
    XRReferenceImageLibrary thisLibrary;

    public void AddImageTarget(RawImage newImage)
    {

        XRReferenceImage imageR;
      //  imageR.texture = rawImage.texture; 

    }

}



