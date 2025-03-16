#include <stdio.h>

int main() {
    int num;
    printf("입력 (0 ~ 99999): ");
    scanf("%d", &num);

    if (num < 0 || num >= 100000) {
        printf("error\n");
        return 1;
    }

    int m = num / 10000;        
    int t = (num / 1000) % 10;  
    int h = (num / 100) % 10;   
    int s = (num / 10) % 10;    
    int i = num % 10;           

    int hasOutput = 0; 

    if (m != 0) {
        printf("%d만 ", m);
        hasOutput = 1;
    }
    if (t != 0) {
        printf("%d천 ", t);
        hasOutput = 1;
    }
    if (h != 0) {
        printf("%d백 ", h);
        hasOutput = 1;
    }
    if (s != 0) {
        printf("%d십 ", s);
        hasOutput = 1;
    }
    if (i != 0) {
        printf("%d", i);
        hasOutput = 1;
    }

    if (!hasOutput) {
        printf("0");
    }

    printf("\n");

    return 0;
}
