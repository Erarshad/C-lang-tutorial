#include<stdio.h>
#include<conio.h>

int main()
{
    int r,c,i,j;
    int first[10][10];
    int second [10][10];
    int sum[10][10];


    printf("enter the row:");
    scanf("%d",&r);

    printf("enter the column\n:");
    scanf("%d",&c);

    for
        (i=0;i<r;i++)
    {
        for
            (j=0;j<c;j++)
        {
            printf("enter the element\n\t\a:");
            scanf("%d",&first[i][j]);
        }


    }


    for
        (i=0;i<r;i++)
    {
        for
            (j=0;j<c;j++)
        {
            printf("enter the element of second matrix\n\t :");
            scanf("%d",&second[i][j]);
        }


    }

for (i=0;i<r;i++)
{
    for (j=0;j<c;j++)
    {
        sum[i][j]=first[i][j]+second[i][j];
        printf("[%d\t\a]",sum[i][j]);
    }

    }
      getch();
}














