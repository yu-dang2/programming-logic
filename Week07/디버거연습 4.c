//컴퓨터학과 20230837 허유정 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
	 int n;
	 
	 printf("Enter a number: ");
	 scanf("%d", &n);
	 
	 int k = 0;
	 int result = 1;
	 while (result <= n) { // 여기에 BP를 설정하고
		// continue를 사용해 다음BP까지 이동하면서 result와 k의 값을 살펴본다.
		 result *= 2;
		 k++;
	 }
	 printf("%d\n", k);
} 
