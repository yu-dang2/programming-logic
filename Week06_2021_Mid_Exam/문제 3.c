//컴퓨터학과 20230837 허유정
#include <stdio.h>

int main(){
	int x, y, i, n;
	int sum = 0;
	int count = 0;

	scanf("%d %d", &x, &y);
	
	for(i = 0; i < 10; i++){
		scanf("%d", &n);
		
		if(n > x && n < y){
			sum += n;
			count++;
		}
	}
	printf("%d\n", sum);
	printf("%d\n", count);
	
	return 0;
}
