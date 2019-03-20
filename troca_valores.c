#include <stdio.h>

void troca();
int vet[5];

int main(){
	//variaveis
	int i;
	
	//entrada de valores para vetores
	for(i = 0; i < 5; i++){
		printf("\n entre com os valores %d:",i);
			scanf("%d", &vet[i]);
	}
	//agora realizar a troca dos vetores
	troca();
	//imprimir os novos vetores
	for(i = 0; i < 5; i++){
		printf("%d ",vet[i]);
	}
	system("pause");
	return 0;
		
}

void troca(){
	//descobrir quem é o maior
	int i, maior = -1 , posimaior;
	for(i = 0; i < 5; i++){
		if(maior<vet[i]){
			maior = vet[i];
			posimaior = i;
		}
	}
	//troca de vetores
	vet[posimaior] = vet[0];
	vet[0] = maior;
}
	

