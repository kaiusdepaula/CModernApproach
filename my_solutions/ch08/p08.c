/*
Modify Programming Project 7 so that it prompts for five quiz grades for each of five stu¬
dents. then computes the total score and average score for each student, and the average
score, high score, and low score for each quiz.
*/

#include <stdio.h>
#define NROW 5
#define NCOL 5


int main(void) {
    int matrix[NROW][NCOL], total_score_student[NCOL],
        high_score[NROW], low_score[NROW]; 
    
    float avg_score_student[NROW], avg_score_quiz[NROW];
    int total_sum, biggest, smallest, temp;

    // Stores integers in array
    for (int i = 0; i < NROW; i++) {
        printf("Enter student %d quiz scores: ", i + 1);
        for (int j = 0; j < NCOL; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // total score and average score for each student
    for (int i = 0; i < NROW; i++) {
        total_sum = 0;
        for (int j = 0; j < NCOL; j++) {
            total_sum += matrix[i][j];
        }
        total_score_student[i] = total_sum;
        avg_score_student[i] = (float) total_sum / NROW;
    }

    // average score, high score, and low score for each quiz.
    for (int j = 0; j < NCOL; j++) {
        total_sum = 0;
        biggest = 0;
        smallest = 99999;

        for (int i = 0; i < NROW; i++) {
            temp = matrix[i][j];
            total_sum += temp;

            biggest  = temp >= biggest ? temp : biggest;
            smallest = temp <= smallest ? temp : smallest;
        }
        avg_score_quiz[j] = ((float) total_sum ) / NROW;
        high_score[j] = biggest;
        low_score[j] = smallest;
    }

    printf("Student Statistics:\n");
    for (int i = 0; i < NROW; i++){
        printf("Student %d:\nTotal Score: %d | Average Score: %.2f\n", 
            i+1, total_score_student[i], avg_score_student[i]
        );
    }
    printf("Quiz Statistics:\n");
    for (int i = 0; i < NROW; i++){
        printf("Quiz %d:\nAverage Score: %.2f | Highest Score: %d | Lowest Score: %d\n", 
            i+1, avg_score_quiz[i], high_score[i], low_score[i]
        );
    }
    printf("\n");
    return 0;
}