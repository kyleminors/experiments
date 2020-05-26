using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.VFX;
using UnityEngine.UI; 
public class SphereController : MonoBehaviour
{
    public Slider countSlider;
    public Slider sphereSizeSlider;
    public Slider forceIntensitySlider;
    public Slider timeMultiSlider;
    public Slider noiseFrequencySlider;
    public Slider noiseAmpSlider;
    public Slider colorMinSlider;
    public Slider colorMaxSlider;

    public VisualEffect sphereEffect;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
     
        sphereEffect.SetInt("SpawnCount", (int)countSlider.value);
        sphereEffect.SetInt("SphereSize", (int)sphereSizeSlider.value);
        sphereEffect.SetFloat("ForceIntensity", forceIntensitySlider.value);
        sphereEffect.SetFloat("TimeMulti", timeMultiSlider.value);
        sphereEffect.SetFloat("noiseFrequency", noiseFrequencySlider.value);
        sphereEffect.SetFloat("NoiseAmp", noiseAmpSlider.value);
        sphereEffect.SetFloat("colorMin", colorMinSlider.value);
        sphereEffect.SetFloat("colorMax", colorMaxSlider.value);

    }

    public void ReSpawn()
    {
      
        sphereEffect.Reinit(); 
    }
    
}
