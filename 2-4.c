//#include <stdio.h> //��ó����(preprocessor) 
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
//	struct A *b; //b�� ����Ǵ� ���� �ּ�, struct A �� ������ Ÿ���� �ּ� 
//	b = a;
//	// int z = 11;
//	// b = &z; �� ���� ������� ����
//	 
//	int i=0;
//	for(i=0;i<2;i++){
//		printf("%d %d %d \t", *(a[i].math), *(a[i].math+1), *(a[i].math+2)); //a.math * => ������ 
//		printf("%d\n", a[i].eng); 
//		// �����ʹ� �ּ��̰� �ּҿ� 1�� ���ϸ� �� ũ�⸸ŭ �̵��� 
//	}
//	printf("=========================\n");
//	printf("�ٺ�1 => %d \n", (*b).math[0]);
//	printf("�ٺ�2 => %d \n", (*(b+1)).math[0]);
//	printf("�ٺ�2 => %d \n", (b+1)->math[0]);
//	for(i=0;i<2;i++){
//		printf("%d %d %d \t", (*(b+i)).math[0], *(b[i].math+1), *(b[i].math+2)); //a.math * => ������ 
//		printf("%d\n", b[i].eng); 
//		// �����ʹ� �ּ��̰� �ּҿ� 1�� ���ϸ� �� ũ�⸸ŭ �̵��� 
//	}
//	
//	return 0;
//	// �迭�� �����ʹ� �����ϰ� �۵��� 
//}
