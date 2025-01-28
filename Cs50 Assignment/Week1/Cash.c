#include<stdio.h>

void main()
{
    int changeOwed;
    int twentyFiveCent=25;
    int tenCent=10;
    int fiveCent=5;
    int oneCent=1;

    printf("Please give the changed Owed :");

    scanf("%d",&changeOwed);
    
    int twentyFiveCentsNeeded;
    if(changeOwed>twentyFiveCent-1){
     twentyFiveCentsNeeded=changeOwed/twentyFiveCent;

     changeOwed=changeOwed%twentyFiveCent;
    }
     
     int tenCentsNeeded;
    if(changeOwed>tenCent-1){
    tenCentsNeeded=changeOwed/tenCent;

    changeOwed=changeOwed%tenCent;
    }

     int fiveCentsNeeded;
    if(changeOwed>fiveCent-1){
    tenCentsNeeded=changeOwed/fiveCent;

    changeOwed=changeOwed%fiveCent;
    }

     int oneCentsNeeded;
    if(changeOwed>oneCent-1){
    oneCentsNeeded=changeOwed/oneCent;
    
    changeOwed=changeOwed%oneCent;
    }

    int totalCoins=oneCentsNeeded+tenCentsNeeded+fiveCentsNeeded+twentyFiveCentsNeeded;

    printf("Total Number of Coins is: %d",totalCoins);
}