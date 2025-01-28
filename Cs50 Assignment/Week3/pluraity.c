#include<stdio.h>
#include<string.h>


int main()
{
    int numberOfCandidates;
    char candidates[10][100];
    printf("Enter the number of candidate :");
    scanf("%i" ,&numberOfCandidates);
    getchar();

    printf("Enter names of the candidates");
    for(int i=0;i<numberOfCandidates;i++)
    {
     fgets(candidates[i],100,stdin);
     candidates[i][strcspn(candidates[i],"\n")]=0;   
    }

    int numberOfVoters;
    printf("Enter the number of voters");
    scanf("%i",&numberOfVoters);
    getchar();
    
    char vote[100];
    int votes[10];
    for(int i=0;i<numberOfVoters;i++)
    {
        printf("Vote :");
        fgets(vote,100,stdin);
        vote[strcspn(vote,"\n")]=0;
    

    int found=0;
    

    for(int j=0;j<numberOfCandidates;j++)
    {
        if(strcmp(vote, candidates[j])==0)
        {
            votes[j]++;
            found=1;
            break;
        }
    }

    if(!found) { printf("Invalid Vote");}
}

int maxVotes=0,winnerPosition=-1;

for(int i=0;i<numberOfCandidates;i++)
{
    if(votes[i]>maxVotes)
    {
        maxVotes=votes[i];
        winnerPosition=i;
    }
}

if(winnerPosition!=-1) {
    printf("%s Won!",candidates[winnerPosition]);
}
else
{
    printf("No votes were cast");
}
return 0;
}