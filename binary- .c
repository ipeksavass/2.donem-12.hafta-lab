#include <stdio.h>
#include <stdlib.h>
int main(){
	unsigned int number;
	int c = 0;
	
	printf("Bir sayi giriniz: ");
	scanf("%d",&number);
	
	while(number != 0){
		if((number & 1) == 1)
			c++;
			number = number >> 1;
	}
	printf("Number of 1 bits: %d",c);
	return 0;
}
