#include <stdio.h>
 
main()
{
   // Declare an integer i
   int i;
   // Declare a float pointer f
   float *f;
 
   // Initialize i
   i=1092616192;
    
   // Type case float pointer f to point to the address of integer i
   f=(float *)&i;
 
   printf("i address and f address are %ul and %ul\n",&i,f);
   printf("i is %d and f is %f\n",i,*f);
   printf("int length float length %d %d\n",sizeof(int), sizeof(float));
}
