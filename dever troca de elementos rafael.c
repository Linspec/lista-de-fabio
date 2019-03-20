#include <stdio.h>
int main(){
	
	int i,maior=-1,posimaior,pos[8];
	//entrar com os valores
	for(i=0;i<8;i++){
		printf("\n entre com valores %d:",i);
		scanf("%d",&pos[i]);
	}
	//descobrir quem é o maior
	 for(i=0;i<8;i++){
	 	if(maior<pos[i]){
	 		maior=pos[i];
	 		posimaior=i;
		 }
	}
	//trocar a posição
	pos[posimaior]=pos[0];
	pos[0]=maior;
	for(i=0;i<8;i++){
		printf("%d ",pos[i]);
	}
	
system("pause");	
return 0;
}
