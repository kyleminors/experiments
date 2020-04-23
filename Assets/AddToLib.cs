using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class AddToLib : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }


    void AssignImage(XRReferenceImage image)
    {
        var library = trackedImageManager.CreateRuntimeLibrary();
        if (library is MutableRuntimeReferenceImageLibrary mutableLibrary)
        {
            // add images to mutableLibrary
        }

    }
}
