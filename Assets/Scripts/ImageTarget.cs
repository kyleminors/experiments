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
        var manager = container.GetComponent<ARTrackedImageManager>();
        var library = manager.CreateRuntimeLibrary();
        if (library is MutableRuntimeReferenceImageLibrary mutableLibrary)
        {
            ScheduleAddImageJob(library, rawtex, string name, 1, JobHandle inputDeps = null)
        }
    }

}



