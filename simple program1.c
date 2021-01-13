#include <stdio.h>
#include <stdlib.h>
/*
1. Write a simple program to print your name, class.
2. Write C++ program to calculate sum of two numbers
3. Write C++ Program to print your name 100 times.
*/
int main()
{
    int choise,i , num1 ,num2;
    printf("please enter number to run the program: \n");
    scanf("%d",&choise);
    if(choise == 1 ){
        printf("Mostafa Lotfy :");
    }
    else if (choise == 2 ){

            printf("please enter num1 \n");
            scanf("%d",&num1);
             printf("please enter num2 \n");
            scanf("%d",&num2);
            printf("sum of tow number is %d \n", num1+num2);
    }
    else if (choise == 3 ){
        for(i=0;i<100;i++){
            printf("mostafa lotfy :\n");
        }
    }

        return 0;
}
