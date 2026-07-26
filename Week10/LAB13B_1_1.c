//컴퓨터학과 20230837 허유정
#include <stdio.h>

int main(void){
	//필요한 변수
	char s[80];
	int i, length = 0;
	
	// 문자열 변수 입력
	printf("Enter a string: ");
	scanf("%s", s);
	
	// 문자열 변수의 길이를 센다(for문 사용)
	for(i = 0; s[i] != '\0'; i++)
		length++;

	// 길이를 출력한다.
	printf("길이는 %d", length);
	for(i = length; i >= 0; i--)
		printf("%c\n", s[i]);
		
	return 0;
}
