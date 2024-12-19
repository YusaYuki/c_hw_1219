#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE* in, * out;              // 宣告指向檔案的指標 in 和 out
    int cnt;                    // 用來計算 fscanf() 的回傳值
    char str[100];              // 宣告字元陣列 str
    in = fopen("welcome.txt", "r"); // 開啟檔案 welcome.txt，以唯讀模式
    out = fopen("output.txt", "w"); // 開啟檔案 output.txt，以寫入模式
    while (!feof(in)) {
        cnt = fscanf(in, "%s", str); // 讀取檔案
        if (cnt > 0)               // 如果成功讀取字元
            fprintf(out, "%s\n", str); // 將資料寫入檔案
    }
    fclose(in);                  // 關閉輸入檔案
    fclose(out);                 // 關閉輸出檔案
    system("pause");
    return 0;
}
