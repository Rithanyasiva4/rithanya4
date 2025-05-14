#include<stdio.h>
int main()
{
    int a = 20, b,c,d,e;
    b = a++;
    printf("\n VALUE OF B: %d", b);
    c= ++a;
    printf("\n VALUE OF C:%d", c);
    d= --a;
    printf("\n VALUE OF D:%d", d);
    e= a--;
    printf("\n VALUE OF E:%d",e);
    return 0;
}