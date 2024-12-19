#include <stdio.h>
#include <stdlib.h>

#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
    FILE* fptr1, * fptr2;      // 宣告指向檔案的指標fptr1與fptr2
    char ch;                 // 宣告字元變數ch
    fptr1 = fopen("welcome.txt", "r"); // 開啟檔案welcome.txt，以唯讀模式
    fptr2 = fopen("output.txt", "w");  // 開啟檔案output.txt，以寫入模式
    if ((fptr1 != NULL) && (fptr2 != NULL)) { // 如果兩個檔案皆開啟成功
        while ((ch = getc(fptr1)) != EOF) { // 將字元ch寫到fptr2指向的檔案中
            putc(ch, fptr2);
        }
        fclose(fptr1);         // 關閉fptr1所指向的檔案
        fclose(fptr2);         // 關閉fptr2所指向的檔案
        printf("檔案拷貝完成!!\n");
    }
    else {
        printf("檔案開啟失敗!!\n");
    }
    system("pause");
    return 0;
}

