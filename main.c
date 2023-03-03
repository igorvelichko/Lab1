#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>  
int main(int argc, char *argv[]) { 
 double s = 2; 
 int x; 
 float D, a, b, c, x1, x2, sqrtD; 
 printf("Enter a: "); 
 scanf("%f", &a); 
 printf("Enter b: "); 
 scanf("%f", &b); 
 printf("Enter c: "); 
 scanf("%f", &c); 
 printf("%.2fx ^ %.2lf + %.2fx + %.2f = 0 \n", a, s, b, c); 
 D = pow(b, s)-4*a*c; 
 printf("D = %.0f^%.0f - 4 * %.0f * %.0f \n", b, s, a, c); 
 sqrtD = sqrtl(D); 
  
 if(D > 0){ 
  printf("sqrtD = %.0f \n", sqrtD); 
  x1 = (-b - sqrtD)/(2*a); 
     x2 = (-b + sqrtD)/(2*a); 
     printf("x1 - %.2f, x2 - %.2f \n", x1, x2);  
 } 
 if(D < 0){ 
  printf("sqrtD = %.0f \n", sqrtD); 
  printf("Korney net \n"); 
 } 
 if(D == 0){ 
  printf("sqrtD = %.0f \n", sqrtD); 
     x1 = -b/(2*a); 
     printf("x1 - %.2f \n", x1); 
 } 
 return 0; 
}
  
 