
#include <stdio.h>
#include <string.h>
 
int countScore(char player[])
  {
    {
   int i=0;
   int playerScore=0;
   while(i<strlen(player))
   {
    char ch=player[i];
    
    if(ch=='A' || ch=='E' ||  ch=='I' || ch=='L'|| ch=='N'|| ch=='O'|| ch=='R'|| ch=='S'|| ch=='T'|| ch=='U')
    {
        playerScore=playerScore+1;
    }

    else if(ch=='B' || ch=='C' ||  ch=='M' || ch=='P')
    {
        playerScore=playerScore+3;
    }
     
    else if(ch=='D' || ch=='G')
    {
        playerScore=playerScore+2;
    }
     else if(ch=='F' || ch=='H'|| ch=='W'|| ch=='Y'|| ch=='V' )
    {
         playerScore=playerScore+4;
    }
    else if(ch=='K')
    {
         playerScore=playerScore+5;
    }
    else if(ch=='J'|| ch=='X')
    {
         playerScore=playerScore+8;
    }
    else
    {
         playerScore=playerScore+10;
    }
i++;
    }
    return playerScore;
   }
}
 


void main()
{
    char player1[50];
    char player2[50];

    printf("Please enter player1 word :");
    scanf("%s" , player1);

    printf("Please enter player2 word :");
    scanf("%s", player2);

    int player1Score=countScore(player1);
    int player2Score=countScore(player2);

  if(player1Score > player2Score)
  {
    printf("PLayer 1 wins!");
  }

  else if(player1Score < player2Score)
  {
    printf("Player 2 wins!");
  }

  else{
    printf("This is a TIE!");
  }

//printf("PLayer score is %d",player1Score);

   
}

