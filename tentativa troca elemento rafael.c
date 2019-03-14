#include <stdio.h>
int main(){
	
	int i;
	int pos[8],poisma,poisme,poisme1;


//PEGANDO OS VALORES
	for(i=0;i<8;i++){
	printf("\n entre com um valor:");
	scanf("%d",&pos[i]);
	}
	

	int mai=-1,men=1,men1;
	
	for(i=0;i<8;i++){
		
		
		//QUEM É MAIOR VALOR
		if(pos[i]>mai){
		
		mai=pos[i];
		poisma=i;
			
		}
		//QUEM É MENOR VALOR
		if(pos[i]<men){
			
		men=pos[i];
		poisme=i;
		
		}
		
	}
		//DEMONSTRAR OS VALORES COMPUTADOS
	for(i=0;i<8;i++){
		printf("\n %d \n",pos[i]);
	}
		//RESULTADO DE MAIOR E MENOR VALORES
	printf("\n o maior elemento eh %d na posicao %d \n",mai,poisma+1);
	printf("o menor elemento eh %d na posicao %d \n",men,poisme+1);
	
		//TROCAR POSIÇÃO DE MAIOR E MENOR VALOR 	
		men1=men;
		poisme1=poisme;
	if(mai>men){
			
			men=mai;
			poisme=poisma;
			
	}
			mai=men1;
			poisma=poisme1;
	
	
		printf("\n o elemento eh %d na posicao %d",mai,poisma+1);
		printf("\n o elemento eh %d na posicao %d",men,poisme+1);
	
return 0;
}

