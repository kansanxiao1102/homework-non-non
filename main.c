#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int* array, int sizel); //�禡�ŧi// 


int main(void){
	int a[5] ={10,56,42,12,13}; //�̪�}�C��//
	size_t i ; //counter//
	
	printf("�̪�}�C��:\n"); //��̪ܳ�}�C���Ƨ�// 
	
	for(i=0;i<5;i++){
		printf("%4d",a[i]);
	}
	 

	 
	bubbleSort(a,5);  //�I�s�ƧǨ�� 
	
	printf("\n�ƧǹL���:\n"); //��ܪw�j�ƧǹL�᪺�Ƨ�//
	
	for(i=0;i<5;i++){
		printf("%4d",a[i]);
	}
}

