// Write a function int max_of_four(int a, int b, int c, int d) which reads four arguments(integers) and returns the greatest of them. (source: HacckerRank)

#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{
    if (a >= b && a >= c && a >= d)
    {
        printf("The greatest number is %d", a);
    }
    else if (b >= a && b >= c && b >= d)
    {
        printf("The greatest number is %d", b);
    }
    else if (c >= b && c >= a && c >= d)
    {
        printf("The greatest number is %d", c);
    }
    else
    {
        printf("The greatest number is %d", d);
    }
}
int main()
{
    int a, b, c, d;
    printf("Enter 4 integers.This program print the maximum of 4 integers.\n\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    max_of_four(a, b, c, d);
    return 0;
}