#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include "hometask_1.h"

int main()
{
    setlocale(LC_ALL, "Rus");
    int strng_vl = 0;
    int clmn_vl = 0;
    int vl_rslt = 0;
    printf("\t\t\t\t- ������ ��������� ������������� ��������� ���� ������� -\n");
    printf("\n- ���������� ���������� ����� � ������� ������������� ��������� ...\n- ���������� ����� = ");
    do
    {
        vl_rslt = 0;
        vl_rslt = scanf("%i", &strng_vl);
        fflush(stdin);
        if (vl_rslt == 1)
        {}else
        {
           printf("- ��������� ���� �������� �� ������������� ������� ���������.\n- ��������� �������:\n���������� ����� = ");
        }
    }while(vl_rslt != 1);
    printf("\n- ���������� ���������� �������� � ������� ������������� ��������� ...\n- ���������� �������� = ");
    do
    {
        vl_rslt = 0;
        vl_rslt = scanf("%i", &clmn_vl);
        fflush(stdin);
        if (vl_rslt == 1)
        {}else
        {
           printf("��������� ���� �������� �� ������������� ������� ���������.\n��������� �������:\n���������� ����� = ");
        }
    }while(vl_rslt != 1);
    int mtrx[strng_vl][clmn_vl];
    int tr_mtrx[clmn_vl][strng_vl];
    printf("\n���� ������� ����� ��hometask_1.h�: [%i][%i]\n", strng_vl, clmn_vl);
    for(int i = 0; i < int ntr_vl_fnc(int strng, int clmn)
{
    int ntr_vl = 0;
    int vl_rslt = 0;
            do
            {
                printf("\n������� ������������� �������� ��� ���������� [%i][%i]\n", strng, clmn);
                printf("[%i][%i] = ");
                vl_rslt = scanf("%i", &ntr_vl);
                fflush(stdin);
                if (vl_rslt == 1)
                {}else
                {
                    printf("\n��������� ���� �������� �� ������������� ������� ���������.\n��������� �������.\n");
                }
            }while(vl_rslt != 1);
        return ntr_vl;
}
strng_vl; ++i)
        for(int j = 0; j < clmn_vl; ++j)
        {
            mtrx[i][j] = tr_mtrx[j][i] = ntr_vl_fnc(i, j);
        }
    printf("\n��������� ���� ������� ������� �� ��������� �����������:");
    for(int i = 0; i < strng_vl; ++i)
    {
        printf("\n\n\t");
        for(int j = 0; j < clmn_vl; ++j)
        {
            printf("%i   ", mtrx[i][j]);
        }
    }
    printf("\n\n- ����������������� ���������� ������� ����� ���: [%i][%i]\n\n- � ������� �� ��������� �����������:", clmn_vl, strng_vl);
    for(int i = 0; i < clmn_vl; ++i)
    {
        printf("\n\n\t");
        for(int j = 0; j < strng_vl; ++j)
        {
            printf("%i   ", tr_mtrx[i][j]);
        }
    }
    printf("\n");
}
