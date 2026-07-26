//컴퓨터학과 20230837 허유정
#include <stdio.h>
#define SIZE 10

int main(void){
	int odd[SIZE], even[SIZE];
	int num;
	int i, oddIndex = 0, evenIndex = 0;
	
	for (i = 0; i < SIZE; i++){
		printf("Enter a number:");
		scanf("%d", &num);
		
		// num 이 짝수이면 even 에 홀수이면 odd 에 넣는다. 각각 인덱스를 사용한다.
		if(num % 2 != 0){
			odd[oddIndex] = num;
			oddIndex++;
		}
		else{
			even[evenIndex] = num;
			evenIndex++;
		}
	}
	
	//A)
	printf("\n 홀수 출력:");
	for (i = 0; i < oddIndex; i++)
		printf("%d ", odd[i]);
	
	//B)
	printf("\n 짝수 출력:");
	for (i = 0; i < evenIndex; i++)
		printf("%d ", even[i]);
	printf("\n");
	
	return 0;
}
