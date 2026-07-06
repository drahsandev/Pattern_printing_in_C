#include <stdio.h>
int find_fact (int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int res = find_fact(num);
    printf("Factorial of %d is %d\n", num, res);
    return 0;
}  
int find_fact(int n)
{
    int fact = 1;
    for(int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}