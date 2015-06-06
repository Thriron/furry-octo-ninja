#include <stdio.h>

int main() {
	int i,j,num_divisors,triangle;
	num_divisors = 0;
	i = 1;
	triangle = 0;

	while(num_divisors <= 500) {
		triangle += i;
		i++;
		num_divisors = 0;
		for(j=1; j<triangle; j++){
			if((triangle%j)==0){
				num_divisors++;
			}
		}
	}
	
	return triangle;
}


