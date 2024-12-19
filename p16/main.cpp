#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define ENTER 13
#define MAX 80

int main(void)
{
    FILE* fptr;                 // 宣告指向檔案的指標fptr
    char str[MAX], ch;           // 宣告字元陣列str，用來儲存輸入的字元
    int i = 0;                    // 初始化索引變數i
    fptr = fopen("output.txt", "a"); // 開啟檔案output.txt，以附加模式
    printf("請輸入字串，按ENTER鍵結束輸入:\n"); // 提示訊息
    while ((ch = _getche()) != ENTER && i < MAX) { // 持續讀取字元直到ENTER或達到上限
        str[i++] = ch;            // 將輸入的字元存入陣列
    }
    putc('\n', fptr);            // 寫入換行字元
    fwrite(str, sizeof(char), i, fptr); // 寫入字元陣列到檔案
    fclose(fptr);               // 關閉檔案
    printf("\n檔案附加完成!!\n");
    system("pause");
    return 0;
}
