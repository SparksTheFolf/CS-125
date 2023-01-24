/*************************************************************** 
* File:    practiceExWeek2_NolanTrapp.c 
* Author:   Nolan Trapp 
* Purpose:  Case 1: Print even numbers inclusivly 2-100, Case 2: Print out greeting specified number of times
* Source Code: Https://github.com/SparksTheFolf/CS-125 
****************************************************************/ 
#include <stdio.h>


int main(){

	/* Init/Starting Variables*/

	int x, y, numSpecified;

	/* Ending Starting Variables */

	printf("\n");
	printf("Case 1\n");
	printf("Print even numbers inclusivly 2-100\n");
	printf("\n");

 	for (x = 1; x <= 100; x=x+1){
	
	if(x%2 == 0){

		printf("%d\n", x);
	
	}

	}


	printf("\n\n");

	printf("Case 2\n");
	printf("Print a greeting depending on the number of times it was specified\n");
	printf("\n");
	
	printf("Enter a number of times to be greeted: ");
	scanf("%d", &numSpecified);

	for (y=1; y <= numSpecified; y=y+1){

		printf("Hello User! This will print %d greetings.\n", numSpecified);	

	}	



	printf("\n");
	printf("Thank You for using my program!\n -Nolan Trapp \n\n");	


	return 0;
}
