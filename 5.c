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
	// 반복문으로 a 의 korea 변수의 값을 출력
	
	printf("%d", a.math+a.eng+10);
	
	return 0;
}
