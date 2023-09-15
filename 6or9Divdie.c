#include <stdio.h>

int main() {
    int a,b,i,total;
    printf("pls enter num 1 : ");
    scanf("%d",&a);
    printf("pls enter num 2 : ");
    scanf("%d",&b);
    
    for (i=a ;i<=b; i++) {
        if (i % 6 == 0 && i % 9 == 0) {
            printf("%d ",i);
            total = total + i;
        }
    
    }
    printf("\nthis is total %d",total);
    return 0;
}