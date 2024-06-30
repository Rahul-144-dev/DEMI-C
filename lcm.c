/*Find LCM of two numbers*/
#include <stdio.h>
#include <math.h>
int main()
{
    int n1, n2, lcm, max;
    printf("enter number : ");
    scanf("%d", &n1);
    printf("enter number : ");
    scanf("%d", &n2);
    // if (n1 > n2)
    //     max = n1;
    // else
    //     max = n2;
    max = n1 > n2 ? n1 : n2;
    while (1)
    {
        if ((max % n1 == 0) && (max % n2 == 0))
        {
            lcm = max;
            printf("%d", lcm);
            break;
        }
        ++max;
    }
    return 0;
}