#include <stdio.h> 
  
// A sample differential equation 
// "dy/dx = (x - y)/2" 
float dydx(float x, float y) 
{ 
    return (x*(y-1)); 
} 

float rungeKutta(float x0, float y0,  float x, float h) 
{ 
     
    int n = (int)((x - x0) / h); 
  
    float k1, k2; 
    int i;
    // Iterate for number of iterations 
    float y = y0; 
    for (i = 1; i <= n; i++) { 
        
        k1 = h * dydx(x0, y); 
        k2 = h * dydx(x0 + (0.5 * h), y + (0.5 * k1)); 
        y = y + k2; 
        x0 = x0 + h; 
    } 
    i=1;
  
     return y;
} 
  
int main() 
{ 
    float x0 = 1, y =2.0 , 
          x = 1.2, h = 0.2; 
          
    printf("y(x) = %f", rungeKutta(x0, y, x, h)); 
    printf("y(x) = %f", rungeKutta(x0, y, 1.4, h)); 

      
}
