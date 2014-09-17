#include <stdio.h>

void  printbinary(int x);

int main(){
 	
	int x;

 	//printf("Please enter an integer\n");
 	scanf("%d", &x); 
	
	
    	printf("signed dec:   %d\n", x);
    	printf("unsigned dec: %u\n", x);
    	printf("hex:	      %x\n", x);
	printf("binary:	      ");	
	printbinary(x);
	printf("\n");

    return 0;
}

/*
 * Function: to print binary numbers
 */

void printbinary (int x){

	
	int bitArray[32];
	int counter =1;

	int i;

	if (x >= 0){

		for( i=0; i < 32; i++){

			if(x%2 == 0) {
				bitArray[i] = 0;
			} else {
				bitArray[i] = 1;	
			}
			x = x/2;
		}

	} else {
		x = - 1 * x;
		int y = 1;

		for( i = 0; i < 32; i++){
		
			if(x%2 == 0) {
				bitArray[i] = 1 - y;        
			} else {
				bitArray[i] = 0 + y;
				if (y == 1) y = y - 1;	
			}
			x = x/2; 
		}
	}

	for (i = 31; i >= 0; i--){
		printf("%d", bitArray[i]);
		if(counter % 4 ==0) printf(" ");
		counter++;
		}	
}
	
