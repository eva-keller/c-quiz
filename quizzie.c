#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_QUESTION 256
#define MAX_ANSWER 128

// Total number of questions in the quiz.
#define TOTAL_QUESTIONS 5

// Define a struct for representing quiz questions.  
typedef struct
{
  char question[MAX_QUESTION];
  char answerA[MAX_ANSWER];
  char answerB[MAX_ANSWER];
  char answerC[MAX_ANSWER];
  char answerD[MAX_ANSWER];
  char correct_answer;
} quiz_question;

int main(void)
{
  // Declare an array of question structs to store all the data to represent our quiz.
  quiz_question quiz[TOTAL_QUESTIONS];
  

  strcpy(quiz[0].question, "Who said that? 'I'm not bad. I'm just drawn that way.");
  strcpy(quiz[0].answerA, "Betty Boop");
  strcpy(quiz[0].answerB, "Jessica Rabbit");
  strcpy(quiz[0].answerC, "Harley Quinn");
  strcpy(quiz[0].answerD, "Daphne Blake");
  quiz[0].correct_answer = 'B';

  strcpy(quiz[1].question, "Who said that? 'When the world turns its back on you, you turn your back on the world'");
  strcpy(quiz[1].answerA, "Rafiki");
  strcpy(quiz[1].answerB, "Scar");
  strcpy(quiz[1].answerC, "Simba");
  strcpy(quiz[1].answerD, "Timon");
  quiz[1].correct_answer = 'D';
  
  strcpy(quiz[2].question, "Who said that? 'The only way to achieve the impossible is to believe it is possible.'");
  strcpy(quiz[2].answerA, "Alice");
  strcpy(quiz[2].answerB, "Mad Hatter");
  strcpy(quiz[2].answerC, "Cheshire Cat");
  strcpy(quiz[2].answerD, "Queen of Hearts");
  quiz[2].correct_answer = 'B';
  
  
  strcpy(quiz[3].question, "Who said that? 'When you do things right, people won't be sure you've done anything at all.'");
  strcpy(quiz[3].answerA, "Professor Farnsworth");
  strcpy(quiz[3].answerB, "Bender");
  strcpy(quiz[3].answerC, "Leela");
  strcpy(quiz[3].answerD, "God Entity");
  quiz[3].correct_answer = 'D';

  
  strcpy(quiz[4].question, "Who said that? 'I don't need friends; I need drinks!'");
  strcpy(quiz[4].answerA, "Rick Sanchez");
  strcpy(quiz[4].answerB, "Gaz Digzy");
  strcpy(quiz[4].answerC, "Sterling Archer");
  strcpy(quiz[4].answerD, "Bojack Horseman");
  quiz[4].correct_answer = 'B';

  // Declare variable to store the total number of questions answered correctly
  double total_correct = 0;
  
  // Declare variable to store the answers entered by the user
  char answer;
  
  // Loop with counter variable
  for (int i = 0; i < TOTAL_QUESTIONS; i++)
  {
    // Output the question
    printf("Question %d: %s\n\n", (i+1), quiz[i].question);
    
    // Output the possible answers as a menu of options A,B,C, or D
    printf("A) %s\n", quiz[i].answerA);
    printf("B) %s\n", quiz[i].answerB);
    printf("C) %s\n", quiz[i].answerC);
    printf("D) %s\n", quiz[i].answerD);

    printf("\nEnter Answer (A,B,C or D): ");
    
    scanf(" %c", &answer);
    
    if (toupper(answer) == quiz[i].correct_answer)
    {
      total_correct++;
      printf("\n\nCorrect Answer!");
    }
    else
    {
      printf("\n\nIncorrect Answer!");
      printf("\n\nThe correct answer was %c.", quiz[i].correct_answer);
    }
    
    printf("\n\n\n");
  }

  printf("%d/%d questions answered correctly",
         (int) total_correct, 
         TOTAL_QUESTIONS);

  printf(" (%.2f%%)\n\n", (total_correct / TOTAL_QUESTIONS) * 100);
  
if (total_correct == 5) 
{
  printf("YOU ARE A TOTAL NERD!");
} 
else if (total_correct == 4) 
{
  printf("NOT BAD!");
} 
else 
{
  printf("MEH, TRY AGAIN");
}

  return 0;
}