//컴퓨터학과 20230837 허유정
#include <stdio.h>
int main(){
	int n, i;
	int fac = 1;
	
	printf("Enter a number (>=2): ");
	scanf("%d", &n);
	
	printf("%d! =", n);
	for(i = n; i > 1; i--){
		printf(" %d *", i);
		fac *= i;
	}		
	printf(" 1 = %d", fac);
	
	return 0;
}
