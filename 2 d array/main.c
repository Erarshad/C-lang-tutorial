#include<stdio.h>
#include<conio.h>
int main()
{
    int a[2][2],i,flag;
    for
        (i=0;i<2;i++)
        //(i=0;i<rowsize;i++)
    {
        for
            (flag=0;flag<2;flag++)
            //(flag=0;flag<Columnsize;flag++)
        {
            printf("enter elements :");
            scanf("%d",&a[i][flag]);
        }

    }


       printf("using machine learning ");

        for
            (i=0;i<2;i++)
        {
            for (flag=0;flag<2;flag++)
            {
                printf(":%d",a[i][flag]);
            }

        }

        getch();
        return(0);
        // a signel to os to run perfectly without lre
    }

