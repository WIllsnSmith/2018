#include <stdio.h>
#include <stdlib.h>
#include "dk_tool.h"

int main(int argc, char *argv[]) {
	int i;
	int *array;
	int size;
	
	
	printf("Type number of array elements: ");
    scanf("%d", &size); // ���� ������ � ������� �������
	array = (int*)malloc(size * sizeof(int)); // �������� ������������� ������� array � �������� size
  	printf("Fill array: \n");
  	for (i = 0; i < size; i++)
  	{
   	 printf("Array[%d] = ", i);
   	 scanf("%d", &array[i]); // ���� ������ � ������
 	}

	rever_t arr_info = {size,array}; // ����������� ������� arr_info ������ � ������� � ��� ������
	rever_t finish = ArrRever(arr_info); // ����������� ������� finish ��������� ��������� ������� ArrRever ���������� dk_tool
	printf("Finish array: \n");
	for(i = 0; i < finish.size; i ++) 
		printf("Array[%d] = %d \n", i, finish.array[i]); //����� ������
system("pause");
	return 0;
}
