//컴퓨터학과 20230837 허유정 
#include <stdio.h>
int main(void){
	int t, h, m, s;
	
	printf("Enter the total seconds: ");
	scanf("%d", &t);
	
	printf("---Calculation Result---\n");
	printf("%d seconds\n", t);
	
	h = t / 3600;
	m = t % 3600 / 60;
	s = t % 3600 % 60;
	printf("%dh %dm %ds", h, m, s);
}
