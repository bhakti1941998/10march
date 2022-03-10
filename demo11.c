#include<stdio.h>
/*
    Increment/ Decrement operator
    1. Pre increment/decrement
        - value of variable is incremented/decremented first and then updated value is used in the expression

    2. Post increment/decrement
        - value of variable is used in expression and then it is incremented/decremented
*/


int main(void)
{
    int res = 0, num = 8;

   
    printf("res = %d, num = %d\n", res, num);
    printf("%d %d %d ", num++ ,num++ ,num++);
    return 0;
}