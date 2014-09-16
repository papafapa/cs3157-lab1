#include <stdio.h>

void  printbinary(int x);

int main(){
 	
	int x;

 	printf("Please enter an integer\n");
 	scanf("%d", &x); 
	
	
    	printf("signed dec:	 %%d: %d\n", x);
    	printf("unsigned dec:	 %%u: %u\n", x);
    	printf("hex:		 %%x: %x\n", x);
	printbinary(x);
	printf("\n");

    return 0;
}

/*
 * Function: to print binary numbers
 */

void printbinary (int x){

	int i;

	for( i=0; i < 32; i++){
		if(x%2 == 0) {
			printf("%d", 0);
		} else {
			printf("%d", 1);
		}
		
		//printf("binary: %d  \n", x);
	}
}
