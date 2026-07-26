//컴퓨터학과 20230837 허유정
#include <stdio.h>
int main(){
	int n;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	int i = 1;
	
	while(i <= n){
		printf("%d\n", i * i * i);
		i++;
	}
}
