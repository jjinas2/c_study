#include <stdio.h>

int main(){
	
	int a = 11;
	int b = 33;
	char cc = 'a';
	double dd = 45.7;
	//a�� b�� ������ ������ �����ϰ� �� ������
	//������ �������� ���� ���� ����� c�� �����ϰ� ���
	
	int *pa = &a;
	int *pb = &b;
	int c = *pa + *pb;
	char *pc = &cc;
	double *pdd = &dd;
	printf("%d, %c, %f",c,*pc,*pdd+*pa+*pb);
	return 0;
};
