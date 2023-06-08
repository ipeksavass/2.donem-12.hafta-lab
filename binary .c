#include <stdio.h>
//binary addition
int main(){
	unsigned int x=5, y=3, sum, carry;//dene 
	sum = x ^y;
	printf("%d\n",sum);
	carry = x & y;
	printf("%d\n",carry);
	while(carry != 0){
		carry = carry << 1;
		x = sum;
		y = carry;
		sum = x ^ y;
		carry = x & y;
	}
	printf("%d",sum);
	getchar();
	return 0;
}


