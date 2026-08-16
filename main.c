#include <stdio.h>
 //Calculator   Done 
 // Delenie na 0   Done
 // Minusovi Chisla   Done


double num1, num2, result; // Minusovi chisla
char task;

int main(){
  
       
	printf("Type First Number\n");
        scanf(" %lf", &num1);

	printf("type the operation (+ - * /):\n ");
	scanf(" %c", &task);

	printf("Type Second Number\n");
	scanf(" %lf", &num2);



	
	switch(task){
                 case '+':
			 result = num1 + num2;
		         break;
                 case '-':
			 result = num1 - num2;
			 break;
		 case '*':
			 result = num1 * num2;
			 break;
                 case '/':
			 if(num2 == 0){    // Delenie na 0
			 printf("that operation can`t be done\n");
			 return 0;
			 }else{

			 result = num1 / num2;
			 }
			 break; 
			
	         default: 
			 printf("This operation doesnt work on this calculator:\n");

	}
		printf("Result of the operation: %.2lf \n", result);	
 
return 0;
}

















