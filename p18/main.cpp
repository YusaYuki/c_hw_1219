#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE* in, * out;              // �ŧi���V�ɮת����� in �M out
    int cnt;                    // �Ψӭp�� fscanf() ���^�ǭ�
    char str[100];              // �ŧi�r���}�C str
    in = fopen("welcome.txt", "r"); // �}���ɮ� welcome.txt�A�H��Ū�Ҧ�
    out = fopen("output.txt", "w"); // �}���ɮ� output.txt�A�H�g�J�Ҧ�
    while (!feof(in)) {
        cnt = fscanf(in, "%s", str); // Ū���ɮ�
        if (cnt > 0)               // �p�G���\Ū���r��
            fprintf(out, "%s\n", str); // �N��Ƽg�J�ɮ�
    }
    fclose(in);                  // ������J�ɮ�
    fclose(out);                 // ������X�ɮ�
    system("pause");
    return 0;
}
