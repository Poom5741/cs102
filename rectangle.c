#include <stdio.h>

int main () {

    int a = 0,b = 0 ;
    scanf("%d %d",&a,&b);
    char XO[2] = {'O','X'};

    for (int i =0 ; i<a; i++) {
        if (i % 2 ==0) {
            for (int j =0 ; j<b ; j++) {
                if (j %2==0) {
                    printf("%c",XO[0]);
                } else if (j%2 ==1) {
                    printf("%c",XO[1]);
                }
            }
        } else if (i %2 ==1) {
            for (int k =0 ; k<b ; k++) {
                if (k %2==0) {
                    printf("%c",XO[1]);
                } else if (k%2 ==1) {
                    printf("%c",XO[0]);
                }
            }
        }
        printf("\n");
    }
    // for (int i = 0 ; i < 2; i++) {
    //     printf("%c",XO[i]);
    // }

    return 0;
}