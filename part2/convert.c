/*
 * Ayo Fapohunda CS3157 
 *
 * This program takes an input from the user and converts it to
 * signed decimal, unsigned decimal, hexidecimal and binary numbers.
 * A skeleton code was provided by Prof Lee that did the first three.
 * Converting to binary was then added.
 */


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
	
	int bitArray[32];	//assumes a 32 bit number
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
		
		//This inverts the numbers for negative number
		for( i = 0; i < 32; i++){
		
			if(x%2 == 0) {
				bitArray[i] = 1 - y; //if y = 1 adds 1 which inverts entry        
			} else {
				bitArray[i] = 0 + y;
				if (y == 1) y = y - 1; //once carryover is used y = 0	
			}
			x = x/2; 
		}
	}
	
	//prints array in reverse order so it prints normally
	for (i = 31; i >= 0; i--){
		printf("%d", bitArray[i]);
		if(counter % 4 ==0) printf(" ");
		counter++;
		}	
}
	
