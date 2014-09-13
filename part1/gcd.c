#include "gcd.h"

//this GCD function is from:
//http://rosettacode.org/wiki/Greatest_common_divisor#Iterative_Euclid_algorithm
 
int gcd(int u, int v){
	int t;
	while (v) {
		t = u;
		u = v;
		v = t % v;
	}
	return u < 0 ? -u : u; /* abs(u) */
}
