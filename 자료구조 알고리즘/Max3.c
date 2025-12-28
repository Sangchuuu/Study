//input 3 integar get biggest number

#include <stdio.h>

void GetMax(int _a, int _b, int _c)
{
    int max = _a;
    if(_b > max)
    {
        max = _b;
    }
    if(_c > max)
    {
        max = _c;
    }
    printf("%d, %d, %d, The biggest number is %d\n",_a, _b, _c, max);
}
void main()
{
    GetMax(1,2,3);
    GetMax(2,1,3);
    GetMax(3,2,1);
    GetMax(3,2,3);
    GetMax(3,2,2);
}