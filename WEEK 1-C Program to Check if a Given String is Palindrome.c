#include <stdio.h>
#include <string.h>
int main()
{
   char input[100];
   int n,i;
   printf("enter the word to be checked\t");
   scanf("%s",input);
   n=strlen(input);
   for(i=0;i<n/2;i++)
   {
    if(input[i]==input[n-i-1])
        continue;
    else
    {
        printf("the word is not a palindrome");
        break;
    }
   }
   if(i==n/2)
        printf("%s is a palindrome",input);
    

}