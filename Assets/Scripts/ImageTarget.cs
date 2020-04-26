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

    public void CreateLibrary()
    {
        var manager = arSession.AddComponent<ARTrackedImageManager>();
        library = (MutableRuntimeReferenceImageLibrary)manager.CreateRuntimeLibrary();
        manager.enabled = true;
        manager.trackedImagePrefab = arSession; 
        AddImageTarget(rawtex); 
    }

    public void AddImageTarget(Texture2D newTarget)
    {

        Debug.Log("done 1!"); 

        library.ScheduleAddImageJob(newTarget, "newTarget", 1);
        
        Debug.Log("done 2!");

    }



}



