
  #include "dk_tool.h"
 long long int factorial_t(long long int n) //������������� ������� ��������� ���������
 {
  if (n == 0 || n == 1) return 1;
    return n * factorial_t(n - 1); // �����������

 }
 float module_t(float data) //������������� ������� ��������� ������
{

	if(data < 0) {

		 return data*(-1); 
	} else {
    	return data;	
	}
}
