#include <stdio.h>
/******************************************************************************

                              Online C Compiler.
                  Code, Compile, Run and Debug C program online.
  Write your code in this editor and press "Run" button to compile and execute it.

  *******************************************************************************/

  #include <stdio.h>



  int main()
  {
  

      int a;
      int b;
      int c;
      int d;
      int r;
     int prod1;
     int prod2;
     int prod3;
     int prod4;

  printf("Enter the first complex number in the form ai + b: ");
  scanf("%d i + %d", &a, &b);

  printf("Enter the second complex number in the form ai + b: ");
  scanf("%d i + %d", &c, &d);


   prod1 = a * c * -1;
   prod2 = b * c;
   prod3 = a * d;
   prod4 = b * d;


  r = prod1 + prod4; 
  int imagPart = prod2 + prod3;


  printf("(%di + %d) * (%di + %d) = %di + %d", a, b, c, d, imagPart,r);






      return 0;



  }


