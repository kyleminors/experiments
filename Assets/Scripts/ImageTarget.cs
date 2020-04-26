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

    public void CreateLibrary(Text text)
    {
        text.text = "1";
        var manager = arSession.AddComponent<ARTrackedImageManager>();
        text.text = "2";
        library = (MutableRuntimeReferenceImageLibrary)manager.CreateRuntimeLibrary();
        manager.enabled = true;
        text.text = "3";

        manager.trackedImagePrefab = demoPrefab;
        text.text = "manager and prefab created and assigned";
        AddImageTarget(rawtex);
        text.text = "target added";

    }

    public void AddImageTarget(Texture2D newTarget)
    {

        Debug.Log("done 1!"); 

        library.ScheduleAddImageJob(newTarget, "newTarget", 1);
        
        Debug.Log("done 2!");

    }



}



