#include<stdio.h>
#include<string.h>

int main()
{
    char inputs[100] = "maximum";
    int max = 0;
    int counter = 0;
    char character;
    int length;


    for(int i = 0; i < strlen(inputs) - 1; i++) 
    {
        counter = 0; 
        for(int j = i + 1; j < strlen(inputs); j++) 
        {
            if(inputs[i] == inputs[j]) 
            {
              counter++;
            } 
        }
        if(counter > max)
        {
            max = counter;
            character = inputs[i]; 
        }
    }

    printf("The character '%c' has the most occurrences with %d times.", character, max);
    return 0; 
}
