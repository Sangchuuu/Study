#include <stdio.h>

void GetMin(int _a, int _b, int _c)
{
    int min = _a;
    if (min > _b)
        min = _b;
    if (min > _c)
        min = _c;
    printf("%d, %d, %d, The Smallest number is %d\n", _a, _b, _c, min);
}
void main()
{
    GetMin(2, 3, 4);
    GetMin(3, 4, 4);
    GetMin(3, 5, 4);
    GetMin(3, 4, 1);
    GetMin(8, 4, 1);
}
