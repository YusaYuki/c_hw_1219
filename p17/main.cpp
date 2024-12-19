#include <stdio.h>
#include <stdlib.h>
#define MAX 80

int main(void)
{
    FILE* fptr;                     // 宣告指向檔案的指標 fptr
    char str[MAX];                  // 宣告字元陣列 str
    int bytes;                      // 用來儲存 fread() 成功讀取的字元數
    fptr = fopen("output.txt", "r");   // 開啟檔案 output.txt，以唯讀模式
    while (!feof(fptr)) {           // 如果還沒讀到檔尾
        bytes = fread(str, sizeof(char), MAX - 1, fptr); // 讀取檔案內容
        str[bytes] = '\0';            // 加入字串結束字元
        printf("%s\n", str);         // 印出檔案內容
    }
    fclose(fptr);                   // 關閉檔案
    system("pause");
    return 0;
}
