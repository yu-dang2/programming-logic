//컴퓨터학과 20230837 허유정 
#include <stdio.h>
int main(void){
	int s1, s2, a;
	
	printf("Enter two scores: ");
	scanf("%d %d", &s1, &s2);
	
	a = (s1 + s2) / 2;
	printf("The average is %d.", a);
}
