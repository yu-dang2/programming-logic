//컴퓨터학과 20230837 허유정
#include <stdio.h>

int main() {
    int score;
    double total;

	scanf("%d", &score);

    if (score >= 100)
        total = score * 1.5;
        
    else if (score >= 50) 
        total = score * 1.25;

    else if (score >= 10) 
        total = score * 1.15;

    else 
        total = score;

    printf("%.2f\n", total);

    return 0;
}
