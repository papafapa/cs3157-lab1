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

	int i;
	int bitArray[32];
	int counter =1;

	for( i=0; i < 32; i++){

		if(x >= 0) {

			if(x%2 == 0) {
				bitArray[i] = 0;	//printf("%d", 0);
			} else {
				bitArray[i] = 1;	//printf("%d", 1);
			}
			x = x/2;

			//if(counter % 4 ==0) printf(" ");
			//counter++;
		} else {
			//x = -1 * x;
			//int y;
			//if(x%2


		}

	}
	for (i = 31; i >= 0; i--){
		printf("%d", bitArray[i]);
		if(counter % 4 ==0) printf(" ");
		counter++;
	}	


	}
	
