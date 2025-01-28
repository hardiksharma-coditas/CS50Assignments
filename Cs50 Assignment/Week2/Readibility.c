#include <stdio.h>
#include <string.h>
#include <math.h>
int countLetters(char paragraph[])
{
 
 int i=0;
 int numberOfLetters=0;
 while(i<strlen(paragraph))
 {
    int letterValue=paragraph[i];

    if((letterValue>64 && letterValue<91) || (letterValue>96 && letterValue<123))
    {
        numberOfLetters++;
    }
    i++;
 }
return numberOfLetters;
}

int countSentences(char paragraph[])
{
    int i=0;
    int countSentences=0;
    while(i<strlen(paragraph)){
   // char character=paragraph[i];

    if(paragraph[i]==46 || paragraph[i]==33 || paragraph[i]==63|| paragraph[i]==44 ){
    countSentences++;
    }
    i++;
    }
    return countSentences;
}

void main(){
    
    char bookParagraph[500];
    printf("Enter the para from book\n");

    fgets(bookParagraph,sizeof(bookParagraph),stdin);
 
    int numberOfLetters=countLetters(bookParagraph);
    printf("Letter value \n%d",numberOfLetters);
    int numberOfSentences=countSentences(bookParagraph);
    printf("\nSentences %d",numberOfSentences);
    printf("\n");
    int indexOfBook=0.0588 * numberOfLetters - 0.296 * numberOfSentences - 15.8;

    if(indexOfBook>15) 
    {
        printf("Grade is 16+");
    }

    else if(round(indexOfBook)<1){
      printf("Below Grade 1");
    }

    else{
        printf("Grade level %i",round(indexOfBook));
    }
   // printf("Paragraph is %s",bookParagraph);
}