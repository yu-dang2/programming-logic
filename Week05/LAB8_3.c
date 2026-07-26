//컴퓨터학과 20230837 허유정
#include <stdio.h>
int main(){
	int n, num, i;
	int count = 0;
	
	printf("Enter the # of integers: ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		printf("Enter an integer: ");
		scanf("%d", &num);
		
		if(num%2==0)
			count++;
	}
	printf("The number of even numbers is %d.\n", count);

	return 0;
}
