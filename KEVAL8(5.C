#include<stdio.h>
#include<conio.h>

main()

{
    clrscr();
    int  len, bre,area;
    printf("enter length of rectangle=");
    scanf("%d",&len);
    printf("enter breadth of rectangle=");
    scanf("%d",&bre);
    area=len*bre;
    printf("area of rectangle=%d",area);
    getch();


}