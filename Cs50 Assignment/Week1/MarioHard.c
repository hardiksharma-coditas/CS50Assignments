#include <stdio.h>

void main() {
   
     int userInput;
    char symbol='#';
    
    printf("Please Enter a number between 1 to 8:");

    if(userInput<0 && userInput>8) {
        printf("Please enter the number in the given range");
        exit(0);
    }

    scanf("%d",&userInput);

    for(int i=0;i<userInput;i++)
    {
        for(int j=userInput-i-1;j>=0;j--)
        {
            printf("  ");
        }

        for(int k=0;k<=i;k++)
        {
            printf(" %c",symbol);
        }
        
        printf("  ");
        for(int x=0;x<=i;x++)
        {
            printf(" %c",symbol);
        }
        
        for(int y=userInput-i-1;y>=0;y--)
        {
            printf("  ");
        }

        printf("\n");
    }
}