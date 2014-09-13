#include <stdio.h>
#include "prime.h"

void prime(int x){
	
	int i = x - 1;
	while (x % i != 0) { i--;}
       	if (i > 1) {
		printf("%d is not prime.\n", x);	

	} else {
		printf("%d is prime.\n", x);
	}		

}	
