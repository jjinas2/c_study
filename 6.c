#include <stdio.h>
struct A{
	int math; //4 byte
	int eng; //4 byte
	int korea[10]; //4*10 byte
	int total;
	int avg;
};
int main(){
	struct A a[10]; // 구조체 10개 배열 
	printf("%d\t",a);
	printf("%d\t",a+1);
	printf("%d",a+2);
	
	int i = 0;
	for(i=0;i<10;i++){
		a[i].math=50*(i+1);
		a[i].eng=70*(i+1);
		a[i].korea[i]=100*(i+1);
		
		a[i].total=a[i].math+a[i].eng+a[i].korea[i];
		a[i].avg=a[i].total/3;
	};
	printf("\t %d %d", (*a).math, (*(a+1)).math);
	printf("==========================="); 
	printf("\t %d %d", a->math, (a+1)->math);
	printf("==========================="); 
	printf("\t %d %d", a->total, (a)->avg);
	return 0;
}
