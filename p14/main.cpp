#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE* fptr;              // �ŧi���V�ɮת�����fptr
    char ch;                 // �ŧi�r���ܼ�ch�A�Ψӱ����ɮפ����r��
    int count = 0;             // �ŧi���count�A�Ψӭp��r����

    fptr = fopen("welcome.txt", "r"); // �}���ɮ�welcome.txt�A�H��Ū�Ҧ�
    if (fptr != NULL) {              // �p�Gfopen()���Ǧ^�ȫDNULL�A�N���ɮ׶}�Ҧ��\
        while ((ch = getc(fptr)) != EOF) {  // Ū���ɮפ����r������EOF
            printf("%c", ch);      // �L�X�r��
            count++;              // �p��r����
        }
        fclose(fptr);             // �����ɮ�
        printf("\n�`�@�@��%d�Ӧr��!\n", count);
    }
    else {
        printf("�ɮ׶}�ҥ���!!\n");  // �ɮ׶}�ҥ��Ѫ��T��
    }
    system("pause");
    return 0;
}
