#include <stdio.h>
int main(){
	
	int vet[100],i,j,maior=-1,posi,soma,soma1;
	
	for(i=0;i<100;i++){
		printf("\n entre com o numero que ira ocupar a lacuna %d:",i+1);
		scanf("%d",&vet[i]);
		
		if(vet[i]>maior){
			maior=vet[i];
			posi=i;
		}
	}
		if(maior==vet[i+1]){
			printf("\n os maiores sao os numeros das lacunas %d,%d e sao os numeros %d %d ",posi,posi+1,vet[i],maior);
		}
		
		printf("\n o maior numero e %d na lacuna %d \n",maior,posi+1);
		
		for(i=0;i<100;i++){
			if(i%2==0){
				soma=vet[i]+soma;
			}
			if(i%2!=0){
				soma1=vet[i]+soma1;
			}
		}
		printf("\n a soma dos indices pares eh:%d",soma);
		
		printf("\n a soma dos indices impares eh:%d",soma);
	
	return 0;
}
