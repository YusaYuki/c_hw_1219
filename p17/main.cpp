#include <stdio.h>
#include <stdlib.h>
#define MAX 80

int main(void)
{
    FILE* fptr;                     // �ŧi���V�ɮת����� fptr
    char str[MAX];                  // �ŧi�r���}�C str
    int bytes;                      // �Ψ��x�s fread() ���\Ū�����r����
    fptr = fopen("output.txt", "r");   // �}���ɮ� output.txt�A�H��Ū�Ҧ�
    while (!feof(fptr)) {           // �p�G�٨SŪ���ɧ�
        bytes = fread(str, sizeof(char), MAX - 1, fptr); // Ū���ɮפ��e
        str[bytes] = '\0';            // �[�J�r�굲���r��
        printf("%s\n", str);         // �L�X�ɮפ��e
    }
    fclose(fptr);                   // �����ɮ�
    system("pause");
    return 0;
}
