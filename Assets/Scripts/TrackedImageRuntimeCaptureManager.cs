using System;
using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class TrackedImageRuntimeCaptureManager : MonoBehaviour
{
    [SerializeField]
    private Text debugLog;

    [SerializeField]
    private Text jobLog;

    [SerializeField]
    private Text currentImageText;

    [SerializeField]
    private RawImage currentTargetImage;

    [SerializeField]
    private RawImage rectImage;

    [SerializeField]
    private Button captureImageButton;

    [SerializeField]
    private GameObject placedObject;

    [SerializeField]
    private Vector3 scaleFactor = new Vector3(0.1f, 0.1f, 0.1f);

    [SerializeField]
    private XRReferenceImageLibrary runtimeImageLibrary;

    private ARTrackedImageManager trackImageManager;

    void Start()
    {
        debugLog.text += "Creating Runtime Mutable Image Library\n";

        trackImageManager = gameObject.AddComponent<ARTrackedImageManager>();
        trackImageManager.referenceLibrary = trackImageManager.CreateRuntimeLibrary(runtimeImageLibrary);
        trackImageManager.maxNumberOfMovingImages = 3;
        trackImageManager.trackedImagePrefab = placedObject;

        trackImageManager.enabled = true;

        trackImageManager.trackedImagesChanged += OnTrackedImagesChanged;

        ShowTrackerInfo();


    }

    public void CaptureImageButton()
        {

        StartCoroutine("CaptureImage");

         }

    private IEnumerator CaptureImage()
    {
        yield return new WaitForEndOfFrame();

        jobLog.text = "Capturing Image...";
        RectTransform rt = rectImage.GetComponent<RectTransform>();

        Rect rect = new Rect(new Vector2(rt.position.x, rt.position.y), rt.rect.size);
        //var texture = ScreenCapture.CaptureScreenshotAsTexture();
        var texture = new Texture2D((int)rect.width, (int)rect.height, TextureFormat.RGB24, false);
        texture.ReadPixels(rect, 0, 0, false);
        texture.Apply();
        StartCoroutine(AddImageJob(texture));
    }


    public void ShowTrackerInfo()
    {
        var runtimeReferenceImageLibrary = trackImageManager.referenceLibrary as MutableRuntimeReferenceImageLibrary;
    }
    void OnDisable()
    {
        trackImageManager.trackedImagesChanged -= OnTrackedImagesChanged;
    }

    public IEnumerator AddImageJob(Texture2D texture2D)
    {
        yield return null;

        debugLog.text = string.Empty;

        debugLog.text += "Adding image\n";

        jobLog.text = "Job Starting...";

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

        //var newObj = Instantiate(trackImageManager.trackedImagePrefab);

      //  newObj.transform.rotation = new Quaternion(0, 0, 0, 1); 
        debugLog.text = "Instantiated";
        //doing things in here for now

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




