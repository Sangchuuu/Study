#include<stdio.h>
void SumWhile(int _n)
{
    int sum = 0;
    for(int i = 1; i <= _n; i++)
    {
        sum += i;
    }
    printf("Add from 1 to %d = %d\n", _n, sum);
}

void main()
{
    SumWhile(10);    
}