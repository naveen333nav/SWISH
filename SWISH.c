#include<stdio.h>

int main(){
	int X,P,sum=0;
	scanf("%d %d",&X,&P);
while(X>=1){
	sum = sum+X;
	X=X-X*P/100;
	
}
printf("%d",sum);
}




