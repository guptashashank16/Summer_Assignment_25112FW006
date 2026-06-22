#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    char name[1000];
    char answer;
    int score = 0;

    printf("Welcome to the Quiz Application!\n");
    printf("Please enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Hello %s! Let's start the quiz.\n", name);

    printf("Question 1: What is the capital of France?\n");
    printf("a) Berlin\nb) Madrid\nc) Paris\nd) Rome\n");
    printf("Enter your answer (a/b/c/d): ");
    scanf("%c", &answer);
    if(answer == 'c' || answer == 'C') 
    {
        score++;
        printf("Correct!\n");
    } else 
    { printf("Wrong! The correct answer is c) Paris.\n"); }
    getchar();




    printf("Question 2: Who wrote 'To Kill a Mockingbird'?\n");
    printf("a) Harper Lee\nb) J.K. Rowling\nc) Ernest Hemingway\nd) Mark Twain\n");
    printf("Enter your answer (a/b/c/d): ");
    scanf("%c", &answer);
    if(answer == 'a' || answer == 'A') 
    {
        score++;
        printf("Correct!\n");
    } else 
    {  printf("Wrong! The correct answer is a) Harper Lee.\n"); }
    getchar();




    printf("Question 3: What is the largest planet in our solar system?\n");
    printf("a) Earth\nb) Jupiter\nc) Mars\nd) Saturn\n");
    printf("Enter your answer (a/b/c/d): ");
    scanf("%c", &answer);
    if(answer == 'b' || answer == 'B')
    {
        score++;
        printf("Correct!\n");
    } else 
    {  printf("Wrong! The correct answer is b) Jupiter.\n");}



    printf("%s, your final score is: %d out of 3.\n", name, score);
    
    return 0;
}