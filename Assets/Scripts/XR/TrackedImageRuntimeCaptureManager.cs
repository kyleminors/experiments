using System;
using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class TrackedImageRuntimeCaptureManager : MonoBehaviour
{
    [SerializeField]
    private Camera arCamera;

    [SerializeField]
    private Text debugLog;

    [SerializeField]
    private Text jobLog;

    [SerializeField]
    private Text currentImageText;

    [SerializeField]
    private RawImage currentTargetImage;

    [SerializeField]
    private Button captureImageButton;

    [SerializeField]
    private GameObject placedObject;

    [SerializeField]
    private Vector3 scaleFactor = new Vector3(0.1f, 0.1f, 0.1f);

    [SerializeField]
    private XRReferenceImageLibrary runtimeImageLibrary;

    private ARTrackedImageManager trackImageManager;

    public RawImage rect2; 

    public GameObject rectContainer;

    void Start()
    {

        trackImageManager = gameObject.AddComponent<ARTrackedImageManager>();
        trackImageManager.referenceLibrary = trackImageManager.CreateRuntimeLibrary(runtimeImageLibrary);
        trackImageManager.maxNumberOfMovingImages = 3;
        trackImageManager.trackedImagePrefab = placedObject;

        trackImageManager.enabled = true;

        trackImageManager.trackedImagesChanged += OnTrackedImagesChanged;



    }

    public void CaptureImageButton()
        {

        //rect2 = GameObject.FindGameObjectWithTag("rect").GetComponent<RawImage>(); 
        StartCoroutine("CaptureImage");

         }

    private IEnumerator CaptureImage()
    {
        yield return new WaitForEndOfFrame();

        RectTransform rt = rect2.GetComponent<RectTransform>();

        //rectContainer.transform.position = arCamera.WorldToScreenPoint(rectContainer.transform.position);
        var texture = new Texture2D(Screen.width, Screen.height, TextureFormat.RGB24, false);
        texture.ReadPixels(new Rect(0, 0, Screen.width, Screen.height), 0, 0, false);

        texture.Apply();
        rect2.texture = texture; 
        currentTargetImage.texture = texture;
        StartCoroutine(AddImageJob(texture));
    }

    void OnDisable()
    {
        trackImageManager.trackedImagesChanged -= OnTrackedImagesChanged;
    }

    public IEnumerator AddImageJob(Texture2D texture2D)
    {
        yield return null;

        var firstGuid = new SerializableGuid(0, 0);
        var secondGuid = new SerializableGuid(0, 0);

        XRReferenceImage newImage = new XRReferenceImage(firstGuid, secondGuid, new Vector2(0.1f, 0.1f), Guid.NewGuid().ToString(), texture2D);

        try
        {
            MutableRuntimeReferenceImageLibrary mutableRuntimeReferenceImageLibrary = trackImageManager.referenceLibrary as MutableRuntimeReferenceImageLibrary;

            var jobHandle = mutableRuntimeReferenceImageLibrary.ScheduleAddImageJob(texture2D, Guid.NewGuid().ToString(), 0.1f);
        }
        catch (Exception e)
        {
            if (texture2D == null)
            {
                debugLog.text += "texture2D is null";
            }
            debugLog.text += $"Error: {e.ToString()}";
        }
    }

    void OnTrackedImagesChanged(ARTrackedImagesChangedEventArgs eventArgs)
    {

        foreach (ARTrackedImage trackedImage in eventArgs.added)
        {
            currentImageText.text = trackedImage.referenceImage.name;
            trackedImage.transform.Rotate(Vector3.up, 180);
            trackedImage.transform.localScale = new Vector3(0.1f, 0.1f, 0.025f);
            currentTargetImage.texture = trackedImage.referenceImage.texture; 
        }

        foreach (ARTrackedImage trackedImage in eventArgs.updated)
        {

            currentImageText.text = trackedImage.referenceImage.name;
            trackedImage.transform.Rotate(Vector3.up, 180);
            trackedImage.transform.localScale = new Vector3(0.1f, 0.1f, 0.025f);
            currentTargetImage.texture = trackedImage.referenceImage.texture;

        }
    }
    
}




