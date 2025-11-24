#include <stdio.h>
int main()
{
    int num, a[1], result = 0, rem, enterednumber;
    printf("enter a three digit number");
    scanf("%d", &a[0]);
    enterednumber = a[0];
    while (a[0] > 0)
    {
        rem = a[0] % 10;
        num = rem * rem * rem;
        a[0] = a[0] / 10;
        result = result + num;
    }
    if (result == enterednumber)
    {
        printf("the entered number is an armstrong number");
    }
    else
    {
        printf("the entered number is not an armstrong number");
    }
}
