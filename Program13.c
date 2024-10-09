/*
Program to study about all four storage classes

The four storage classes are:
(i) Automatic Storage Classes
(ii) Register Storage Classes
(iii) Static Storage Classes
(iv) External Storage Classes
*/

#include <stdio.h>
void increment()
{
    static int x = 1;
    printf("%d",x);
    x+=1;
}
void fun()
{
    extern int y ;
}
void main()
{
    // Automatic Storage Class
    auto int i, j;
    printf("\n%d%d",i,j);

    auto int a = 1;
    {
        auto int b = 2;
        {
            auto int c = 3;
            printf("\n%d",c);
        }
        printf("%d",b);
    }
    printf("%d",a);

    // Register Storage Class
    register int k;
    printf("\n");
    for(k=1;k<=10;k++)
    printf("%d\t",k);

    // Static Storage Class
    printf("\n");
    increment();
    increment();
    increment();

    // External Storage Class
    printf("\n");
    int y = 3;
    printf("%d",y);
    fun();
}