#include<stdio.h>
#include<string.h>

int main()
{
    char sentence[100], word[100];
    int i = 0, length;
    int found = 0;
    printf("Enter the sentence: ");
    scanf("%[^\n]%*c", sentence);
    printf("Enter the word to be found as a substring: ");
    scanf("%[^\n]%*c", word);
    length = strlen(word);
    while (i < strlen(sentence) - length + 1)
    {
        for (int j = 0; j < length; j++)
        {
            if (sentence[i + j] == word[j])
                continue;
            else
            {
                found = 0;
                break;
            }
        }
        if (found)
        {
            printf("The word '%s' exists in the string.\n", word);
            return 0;
        }
        found = 1;
        i++;
    }
    printf("The word '%s' does not exist in the string.\n", word);
    return 0;
}
