//컴퓨터학과 20230837 허유정
#include <stdio.h>

void print5Chars(char ch);

int main(void) {
	print5Chars('*');
	print5Chars('+');
	print5Chars('1');
	
	return 0;
}

void print5Chars(char ch) {
	int i;
	
	for(i = 0; i < 5; i++)
		printf("%c", ch);
	printf("\n"); 
	
	return;
}
