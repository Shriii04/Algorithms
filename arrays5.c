// Write a C program to count total number of even and odd elements in an array.

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[4];
    int i, even = 0, odd = 0;
    printf("Enter the elements of array:\n");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        if ((a[i]) % 2 == 0)
        {
            even = even + 1;
        }
        else
        {
            odd = odd + 1;
        }
    }
    printf("Number of Even Elements =%d\n", even);
    printf("Number of Odd Elements =%d\n", odd);

    return 0;
}
