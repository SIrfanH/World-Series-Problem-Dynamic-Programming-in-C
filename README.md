# World-Series-Problem-Dynamic-Programming-in-C
Dynamic Programming is a programming technique that solves some of the optimization problems by breaking them down to subproblems. This technique uses the fact that the optimal solution to the problem is dependent to optimal solution to its simpler subproblems.

Two teams **_A_** and **_B_** play against each other, the team that first reach **_N_** number of wins is the series winner. The probability of team **_A_** winning a match is **_P_** and probabily of team **_A_** losing a match is **_1-P_**. Thus a draw is not possible between these two teams. Let **_P(i,j)_** be the probability of team **_A_** winning the series if team **_A_** needs **_i_** more games to win the series and team **_B_** needs **_j_** more games to win the series.<br/>

This program uses Dynamic Programming Technique to calculate the probability of team **_A_** winning the series while team **_A_** needs **_i_** game to win and team **_B_** needs **_j_** games to win given that they need to reach **_N_** number of wins.
