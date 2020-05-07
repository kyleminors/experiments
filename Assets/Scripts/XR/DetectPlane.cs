using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;

[RequireComponent(typeof(ARPlaneManager))]
public class DetectPlane : MonoBehaviour
{

    public void TogglePlaneDetection()
    {
        m_ARPlaneManager.enabled = !m_ARPlaneManager.enabled;

        if (m_ARPlaneManager.enabled)
        {
            SetAllPlanesActive(true);
        }
        else
        {
            SetAllPlanesActive(false);
        }

        
    }

    void SetAllPlanesActive(bool value)
    {
        foreach (var plane in m_ARPlaneManager.trackables)
            plane.gameObject.SetActive(value);
    }

    void Awake()
    {
        m_ARPlaneManager = GetComponent<ARPlaneManager>();
    }

    ARPlaneManager m_ARPlaneManager;
}