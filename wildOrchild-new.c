#include <stdio.h>

// 1O1R2F2F3R3H3J4Y5I6A9L9O9E9E9WCC
int main()
{
    char inp[32], array1[2][17];
    int array2[12] = {0}, array3[12][26] = {0}, array4[12]={0}; // Initialize array2 with zeros

    scanf("%s", inp);

    // Initialize array1
    for (int i = 0; i < 16; i++)
    {
        array1[0][i] = inp[i * 2];
        array1[1][i] = inp[i * 2 + 1];
    }

    // Update array2 based on the characters in the first row of array1
    for (int i = 0; i < 16; i++)
    {
        int a = array1[0][i];
        int b = array1[1][i];
        if (a >= '0' && a <= '9')
        {
            array2[(a - '0') - 1] += 1; // Convert character to integer and update the count
            array3[(a - '0') - 1][b - 'A'] += 1;
        }
        else if (a >= 'A')
        {
            array2[(a - 'A') + 9] += 1; // Update the count for characters A to L
            array3[(a - 'A') + 9][b - 'A'] += 1;
        }
    }

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            /* code */
            if (array3[i][j] > 0)
            {
                array4[i] += 1;
            }
        }
    }

    int most = array4[0];

    for (int i = 1; i < 26; i++) {
        if (array4[i] > most) {
            most = array4[i]; // Update maxNumber if a larger element is found
        }
    }

    for (int i = 0; i < 12; i++)
    {
        /* code */
        printf("%d\n",array4[i]);
    }
    printf("%d",most);
    

    // // Print the separated rows
    // for (int i = 0; i < 16; i++)
    // {
    //     printf("%c %c\n", array1[0][i], array1[1][i]);
    // }

    // // Print the counts from array2
    // for (int i = 0; i < 12; i++)
    // {
    //     printf("this is array 2 : %d\n", array2[i]);
    // }

    // for (int i = 0; i < 12; i++)
    // {
    //     for (int j = 0; j < 26; j++)
    //     {
    //         printf("%d ", array3[i][j]);
    //     }
    //     printf("\n");
    // }

    return 0;
}
