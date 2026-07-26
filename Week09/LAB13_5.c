//컴퓨터학과 20230837 허유정
#include <stdio.h>

int main(){
	int binary[8] = {0};
	int num, i, binaryIndex = 0;
	
	printf("Enter 양수(< 256): ");
	scanf("%d", &num);
		
	for(i = 0; i < 8; i++){
		binary[i] = num % 2;
		num /= 2;
		binaryIndex++;
		
		if(num == 0)
			break;
	}
	
	for(i = binaryIndex - 1; i >= 0; i--)
		printf("%d", binary[i]);
	printf("\n");
		
	return 0;
}
