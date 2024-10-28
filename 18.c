#include<stdio.h>
int main()
{
    char ch;
    char arr[100];
    int i=0;
    printf("Enter the character: \n");
    while ((ch = getchar()) != '\n')
    {
            
        if(ch >= 'a' && ch <= 'z')
        {
            ch=(ch-'a'-4)%26+'a';
        }
        else if(ch >= 'A' && ch <= 'Z')
        {
            ch=(ch-'A'-4)%26+'A';
        }
        arr[i]=ch;
        i++;
    }
    printf(arr);
    return 0;
}