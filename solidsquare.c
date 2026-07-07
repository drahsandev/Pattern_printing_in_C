#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows: "); // row and column are same for solid square
    scanf("%d", &n);
    for(int j =1 ; j<=n;j++)
    {
        for (int i=1;i<=n;i++) //print number of staric
        {
             printf("* ");
        }
        
        printf("\n"); // pressed enter for next line.
    }
    return 0;
}