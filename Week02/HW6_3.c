//컴퓨터학과 20230837 허유정
#include <stdio.h>
int main(void){
	char s;
	int h, w;
	
	printf("Enter your gender(M/F): ");
	scanf("%c", &s);
	
	if(s == 'F'){
		printf("Enter your height: ");
		scanf("%d", &h);
		
		printf("Enter your weight: ");
		scanf("%d", &w);
		
		if(h <= w + 110)
			printf("You NEED a diet. Try HARDER.");
		else
			printf("You do NOT need a diet. Keep exercising.");
	}
	else
		printf("Sorry, this fitness center is for women only.");
} 
