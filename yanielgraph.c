#include <stdio.h>
#include <cs50.h>

    int TOTALPOINTSEARNED = 0; 
    int TOTALPOINTSPOSSIBLE = 0;

int main(void){
    int assignments = get_int("How many total assignments?:\n");
    float earnedgraph[assignments]; 
    float possiblegraph[assignments];
        for(int i = 0; i < assignments;i++){ //sets up a for loop for the number of assignments
          earnedgraph[i] = get_int ("Total points earned on assignment #%d:\n",i+1); // fills in the array with the points earned for each assignment 
          TOTALPOINTSEARNED = TOTALPOINTSEARNED+ earnedgraph[i];// adds up the total for points earned
          possiblegraph[i] = get_int ("Total possible points on assignment #%d:\n",i+1); //fills in the array with the points possible for each assignment
          TOTALPOINTSPOSSIBLE = TOTALPOINTSPOSSIBLE+ possiblegraph[i];//adds up the total for points possible
    }
    float finalscore = 0; // float means it is a number with decimals and lets you divide with decimals
    finalscore = (float)TOTALPOINTSEARNED/(float)TOTALPOINTSPOSSIBLE*100; // the times 100 is so that way we get the percent value of the number
    printf("Your current grade is: ");
        printf("%.02f ",finalscore); // the .02 makes it so it is not continous and only has two place values.
        printf("%%\n"); // %% is so that it shows as a %
    for(int g = 0; g < assignments;g++){ // sets up a for loop for the number of assignments 
        float percent = earnedgraph[g]/possiblegraph[g]*100; // divides earnedgraph with possiblegraph and multipleis to get the percent value 
        for(int x = 0; x < percent;x++){ // this adds a - per every one percent
            printf("-"); // what the graph displays as its contents when drawn

        }
        printf("%.02f",percent);
        printf("%%\n"); //shows the percentage of each individual assignment in order 
    }
    return 0;
}
