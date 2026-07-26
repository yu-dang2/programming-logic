//컴퓨터학과 20230837 허유정
#include <stdio.h>
int main(){
	int n;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	while(n > 0){
		printf("%d", n % 2);
		n /= 2;
	}
	
	return 0;
}
