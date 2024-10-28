
#include <stdio.h>
#include <ctype.h>

int main() 
{
    char line[21]; 
    int uppercase = 0, lowercase = 0, digit = 0, space = 0, wordCount = 0;
    int inWord = 0; 

    
    for (int i = 0; i < 3; ++i) 
    {
        printf("请输入第%d行文字（共20个字符）\n", i + 1);
        scanf("%20s", line);


        for (int j = 0; line[j] != '\0'; ++j) 
        {
            if (isupper(line[j])) 
            {
                uppercase++;
            } 
            else if (islower(line[j])) 
            {
                lowercase++;
            } 
            else if (isdigit(line[j])) 
            {
                digit++;
            } 
            else if (isspace(line[j])) 
            {
                space++;
                
                if (inWord) 
                {
                    inWord = 0;
                    wordCount++;
                }
            } 
            else 
            {
                
            }

            
            if (!isspace(line[j])) 
            {
                inWord = 1;
            }
        }
        
        if (inWord) 
        {
            wordCount++;
        }
    }

    
    printf("大写字母数：%d\n", uppercase);
    printf("小写字母数：%d\n", lowercase);
    printf("数字数：%d\n", digit);
    printf("空格数：%d\n", space);
    printf("单词数：%d\n", wordCount);

    return 0;
}