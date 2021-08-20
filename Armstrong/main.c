#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()

{
    int n,temp,remainder,result=0;
    printf("enter number to check armstrong:");
    scanf("%d",&n);
    temp=n;
    while
        (temp!=0)
    {
        remainder=temp%10;
        result+=remainder*remainder*remainder;

        temp=temp/10;

    }

    if
        (result==n)
        printf("number is armstrong");
    else
        printf("number is not a armstrong");
        return 0;


    getch();


}
