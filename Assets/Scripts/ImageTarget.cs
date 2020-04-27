using System.Collections;
using System.Collections.Generic;
using System;
using Unity.Entities;  
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using Unity.Burst;  
using Unity.Jobs;

public class ImageTarget : MonoBehaviour
{
    public Texture2D rawtex;

    public GameObject arSession;

    public GameObject demoPrefab; 
    public RawImage rawImage;
    public RawImage imageTarget;
    public MutableRuntimeReferenceImageLibrary library;

   


}



