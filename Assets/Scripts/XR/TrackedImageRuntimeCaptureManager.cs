using System;
using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using Fenderrio.ImageWarp;

public class TrackedImageRuntimeCaptureManager : MonoBehaviour
{
    public ImageWarp imageWarp;

    public ImageWarp imageWarpCapture;

    public RectTransform canvas;

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

    public GameObject rectImage; 

    public GameObject rectContainer;

    Vector3[] v = new Vector3[4];

    void Start()
    {

        //trackImageManager = gameObject.AddComponent<ARTrackedImageManager>();
        //trackImageManager.referenceLibrary = trackImageManager.CreateRuntimeLibrary(runtimeImageLibrary);
        //trackImageManager.maxNumberOfMovingImages = 3;
        //trackImageManager.trackedImagePrefab = placedObject;

        //trackImageManager.enabled = true;

        //trackImageManager.trackedImagesChanged += OnTrackedImagesChanged;


    }

    private void Update()
    {
        if(rectContainer == null)
        rectContainer = GameObject.FindGameObjectWithTag("rect");

    }

    public void CaptureImageButton()
        {

        StartCoroutine("CaptureImage");

         }

    //private IEnumerator CaptureImage()
    //{
    //    Debug.Log("1"); 
    //    yield return new WaitForEndOfFrame();

    //    RectTransform rt = rectImage.GetComponent<RectTransform>();

    //    //Rect rect = new Rect(0, 0, Screen.width, Screen.height);

    //    Rect rect = new Rect(imageWarpCapture.sprite.textureRect);

    //    var texture = new Texture2D(Screen.width, Screen.height, TextureFormat.RGB24, false);

    //    texture.ReadPixels(new Rect(0, 0, Screen.width, Screen.height), 0, 0, false);

    //    Debug.Log("2");

    //    texture.Apply();
    //   // currentTargetImage.texture = texture;

    //    Sprite sprite = Sprite.Create(texture, rect, new Vector2(0.5f, 0.5f), 100.0f);

    //    imageWarp.sprite = sprite;

    //    StartCoroutine(AddImageJob(texture));

    //    Debug.Log("3");

    //}

    private IEnumerator CaptureImage()
    {
        Debug.Log("1");
        yield return new WaitForEndOfFrame();

        Rect rect = new Rect(imageWarpCapture.rectTransform.rect);
        Vector2 rectPos = rect.position.normalized;

        Debug.Log("rect size " + rect.size);
        canvas.GetWorldCorners(v);
        Debug.Log("v" + v[0]);
        Debug.Log("v1" + v[1]);
        Debug.Log("v2" + v[2]);

        Debug.Log("rect pos 2 " + canvas.position);

        //Vector3 rectPos = imageWarp.transform.position;

        Debug.Log(arCamera.WorldToScreenPoint(rect.position)); 
        var texture = new Texture2D((int)rect.size.x, (int)rect.size.y, TextureFormat.RGB24, false);

        texture.ReadPixels(new Rect(v[0].x, v[0].y, texture.width, texture.height), 0, 0, false);

        Debug.Log("2");

        texture.Apply();
        currentTargetImage.texture = texture;

        //Sprite sprite = Sprite.Create(texture, new Rect(562, 1218, 351, 981), new Vector2(0.5f, 0.5f), 1000.0f);
        Sprite sprite = Sprite.Create(texture, new Rect(0, 0, texture.width, texture.height), new Vector2(0.5f, 0.5f), 1000.0f);

        imageWarp.sprite = sprite;

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
           // Instantiate(placedObject); 
            currentImageText.text = trackedImage.referenceImage.name;
            trackedImage.transform.Rotate(Vector3.up, 180);
            trackedImage.transform.localScale = new Vector3(0.1f, 0.1f, 0.1f);
            currentTargetImage.texture = trackedImage.referenceImage.texture; 
        }

        foreach (ARTrackedImage trackedImage in eventArgs.updated)
        {
          //  Instantiate(placedObject);
            currentImageText.text = trackedImage.referenceImage.name;
            trackedImage.transform.Rotate(Vector3.up, 180);
            trackedImage.transform.localScale = new Vector3(0.1f, 0.1f, 0.1f);
            currentTargetImage.texture = trackedImage.referenceImage.texture;

        }
    }
    
}




