#include <stdio.h>
#include <math.h>
        int main (){
                
double a=3;
double b=4.5;
double c=16;
double d=2.7;
double e=5;
double f=25.2;
double g=2.4;
double h=6;

       double y =(( (log(sqrt(a*a+b*b))) + sqrt(c*d)) /( e * sqrt(f))) - log(g+h);

        printf("result is %lf \n", y);  //must be -1.799111


		return 0;
	}
