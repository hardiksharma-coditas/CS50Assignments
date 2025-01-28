#include<stdio.h>
#include<string.h>
#include <stdlib.h>
void main()
{
    char message[50];
    int key;
    printf("Please enter the string :");
    fgets(message,sizeof(message),stdin);

    printf("Please enter the key :");
    scanf("%i",&key);

    char encryptedMessage[50];

    int i=0;
    while(i<strlen(message))
    {
       if(message[i]>='a' && message[i]<='z')
       {
        encryptedMessage[i]=((message[i]-'a'+key)%26)+'a';
       }
       else if(message[i]>='A' && message[i]<='Z')
       {
        encryptedMessage[i]=((message[i]-'A'+key)%26)+'A';
       }
       else{
        encryptedMessage[i]=message[i];
       }
        i++;
    }

    printf("The encrypted message is: %s", encryptedMessage);

}