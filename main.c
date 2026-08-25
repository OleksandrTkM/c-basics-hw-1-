#include <stdio.h>

  int main(){

     char password[4];
     

	  printf("enter your password to encrypt it\n");
	  scanf("%3s", password);


for (int sym = 0; sym < 3; sym++) {
	password[sym] = password[sym] + 3;


if (password[sym] > 'z') {
	password[sym] = password[sym] - 26;
}
}
 printf("%s your password", password); 


	  return 0;
}
