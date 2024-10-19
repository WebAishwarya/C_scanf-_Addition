#include<stdio.h>

int main()
{
    int n1, n2, result;
    
    printf("Enter two numbers for addition : \n");
    
    scanf("%d", &n1);
    scanf("%d", &n2);
    //  scanf("%d%d", &n1, &n2);
    
    result = n1 + n2;
    
    printf("\nAddition of %d & %d is : %d", n1, n2, result);
    
    return 0;
}
