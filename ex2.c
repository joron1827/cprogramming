/********************************************************
*                      문제설명                         *
*   양의 정수 n을 입력받은 뒤,                          *
*	1에서 n까지의 곱을 계산하여 출력하시오.             *
*********************************************************/

#include <stdio.h>

int factorial(int n)
{
    if(n%2==1)
    {
        return 0;
    }
    else
    {
        return n + factorial(n-1);
    }
}
int main()
{
    int aa;
    scanf("%d", &aa);
    printf("%d", factorial(aa));
    return 0;
}