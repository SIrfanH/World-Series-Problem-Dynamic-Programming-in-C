#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double binomial_probability(int n, double prob_TeamA_Win)
{
    double prob_matrix[20][20];     // to store probabilities
    int i;
    int j;

    prob_matrix[0][0] = 1;      // both cannot be zero
    for(i=1;i<=n;i++)
    {
        prob_matrix[i][0] = 0;      // j=0 means B won all matches so probability  of winning league for A is 0
    }

    for(j=1;j<=n;j++)
    {
        prob_matrix[0][j] = 1;      // i=0 means A won all matches which means probability is 1
    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            prob_matrix[i][j] = prob_TeamA_Win*prob_matrix[i-1][j] +(1-prob_TeamA_Win)*prob_matrix[i][j-1];
//probability A winning league = probability of A winning next match and B losing  + probability of A losing next match and B winning
        }
    }
    for(int z=0;z<=n;z++)
    {
        for(int k=0;k<=n;k++)
        {
            printf("%f\t", prob_matrix[z][k]);
        }
        printf("\n");
    }
    return prob_matrix[i-1][j-1];
}

int main()
{
    double prob_TeamA_Win;
    int n;
    printf("Enter the number of Matches Teams Have to Win in order to be Series Winner\n");
    scanf("%d",&n);
    printf("Please Enter the probability of Team A winning a match:\n");
    scanf("%lf", &prob_TeamA_Win);

    printf("Probability of Team A Winning the series is %lf\n", binomial_probability(n, prob_TeamA_Win));
    return 0;
}
