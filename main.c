#include  <stdio.h>
#include <math.h>

    int main () {
 
      double num1, num2, num3;
      double d;

      printf("Enter your numbers(3)\n");
      scanf("%lf %lf %lf", &num1, &num2, &num3);

      d = num2 * num2 - 4 * num1 * num3;

      printf("Дискримінант = %.2lf\n", d);

      if (d > 0) {
	      double x1 = (-num2 + sqrt(d)) / (2 * num1);
	      double x2 = (-num2 - sqrt(d)) / (2 * num1);
	      printf("корені: x1 = %.2lf, x2 = %.2lf \n", x1, x2);
      }	   
	      else if (d==0){
                         double x = -num2 / (2*num1);
			 printf(" korin: x = %.2lf \n", x);
	      }

      else{
	      printf("Коренів немає\n");
      }



	    return 0;
    }
