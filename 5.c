#include <stdio.h>
struct A{
	int math;
	int eng;
	int korea[10];
};
int main(){
	struct A a;
	a.math = 70;
	a.eng = 100;
	int i = 0;
	for(i=0;i<10;i++) a.korea[i]=(i+1)*5;
	for(i=0;i<10;i++) printf("%d",a.korea[i]);
	// �ݺ������� a �� korea ������ ���� ���
	
	printf("%d", a.math+a.eng+10);
	
	return 0;
}
