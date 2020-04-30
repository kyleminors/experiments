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



public class  SaveImage : MonoBehaviour
{
    ARTrackedImageManager trackedImageManager; 

    public RawImage rawImageUI;
    public Canvas canvas;
    public Text text; 
    //public ImageTarget imageTarget;
    public Texture2D tex;
    public Texture2D rawtex;
    public Texture2D egTex;

    public ARTrackedImage trackedImage;

    public GameObject arSession;

    public GameObject demoPrefab;
    public RawImage rawImage;
    public MutableRuntimeReferenceImageLibrary library;
    //public XRReferenceImageLibrary library2;


    

    void Update()
    {
        if(tex != null)
        {
            rawImageUI.texture = tex;
        }
        if (trackedImage != null)
        {
           // InstantiatePrefab(trackedImage);

        }
    }

    public void DoCapture()
    {
        StartCoroutine("Capture");
        Debug.Log("Captured");

//        imageTarget.rawtex = tex;
        Debug.Log("Texture assigned");
        CreateLibrary();
        Debug.Log("Library created");
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
        Debug.Log("1");
        var manager = arSession.AddComponent<ARTrackedImageManager>();
        Debug.Log("2");

        arSession.GetComponent<ARTrackedImageManager>().trackedImagePrefab = demoPrefab;


        Debug.Log("3");
        library = (MutableRuntimeReferenceImageLibrary)manager.CreateRuntimeLibrary();
        
        manager.enabled = true;
        Debug.Log("3");

        Debug.Log("manager and prefab created and assigned");
        AddImageTarget();
        text.text = "target added";

    }

    void AddImageTarget()
    {

        Debug.Log("Image added 1");

        MutableRuntimeReferenceImageLibraryExtensions.ScheduleAddImageJob(library, egTex, "new image", 1.0f);
        Debug.Log("Image added 2");

        ; 
    }

    //void InstantiatePrefab(ARTrackedImage trackedImage)
    //{


    //    if (library != TrackingState.Tracking)
    //    {

    //        if (trackedImage.referenceImage.name == "ABC")
    //        {
    //            Instantiate(demoPrefab, transform.position, transform.rotation);
    //        }
    //        else if (trackedImage.referenceImage.name == "XYZ")
    //        {
    //            Instantiate(demoPrefab, transform.position, transform.rotation);
    //        }

    //    }
    //    else
    //    {
    //        // Destroy object if you dont want to keep
    //    }
    //}

    private void OnApplicationQuit()
    {
        //Destroy(imageTarget.arSession); 
    }
}


