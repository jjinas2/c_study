#include <stdio.h>

int main(){
	
	int a = 11;
	int b = 33;
	char cc = 'a';
	double dd = 45.7;
	//a와 b의 포인터 변수를 선언하고 그 포인터
	//변수의 역참조를 통해 더한 결과를 c에 저장하고 출력
	
	int *pa = &a;
	int *pb = &b;
	int c = *pa + *pb;
	char *pc = &cc;
	double *pdd = &dd;
	printf("%d, %c, %f",c,*pc,*pdd+*pa+*pb);
	return 0;
};
