#include <stdio.h>
#include <stdlib.h>

#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
    FILE* fptr1, * fptr2;      // �ŧi���V�ɮת�����fptr1�Pfptr2
    char ch;                 // �ŧi�r���ܼ�ch
    fptr1 = fopen("welcome.txt", "r"); // �}���ɮ�welcome.txt�A�H��Ū�Ҧ�
    fptr2 = fopen("output.txt", "w");  // �}���ɮ�output.txt�A�H�g�J�Ҧ�
    if ((fptr1 != NULL) && (fptr2 != NULL)) { // �p�G����ɮ׬Ҷ}�Ҧ��\
        while ((ch = getc(fptr1)) != EOF) { // �N�r��ch�g��fptr2���V���ɮפ�
            putc(ch, fptr2);
        }
        fclose(fptr1);         // ����fptr1�ҫ��V���ɮ�
        fclose(fptr2);         // ����fptr2�ҫ��V���ɮ�
        printf("�ɮ׫�������!!\n");
    }
    else {
        printf("�ɮ׶}�ҥ���!!\n");
    }
    system("pause");
    return 0;
}

