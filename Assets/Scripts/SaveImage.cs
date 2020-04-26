﻿using System.Collections;
using System.Collections.Generic;
using System;
using Unity.Entities;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using Unity.Burst;
using Unity.Jobs;



public class  SaveImage : MonoBehaviour
{
    public RawImage rawImageUI;
    public Canvas canvas;
    public Text text; 
    public ImageTarget imageTarget;
    public Texture2D tex;
    public Texture2D rawtex;
    public Texture2D egTex;

    public GameObject arSession;

    public GameObject demoPrefab;
    public RawImage rawImage;
    public MutableRuntimeReferenceImageLibrary library;
    public XRReferenceImageLibrary library2;

    
    void Update()
    {
       
    }

    public void DoCapture()
    {
        StartCoroutine("Capture");
        text.text = "Captured";

        imageTarget.rawtex = tex;
        text.text = "Texture assigned";
        CreateLibrary();
        text.text = "Library created";
    }
    

    IEnumerator Capture()
    {
        yield return new WaitForEndOfFrame();

        int width = Screen.width;
        int height = Screen.height;
        tex = new Texture2D(width, height, TextureFormat.RGB24, false);

        tex.ReadPixels(new Rect(0, 0, width, height), 0, 0);
        tex.Apply();

        
        // byte[] bytes = tex.EncodeToPNG();

        //  File.WriteAllBytes(Application.dataPath + "/../newImageTrack.png", bytes);       
    }


    public void CreateLibrary()
    {
        text.text = "1";
        var manager = arSession.AddComponent<ARTrackedImageManager>();
        manager.trackedImagePrefab = demoPrefab; 
        manager.trackedImagePrefab = arSession.AddComponent<ARTrackedImageManager>().trackedImagePrefab;


        text.text = "2";
        library = (MutableRuntimeReferenceImageLibrary)manager.CreateRuntimeLibrary();
        
        manager.enabled = true;
        text.text = "3";

        text.text = "manager and prefab created and assigned";
        AddImageTarget();
        text.text = "target added";

    }

    void AddImageTarget()
    {

        text.text = "Image added 1";

        MutableRuntimeReferenceImageLibraryExtensions.ScheduleAddImageJob(library, egTex, "new image", 1.0f);
        text.text = "Image added 2";

    }


    private void OnApplicationQuit()
    {
        Destroy(imageTarget.arSession); 
    }
}


