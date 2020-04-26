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


[CreateAssetMenu(fileName = "Data", menuName = "ScriptableObjects/ImageTarget", order = 1)]

public class ImageTarget : MonoBehaviour
{
    public Texture2D rawtex;

    public GameObject arSession;

    public RawImage rawImage;
    public RawImage imageTarget;
    public MutableRuntimeReferenceImageLibrary library;

    void Start()
    {
        var manager = arSession.AddComponent<ARTrackedImageManager>();
        library = (MutableRuntimeReferenceImageLibrary)manager.CreateRuntimeLibrary();
        manager.enabled = true;

        AddImageTarget(rawtex); 
    }

    public void AddImageTarget(Texture2D newTarget)
    {
        
        

           library.ScheduleAddImageJob(newTarget, "newTarget", 1);

        
    }

    
    
}



