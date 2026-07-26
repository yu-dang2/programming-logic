//컴퓨터학과 20230837 허유정
#include <stdio.h>
int main(){
	int num, i;
	int score;
	int total = 0;
	double ave;
	
	printf("Enter a student number: ");
	scanf("%d", &num);
	
	i = 1;
	while(i <= num){
		printf("Enter a score: ");
		scanf("%d", &score);
		total += score;
		i++;
	}
	printf("The total is %d\n", total);	
	
	if(num != 0)
		ave = (double) total / num;	
	else
		ave = 0;
	printf("The average is %.1f", ave);
} 
