#include<stdio.h>
#include<math.h>

int main()
{
    int a;
    float b;
    int c;
    int d;
    float e;
    printf("1.for square root");
    printf("\n2.for cube root");
    printf("\nenter your need : ");
    scanf("%d",&c);
    if (c==1)
    {
        printf("enter the number");
        scanf("%d",&a);
        b=pow(a,0.5);
        printf("square root is :%f",b);

    }

    else
    {
        printf("enter the number");
        scanf("%d",&d);


        e=pow(d,0.33);

        printf("cube root is :%f",e);








    }

    printf("\ndesign and developed by Mohammad Arshad \nStarsoft pvt ltd");


     getch();




}






















