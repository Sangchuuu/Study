#include <stdio.h>

void GetMax(int _a, int _b, int _c, int _d)
{
    int max = _a;
    if(max < _b)
        max = _b;
    if(max < _c)
        max = _c;
    if(max < _d)
        max = _d;
    printf("%d, %d, %d,%d, The biggest number is %d\n",_a, _b, _c, _d, max);
}
void main()
{
    GetMax(1,2,3,4);
    GetMax(2,3,4,4);
    GetMax(4,3,5,4);
    GetMax(6,3,4,1);
    GetMax(6,8,4,1);    
}
