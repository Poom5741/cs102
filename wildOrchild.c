#include <stdio.h>

// 1O1R2F2F3R3H3J4Y5I6A9L9O9E9E9WCC
int main()
{
    char inp[32];
    scanf("%s", inp);
    char array1[16], array2[16];
    int var1 = 0, var2 = 0, var3 = 0, var4 = 0, var5 = 0, var6 = 0, var7 = 0, var8 = 0, var9 = 0, var10 = 0, var11 = 0, var12 = 0, var13 = 0, var14 = 0;
    int varA = 0, varB = 0, varC = 0, varD = 0, varE = 0, varF = 0, varG = 0, varH = 0,
        varI = 0, varJ = 0, varK = 0, varL = 0, varM = 0, varN = 0, varO = 0, varP = 0,
        varQ = 0, varR = 0, varS = 0, varT = 0, varU = 0, varV = 0, varW = 0, varX = 0,
        varY = 0, varZ = 0;

    for (int i = 0, j = 0, k = 0; inp[i] != '\0'; i++)
    {
        if (i % 2 == 0)
        {
            array1[j++] = inp[i];
        }
        else
        {
            array2[k++] = inp[i];
        }
    }
    for (int i = 0; i < 16; i++)
    {
        if (array1[i] == '1')
        {
            var1 += 1;
        }
        else if (array1[i] == '2')
        {
            var2 += 1;
        }
        else if (array1[i] == '3')
        {
            var3 += 1;
        }
        else if (array1[i] == '4')
        {
            var4 += 1;
        }
        else if (array1[i] == '5')
        {
            var5 += 1;
        }
        else if (array1[i] == '6')
        {
            var6 += 1;
        }
        else if (array1[i] == '7')
        {
            var7 += 1;
        }
        else if (array1[i] == '8')
        {
            var8 += 1;
        }
        else if (array1[i] == '9')
        {
            var9 += 1;
        }
        else if (array1[i] == 'A')
        {
            var11 += 1;
        }
        else if (array1[i] == 'B')
        {
            var12 += 1;
        }
        else if (array1[i] == 'C')
        {
            var13 += 1;
        }
    }

    for (int i = 0; array2[i] != '\0'; i++)
    {
        char currentChar = array2[i];
        switch (currentChar)
        {
        case 'A':
            varA++;
            break;
        case 'B':
            varB++;
            break;
        case 'C':
            varC++;
            break;
        case 'D':
            varD++;
            break;
        case 'E':
            varE++;
            break;
        case 'F':
            varF++;
            break;
        case 'G':
            varG++;
            break;
        case 'H':
            varH++;
            break;
        case 'I':
            varI++;
            break;
        case 'J':
            varJ++;
            break;
        case 'K':
            varK++;
            break;
        case 'L':
            varL++;
            break;
        case 'M':
            varM++;
            break;
        case 'N':
            varN++;
            break;
        case 'O':
            varO++;
            break;
        case 'P':
            varP++;
            break;
        case 'Q':
            varQ++;
            break;
        case 'R':
            varR++;
            break;
        case 'S':
            varS++;
            break;
        case 'T':
            varT++;
            break;
        case 'U':
            varU++;
            break;
        case 'V':
            varV++;
            break;
        case 'W':
            varW++;
            break;
        case 'X':
            varX++;
            break;
        case 'Y':
            varY++;
            break;
        case 'Z':
            varZ++;
            break;
        }
    }

    int array3[26];
    array3[0] = varA;
    array3[1] = varB;
    array3[2] = varC;
    array3[3] = varD;
    array3[4] = varE;
    array3[5] = varF;
    array3[6] = varG;
    array3[7] = varH;
    array3[8] = varI;
    array3[9] = varJ;
    array3[10] = varK;
    array3[11] = varL;
    array3[12] = varM;
    array3[13] = varN;
    array3[14] = varO;
    array3[15] = varP;
    array3[16] = varQ;
    array3[17] = varR;
    array3[18] = varS;
    array3[19] = varT;
    array3[20] = varU;
    array3[21] = varV;
    array3[22] = varW;
    array3[23] = varX;
    array3[24] = varY;
    array3[25] = varZ;

    int most = array3[0];

    for (int i = 1; i < 26; i++) {
        if (array3[i] > most) {
            most = array3[i]; // Update maxNumber if a larger element is found
        }
    }
    

    printf("%d\n", var1);
    printf("%d\n", var2);
    printf("%d\n", var3);
    printf("%d\n", var4);
    printf("%d\n", var5);
    printf("%d\n", var6);
    printf("%d\n", var7);
    printf("%d\n", var8);
    printf("%d\n", var9);
    printf("%d\n", var10);
    printf("%d\n", var11);
    printf("%d\n", var12);
    printf("%d\n", var13);
    printf("%d\n", most);

    return 0;
}
