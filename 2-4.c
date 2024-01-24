//#include <stdio.h> //전처리기(preprocessor) 
//struct A{
//	int eng; //4byte
//	int math[3]; //12byte
//	
//};
//int main(){
//	
//	struct A a[2];
//	
//	a[0].eng=45; 
//	a[0].math[0]=50;
//	a[0].math[1]=100;
//	a[0].math[2]=150;
//	
//	a[1].eng=100;
//	a[1].math[0]=55;
//	a[1].math[1]=105;
//	a[1].math[2]=155;
//	
//	struct A *b; //b에 저장되는 것은 주소, struct A 의 데이터 타입의 주소 
//	b = a;
//	// int z = 11;
//	// b = &z; 이 식은 허용하지 않음
//	 
//	int i=0;
//	for(i=0;i<2;i++){
//		printf("%d %d %d \t", *(a[i].math), *(a[i].math+1), *(a[i].math+2)); //a.math * => 역참조 
//		printf("%d\n", a[i].eng); 
//		// 포인터는 주소이고 주소에 1을 더하면 그 크기만큼 이동됨 
//	}
//	printf("=========================\n");
//	printf("바보1 => %d \n", (*b).math[0]);
//	printf("바보2 => %d \n", (*(b+1)).math[0]);
//	printf("바보2 => %d \n", (b+1)->math[0]);
//	for(i=0;i<2;i++){
//		printf("%d %d %d \t", (*(b+i)).math[0], *(b[i].math+1), *(b[i].math+2)); //a.math * => 역참조 
//		printf("%d\n", b[i].eng); 
//		// 포인터는 주소이고 주소에 1을 더하면 그 크기만큼 이동됨 
//	}
//	
//	return 0;
//	// 배열과 포인터는 동일하게 작동함 
//}
