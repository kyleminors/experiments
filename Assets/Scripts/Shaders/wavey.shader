Shader "GLSL basic shader" { 
    
   SubShader { 
      Pass { 
         GLSLPROGRAM 
         #version 150

         #ifdef FRAGMENT 
       
         uniform float time;
         uniform vec2 resolution;
         uniform vec2 mouse;
         uniform vec3 spectrum;
         
         
         out vec4 fragColor;
         
         void main(void)
         {
             vec2 uv = -1. + 2. * inData.v_texcoord;
             fragColor = vec4(1.0,0.2,0.3,1.0);
         }
         
         #endif 

         ENDGLSL  
      }
   }
}