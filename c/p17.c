#include <stdio.h>

digit_letters(int i){
	if(i == 9)
		return 4;
	if(i == 8)
		return 5;
	if(i == 7)
		return 5;
	if(i == 6)
		return 3;
	if(i == 5)
		return 4;
	if(i == 4)
		return 4;
	if(i == 3)
		return 5;
	if(i == 2)
		return 3;
	if(i == 1)
		return 3;
	return 0;
}

int main() {
	int i,num,digit,num_letters,sum_letters;
	sum_letters = 0;
	for(i=0;i<=1000;i++){
		num_letters = 0;
		num = i;
		if(num == 1000) {
			//one thousand
			num_letters += 11;
			num -= 1000;
		}
		if(num >= 100) {
			//hundred
			num_letters += 7;
			digit = num/100;
			num_letters += digit_letters(digit);
			num -= 100*digit;
			if(num > 0){
				num += 3;
			}
		}
		if(num >= 90) {
			//ninety
			num_letters += 6;
			num -= 90;
		}
		if(num >= 80) {
			//eighty
			num_letters += 6;
			num -= 80;
		}
		if(num >= 70) {
			//seventy
			num_letters += 7;
			num -= 70;
		}
		if(num >= 60) {
			//sixty
			num_letters += 5;
			num -= 60;
		}
		if(num >= 50) {
			//fifty
			num_letters += 5;
			num -= 50;
		}
		if(num >= 40) {
			//fourty
			num_letters += 6;
			num -= 40;
		}
		if(num >= 30) {
			//thirty
			num_letters += 6;
			num -= 30;
		}
		if(num >= 20) {
			//twenty
			num_letters += 6;
			num -= 20;
		}
		if(num == 19) {
			//nineteen
			num_letters += 8;
			num -= 19;
		}
		if(num == 18) {
			//eighteen
			num_letters += 8;
			num -= 18;
		}
		if(num == 17) {
			//seventeen
			num_letters += 9;
			num -= 17;
		}
		if(num == 16) {
			//sixteen
			num_letters += 7;
			num -= 16;
		}
		if(num == 15) {
			//fifteen
			num_letters += 7;
			num -= 15;
		}
		if(num == 14) {
			//fourteen
			num_letters += 8;
			num -= 14;
		}
		if(num == 13) {
			//thirteen
			num_letters += 8;
			num -= 13;
		}
		if(num == 12) {
			//twelve
			num_letters += 6;
			num -= 12;
		}
		if(num == 11) {
			//eleven
			num_letters += 6;
			num -= 11;
		}
		if(num == 10) {
			num_letters += 3;
			num -= 10;
		}
		if(num == 9) {
			num_letters += 4;
			num -= 9;
		}
		if(num == 8) {
			num_letters += 5;
			num -= 8;
		}
		if(num == 7) {
			num_letters += 5;
			num -= 7;
		}
		if(num == 6) {
			num_letters += 3;
			num -= 6;
		}
		if(num == 5) {
			num_letters += 4;
			num -= 5;
		}
		if(num == 4) {
			num_letters += 4;
			num -= 4;
		}
		if(num == 3) {
			num_letters += 5;
			num -= 3;
		}
		if(num == 2) {
			num_letters += 3;
			num -= 2;
		}
		if(num == 1) {
			num_letters += 3;
			num -= 1;
		}
		sum_letters += num_letters;
	}

	printf("%d\n\r",sum_letters);
	return sum_letters;
}
