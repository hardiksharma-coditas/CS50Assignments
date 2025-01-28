#include<stdio.h>

int main()
{
    int userInput;
    char symbol='#';

    printf("Enter a number :");
    
    scanf("%d",&userInput);

    for(int i=0;i<userInput;i++)
    {
        for(int j=userInput-i-1;j>=0;j--){
        printf("  ");
        }

        for(int k=0;k<=i;k++)
        {
            printf(" %c",symbol);
        }

        printf("\n");
    }
    return 0;
}