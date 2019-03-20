#include<stdio.h>
int EP(int a);
int main(){
	int i;
	for(i=1;i<10;i+=3)
	if(EP(i))
		printf("\n trecho 1 \n");
	else
		printf("\n trecho 2 \n");
return 0;
}
int EP(int a){
	if(a%2)
		return 0;
	else
		return 1;
}
