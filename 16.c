#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int radomnumber, guess, times = 0;

    srand(time(0));

    radomnumber = rand() % 100 + 1;

    printf("there is a number between 1 with 100, can you guess?\n");

    do
    {
        scanf("%d", &guess); 
        
        times++; 

        if (guess == radomnumber) 
        {
            printf("congratulations to you ! you had totally guessed %d times.\n", times);
        } 
        else if (guess < radomnumber) 
        {
            printf("it's too small , please try again.\n");
        } 
        else if (guess > radomnumber)
        {
            printf("it's too big , please try again.\n");
        }
        else
        {
            printf("something wrong happened , please try again.\n");
        }
    } 
    while (guess != radomnumber);
    return 0;
}