#include <stdio.h>

int main() {
    int bud;
    printf("pls enter your budget for pizza night : ");
    scanf("%d", &bud);
    int num = bud / 599;
    int pizza = (num* 8)/2 ;
    printf("pizza support for student %d person \n",pizza);
    int balance = bud - (599 * num);
    printf("remain amount of money %d", balance);
    return 0;
}