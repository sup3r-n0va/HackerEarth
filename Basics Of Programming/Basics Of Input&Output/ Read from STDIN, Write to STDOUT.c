#include <stdio.h>
#include <string.h>

int num(int x, int sum)
{
    //get input from the user
    scanf("%d\n", &x);
    
    sum = x * 2;
    
    return sum;
}

int main()
{

    int Number;
    int x;
    int sum;
    char Word[100];
    
    Number = num(x, sum);
    
    //get word from user
    scanf("%s\n", &Word);
    
    
    printf("%d\n", Number);
    printf("%s\n", Word);
    
    return 0;
}
