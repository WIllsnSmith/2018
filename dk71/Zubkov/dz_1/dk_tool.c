
  #include "dk_tool.h"
 rever_t ArrRever(rever_t arr_info) //������������� ������� ��������� �������. arr_info - ������ ��������� rever_t
 {
 	rever_t t; //������ ��������� rever_t
 	t.size = arr_info.size; 
 	t.array = (int*)malloc(t.size * sizeof(int)); // ��������� ����� ������ �������. size - ���������� ��������� �������. array - ������� ����� ������������ ������ � �������� size
 	int i;
    for (i = 0; i < t.size; i++)
    	t.array[i] = arr_info.array[arr_info.size-i-1]; // ���� ��������� ������� arr_info.array (���������� ������� t.array � �������� �������)
    return t; // ���������� ������ t � ���������� �������
 }
