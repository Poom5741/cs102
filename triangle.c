#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a, &b ,&c);
    if (a + b < c || a+c < b || b + c < a) {
        printf("not triangle");
    } else if (a==b && b == c && a ==c) {
        printf("equilateral triangle");
    } else if (a == b || b == c || a == c) {
        printf("isosceles triangle");
    } else if (a != b && b != c && a != c) {
        printf("scalene triangle");
    }
    return 0;
}