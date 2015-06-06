#include <stdio.h>
#define TOP 2000000

int main() {
	int val,i, j;
	long int sum;
	int sieve[TOP];

	sum = 0;
	
	sieve[0] = 0;
	sieve[1] = 0;
	for(i=2; i<TOP; i++) {
		sieve[i] = i;
	}
	
	for(i=2; i<TOP; i++) {
		if(sieve[i] != 0) {
			if(sieve[i] != 0) {
				for(j=i+sieve[i]; j<TOP; j+=sieve[i]) {
					sieve[j] = 0;
				}
			}
		}
	}

	for(i=0; i<TOP; i++) {
		sum += sieve[i];
	}
	
	printf("sum = %ld\n", sum);

	return sum;
}
	
