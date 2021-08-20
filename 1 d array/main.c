#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[5], i;

    for(i = 0; i < 5; i++)
    {
        printf("Enter a [%d] :",i);
        scanf("%d", &arr[i]);
    }

    printf("\nPrinting elements of the array: \n\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    // signal to operating system program ran fine
    return 0;
    //*How it works:

//In Line 5, we have declared an array of 5 integers and variable i of type int. Then a for loop is used to enter five elements into an array. In scanf() we have used & operator (also known as the address of operator) on element arr[i] of an array, just like we had done with variables of type int, float, char etc. Line 13 prints "Printing elements of the array" to the console. The second for loop prints all the elements of an array one by one.

}
