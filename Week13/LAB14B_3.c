//컴퓨터학과 20230837 허유정 
#include <stdio.h>

int strLength(char s[]);
void printUpperCase(char s[]);

int main(void) {
	char str[81];
	
	printf("Enter a string: ");
	scanf("%s", str);
	
	printf("길이는 %d\n", strLength(str)); // strLength 호출
	printf("대문자만 출력하면\n");
	printUpperCase(str); // printUpperCase 호출
	
	return 0; 
}

int strLength(char s[]) {
	int i;
	
	for(i = 0; s[i] != '\0'; i++) {
	}
	
	return i;
}

void printUpperCase(char s[]) {
	int i;
	
	for (i = 0; s[i] != '\0'; i++)
		if (s[i] >= 'A' && s[i] <= 'Z')
			printf("%c", s[i]);
		printf("\n");
	
	return;
}
