//컴퓨터학과 20230837 허유정
#include <stdio.h>
int main(){
	int n;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	while(n > 0){	//n != 0 가능! 
		printf("%d", n % 10);
		n /= 10;
	}
	
	return 0;
}
