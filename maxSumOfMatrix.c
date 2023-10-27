#include <stdio.h>
#include <stdlib.h> // Required for dynamic memory allocation

int main()
{
    int num = 0, val = 0, sum1 = 0, sum2 = 0, sum3 = 0,sum4 = 0;
    printf("Enter the number of rows and columns: ");
    scanf("%d", &num);

    // Dynamically allocate memory for the matrix
    int **inp = (int **)malloc(num * sizeof(int *));
    for (int i = 0; i < num; i++)
    {
        inp[i] = (int *)malloc(num * sizeof(int));
    }

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            scanf("%d", &val);
            inp[i][j] = val;
        }
    }

    printf("\n");
    // calculate all angle

    if (num % 2 != 0)
    {
        //sum1 is top left to bottom right
        //sum2 is bottom left to top right
        //sum3 is center vertical
        //sum4 is center horizontal
        for (int i = 0; i < num; i++)
        {
            sum1 += inp[i][i];
        }

        for (int i = 0; i < num; i++)
        {
            int j = (num - 1);
            sum2 += inp[j][i];
            j--;
        }

        int center = ((num + 1) / 2) - 1;
        for (int i = 0; i < num; i++)
        {
            sum3 += inp[center][center];
            sum4 += inp[center][i];
        }

    } else {
         for (int i = 0; i < num; i++)
        {
            sum1 += inp[i][i];
        }

        for (int i = 0; i < num; i++)
        {
            int j = (num - 1);
            sum2 += inp[j][i];
            j--;
        }

        int center1 = 0 ,center2=0;
        center1 = (num/2) -1 ;
        center2 = (num/2);
        
        for (int i = 0; i<num ;i++) {
            sum3 += (inp[i][center1] + inp[i][center2])/2;
            sum4 += (inp[center1][i] + inp[center2][i])/2;
        }

        

    }
    // find max value
    int index = num + 1 ;
    int max[index];
    max[0] = sum1;
    max[1] = sum2;
    max[2] = sum3;
    max[3] = sum4;

    int most = max[0];

    for (int i = 1; i < num; i++)
    {
        if (max[i] > most)
        {
            most = max[i]; // Update maxNumber if a larger element is found
        }
    }

    printf("%d", most);

    // Don't forget to free the dynamically allocated memory
    for (int i = 0; i < num; i++)
    {
        free(inp[i]);
    }
    free(inp);

    return 0;
}
