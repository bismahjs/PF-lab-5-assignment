#include <stdio.h>
int main(){
	char c;
	printf("Enter R for red, Y for yellow and G for green: \n");
	scanf("%c",&c);
	
	if(c== 'R')
	printf("STOP");
	else if(c=='Y')
	printf("Caution");
	else if(c=='G')
	printf("Go");
	
else 
printf("enter a valid colour");
	
return 0;
}
