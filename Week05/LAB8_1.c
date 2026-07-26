//컴퓨터학과 20230837 허유정
#include <stdio.h>
int main(){
	int num, i;
	int square = 1;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	for(i=1; i<=num; i++){
		square = i*i*i;
		printf("%d\n", square);		
	}
	
	return 0;
} 
