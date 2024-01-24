#include <stdio.h>

int main(){
	int code = 65;
	int *p = &code;
	printf("%c", (*p)++); //후위연산자, 출력하고 더하기 = 65 
	printf("%c", ++(*p)); //선형연산자, 더하고 출력 = 66
	// 위에서 후위연산자로 출력하고 더했기때문에 = 67 
} 
