#include <stdio.h>
#include <math.h>
#include <myfunc.h>
int main()
{
    char op;
    double n1, n2;
    printf("enter operator : ");
    scanf("%c", &op);
    printf("enter number : ");
    scanf("%lf", &n1);
    printf("enter number : ");
    scanf("%lf", &n2);
    switch (op)
    {
    case '+':
        printf("%d\n", sum(n1, n2));
        break;
    case '-':
        printf("%d\n", subd(n1, n2));
        break;
    case '*':
        printf("%d\n", muld(n1, n2));
        break;
    case '/':
        printf("%d\n", divd(n1, n2));
        break;
    case '%':
        printf("%d\n", modulo(n1, n2));
        break;
    default:
        printf("invalid operator");
        break;
    }
    return 0;
}