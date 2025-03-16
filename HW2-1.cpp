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

    if (m != 0) printf("%d만 ", m);
    if (t != 0) printf("%d천 ", t);
    if (h != 0) printf("%d백 ", h);
    if (s != 0) printf("%d십 ", s);
    if (i != 0 || num == 0) printf("%d", i);

    printf("\n");

    return 0;
}