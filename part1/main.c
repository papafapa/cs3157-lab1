/** 
 *   Ayo Fapohunda Lab1 cs3157
 *
 *   This is the main program for my part 1
 *   This program should take the average of two numbers inputed by the user
 *   It will also say whether each number is prime or not
 *   It will also say whether the numerbs are co-prime or not
 **/

#include <stdio.h>
#include "prime.h"
#include "gcd.h"

//void prime(int x);
//int gcd(int u, int v);

int main () {
	
	int x, y;
	float avg;

	printf("Please enter a positive integer\n");
	scanf("%d", &x);

	printf("Please type in another positve integer\n");
	scanf("%d", &y);

	printf("You typed in %d and %d\n", x, y);
	
	avg =(float)(x + y) / 2;

	printf("The average is: %.2f\n", avg);

	prime(x);
	prime(y);
	
	if (gcd(x,y) == 1){
		printf("The GCD of %d and %d is %d.  They are relatively prime.\n", x, y, gcd(x,y));
	} else {
		printf("The GCD of %d and %d is %d.  They are not relatively prime.\n", x, y, gcd(x,y));
	}

	return 0;
}

//void prime(int x){

//   	 int i = x - 1;
//  	 while (x % i != 0) { i--;}
//   	 if (i > 1) {
// 		 printf("%d is not prime.\n", x);
			 
//	 } else {
//		 printf("%d is prime.\n", x);
// 	} 
// }



//this GCD function is from:
//http://rosettacode.org/wiki/Greatest_common_divisor#Iterative_Euclid_algorithm

//int gcd(int u, int v){
//	int t;
//	while (v) {
//		t = u; 
//		u = v; 
//		v = t % v;
//	}
//	return u < 0 ? -u : u; /* abs(u) */
//}
