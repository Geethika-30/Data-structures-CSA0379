#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int n, i;
    unsigned long long factorial = 1;
 
    printf("Enter a number to find factorial: ");
    scanf("%d",&n);
 
    
    if (n < 0)
        printf("Error! Please enter any positive integer number");
 
    else
    {
        for(i=1; i<=n; ++i)
        {
            factorial *= i;             
        }
        printf("Factorial of Number %d = %llu", n, factorial);
    }
 
    getch();
}

