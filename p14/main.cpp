#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE* fptr;              // 宣告指向檔案的指標fptr
    char ch;                 // 宣告字元變數ch，用來接收檔案中的字元
    int count = 0;             // 宣告整數count，用來計算字元數

    fptr = fopen("welcome.txt", "r"); // 開啟檔案welcome.txt，以唯讀模式
    if (fptr != NULL) {              // 如果fopen()的傳回值非NULL，代表檔案開啟成功
        while ((ch = getc(fptr)) != EOF) {  // 讀取檔案中的字元直到EOF
            printf("%c", ch);      // 印出字元
            count++;              // 計算字元數
        }
        fclose(fptr);             // 關閉檔案
        printf("\n總共共有%d個字元!\n", count);
    }
    else {
        printf("檔案開啟失敗!!\n");  // 檔案開啟失敗的訊息
    }
    system("pause");
    return 0;
}
