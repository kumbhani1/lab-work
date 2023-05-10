#include<stdio.h>
#include<conio.h>

main()
{

   int x=67,y=997,z=896,xyz;
    xyz=(x*x*x)+(y*y*y)+(z*z*z)+(3*(x+y)*(y+z)*(z+x));
    clrscr();
    printf("xyz=%d",xyz);

    getch();

}