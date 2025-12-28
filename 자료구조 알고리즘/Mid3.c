#include<stdio.h>
void GetMid(int _a, int _b, int _c)
{
    int mid = 0;
    if(_a > _b)             // a > b
    {
        if(_b > _c)         // a > b > c
            mid = _b;
        else                // a ? c > b
        {
            if(_a > _c)     // a > c > b
                mid = _c;
            else            // c > a > b
                mid = _a;
        }
    }
    else                    // b > a
    {
        if(_a >_c)          // b > a > c
            mid = _a;
        else                // b ? c > a
        {
            if(_b > _c)     // b > c > a
                mid = _c;
            else            // c > b > a
                mid = _b;
        }
    }
    printf("(%d, %d, %d) Mid num is %d\n", _a,_b,_c,mid);
}
void main()
{
    GetMid(3, 1, 5);
    GetMid(3, 5, 1);
    GetMid(1, 5, 3); 
    GetMid(1, 3, 5);
    GetMid(5, 1, 3);
    GetMid(5, 3, 1);
    GetMid(1, 3, 1);
    GetMid(5, 1, 1);
}