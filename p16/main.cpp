#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define ENTER 13
#define MAX 80

int main(void)
{
    FILE* fptr;                 // �ŧi���V�ɮת�����fptr
    char str[MAX], ch;           // �ŧi�r���}�Cstr�A�Ψ��x�s��J���r��
    int i = 0;                    // ��l�Ư����ܼ�i
    fptr = fopen("output.txt", "a"); // �}���ɮ�output.txt�A�H���[�Ҧ�
    printf("�п�J�r��A��ENTER�䵲����J:\n"); // ���ܰT��
    while ((ch = _getche()) != ENTER && i < MAX) { // ����Ū���r������ENTER�ιF��W��
        str[i++] = ch;            // �N��J���r���s�J�}�C
    }
    putc('\n', fptr);            // �g�J����r��
    fwrite(str, sizeof(char), i, fptr); // �g�J�r���}�C���ɮ�
    fclose(fptr);               // �����ɮ�
    printf("\n�ɮת��[����!!\n");
    system("pause");
    return 0;
}
