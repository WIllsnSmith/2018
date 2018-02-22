

#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //���������� ��� ����������� �������� �����
#include <math.h> //����������� �������������� ��������

long long int factorial(long int n) // �������, ������� ��������� ���������
{
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1); // �����������
}
int main()
{
  int variable_A; //��������� ����� ���� ������ �� ������ �����
  float variable_B, Q; //
  setlocale(LC_ALL, "Rus");
  do {
  		printf("������� ���������� A (��� ������ ���� ����� � �� ������ 0, �� ������ 20): ");
    	float f;//����������� ���������� 
    	int result_A = scanf("%f",&f);
    	
		while(result_A != 1 || (int)f != f || f < 0 || f > 20) //�������� �� ������������ �����
		{
			
	   		printf("\n������� ������ ���������� A (��� ������ ���� ����� � �� ������ 0, �� ������ 20): ");
	   		result_A = scanf("%f",&f);
	   		
	  		scanf("%*[^\n]");
	   	
		}
		variable_A = f;
  		printf("\n������� ���������� B: ");
  		float result_B = scanf("%f", &f);
  		scanf("%*[^\n]");
  		while(result_B != 1)
		{
			
	   		printf("\n������� ������ ���������� B: ");
	   		result_B = scanf("%f",&f);
	  		scanf("%*[^\n]");
	   	
		}
		variable_B = f;
	} while (variable_A == 2 && variable_B == -4);

  Q = factorial(variable_A) / (fabs(2 * variable_A + variable_B)); //������� �� �������
  printf("\n��������� Q = %f",Q);

  return 0;
}
