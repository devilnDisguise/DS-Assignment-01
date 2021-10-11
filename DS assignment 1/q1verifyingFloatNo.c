#include <stdio.h>

int main()
{
    char in[1000];
    printf("Sir, give me input: ");
    scanf("%s", in);
    int i = 0;
    int ctrA = 0, ctrB = 0;
    while (in[i] != '\0')
    {
        if (in[i] == '.')
        {
            ctrA++;
            if (in[i + 1] != '\0')
                ctrB = 1;
        }
        i++;
    }
    if (ctrA == 1 && ctrB == 1)
        printf("It's valid\n");
    else
        printf("It's invalid\n");
}
