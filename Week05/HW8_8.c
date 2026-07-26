//컴퓨터학과 20230837 허유정
#include <stdio.h>
int main(){
	int n, i;
	int count = 0; 
	
	printf("Enter a number: ");
	scanf("%d", &n);
		
	for(i=2; i<=n-1; i++){
		if(n%i==0){
			count++;
			break;
		}
	}
	if(count > 0)
		printf("소수가 아니다.\n");
	else
		printf("소수이다.\n");
		
	return 0;
	
//	int num, i;
//	
//	printf("Enter a number: ");
//	scanf("%d", &num);
//	
//	for(i=2; i<=num-1; i++){
//		if(num%i==0)
//			break;
//	}
//	
//	if(num==i)
//		printf("소수이다.\n");
//	else
//		printf("소수가 아니다.\n");
//		
//	return 0;
}
