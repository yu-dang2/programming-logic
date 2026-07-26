//컴퓨터학과 20230837 허유정
#include <stdio.h>
int main(){
	char l;
	
	printf("Enter an upper letter(A-Y): ");
	scanf("%c", &l);
	
	printf("Character given is %c(%d)\n", l, l);
	printf("The next character is %c(%d)\n", l+1, l+1);
	printf("The lower case letter is %c(%d)", l+32, l+32);
} 
