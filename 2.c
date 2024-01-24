#include <stdio.h>

int main(){
	int a = 6;
	
	int * pa = &a; // 정수형 변수의 주소를
	// 포인터 변수(pa)에 저장 
	int b = *pa + 4; // pa 에 저장되어 있는 주소를
	// 이용해 역참조를 하여 해당 주소의 위치의 데이터 
	// 6을 가지고 와서 4를 더한 결과를 b에 저장
	printf("%d, %d", a, b);
	return 0;
} 
