
#include <stdio.h>
#include <string.h>

void swapStrings(char **a, char **b) 
{
    char *temp = *a;
    *a = *b;
    *b = temp;
}

void sortStrings(char *str1, char *str2, char *str3) 
{
    char *temp[3] = {str1, str2, str3};
    
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2 - i; j++) 
        {
            if (strcmp(temp[j], temp[j + 1]) > 0) 
            {
                swapStrings(&temp[j], &temp[j + 1]);
            }
        }
    }
    
    strcpy(str1, temp[0]);
    strcpy(str2, temp[1]);
    strcpy(str3, temp[2]);
}

int main() 
{
    void swapStrings(char **a, char **b);
    void sortStrings(char *str1, char *str2, char *str3);
    char str1[100], str2[100], str3[100];

    printf("请输入第一个个字符串：\n");
    scanf("%99s", str1);
    printf("请输入第二个个字符串：\n");
    scanf("%99s", str2);
    printf("请输入第三个个字符串：\n");
    scanf("%99s", str3);

    sortStrings(str1, str2, str3);

    printf("按由小到大的顺序输出：\n");
    printf("%s\n", str1);
    printf("%s\n", str2);
    printf("%s\n", str3);

    return 0;
}

/*
#include <stdio.h>
#include <string.h>

// 比较两个字符串的大小
int compare(const char *str1, const char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int min_len = len1 < len2 ? len1 : len2;

    for (int i = 0; i < min_len; i++) {
        if (str1[i] < str2[i]) {
            return -1;
        } else if (str1[i] > str2[i]) {
            return 1;
        }
    }

    if (len1 == len2) {
        return 0;
    } else if (len1 < len2) {
        return -1;
    } else {
        return 1;
    }
}

// 排序函数
void sort(char **str, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (compare(str[i], str[j]) > 0) {
                char *temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char *str1 = NULL;
    char *str2 = NULL;
    char *str3 = NULL;
//使用scanf函数读取用户输入的字符串
    printf("请输入3个字符串:\n");
    printf("字符串1:");
    scanf("%s", str1);
    printf("字符串2:");
    scanf("%s", str2);
    printf("字符串3:");
    scanf("%s", str3);
//使用malloc函数为字符串指针数组分配内存
    char **str = (char **)malloc(sizeof(char *) * 3);
    str[0] = str1;
    str[1] = str2;
    str[2] = str3;
//调用sort函数对数组进行排序
    sort(str, 3);
//使用printf函数输出排序后的字符串
    printf("排序后的字符串:\n");
    printf("字符串1:%s\n", str[0]);
    printf("字符串2:%s\n", str[1]);
    printf("字符串3:%s\n", str[2]);

    return 0;
}
*/