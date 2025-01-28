#include<stdio.h>

void main()
{
    char message[50];
    int key;
    printf("Please enter the string :");
    scanf("%s",message);

    printf("Please enter the key :");
    scanf("%i",&key);

    char encryptedMessage[50];

    int i=0;
    while(i<strlen(message))
    {
        encryptedMessage[i]=(message[i]+key)%26;
        i++;
    }

    printf("The encrypted message is: %s", encryptedMessage);

}