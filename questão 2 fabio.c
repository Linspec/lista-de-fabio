#include <stdio.h>
int main(){
	float vet[10],maior=-1,menor=1;
	int i,posimaior,posimenor;
	
	for(i=0;i<10;i++){
		printf("entre com o valor para a lacuna %d:",i+1);
		scanf("%f",&vet[i]);
	
		if(vet[i]>maior){
			maior=vet[i];
			posimaior=i;
			
		}
		if(vet[i]<menor){
			menor=vet[i];
			posimenor=i;
				
		}
	}
		printf("\n o maior valor eh:%.2f,na posicao %d",maior,posimaior+1);
	
		printf("\n o menor valor eh:%.2f,na posicao %d",menor,posimenor+1);
		
		
	for(i=0;i<10;i++){
			if(vet[i]>maior){
			posimaior=posimaior-i;
			}
	
			if(vet[i]<menor){
			posimaior=posimenor+i;
			}
		}
		printf("\n o maior valor eh:%.2f,na posicao %d",maior,posimaior+1);
	
		printf("\n o menor valor eh:%.2f,na posicao %d",menor,posimenor+1);
	
	
	
	return 0;
}
