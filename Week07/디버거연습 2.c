//컴퓨터학과 20230837 허유정
#include <stdio.h>
int main(){
	int n;
	int i;
	int sum = 0;
	
	scanf("%d", &n);
	i = 1;
	while(i <= n){
		sum += i;
		i++;
	}
	printf("sum = %d\n", sum);
	
	return 0;
} 
