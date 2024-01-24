#include <stdio.h>
struct A{
	int eng; //4byte
	int math[3]; //12byte
	
};
int main(){
	
	struct A a[2];
	
	a[0].eng=45; 
	a[0].math[0]=50;
	a[0].math[1]=100;
	a[0].math[2]=150;
	
	a[1].eng=100;
	a[1].math[0]=55;
	a[1].math[1]=105;
	a[1].math[2]=155;
	
	//printf("%d\t", a[0].math); //배열명은 주소
	
	int i=0;
	for(i=0;i<2;i++){
		printf("%d %d %d \t", *(a[i].math), *(a[i].math+1), *(a[i].math+2)); //a.math * => 역참조 
		printf("%d\n", a[i].eng); 
		// 포인터는 주소이고 주소에 1을 더하면 그 크기만큼 이동됨 
	}
	
	return 0;
}
