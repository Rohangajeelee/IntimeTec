#include <stdio.h>
#include <string.h>


void removeDuplicates(char *str)
{
    int count[100] = {0};  
    int i, j, len = strlen(str);
    
    for (i = 0; i < len; i++)
    {
        count[str[i]]++;  
    j = 0;
    for (i = 0; i < len; i++)
    {
        if (count[str[i]] == 1)
        {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';  
    } 
}
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]%*c", str);
    removeDuplicates(str);
    printf("String after removing duplicates: %s\n", str);
    return 0;
}
