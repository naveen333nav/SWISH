#include<stdio.h>

int main(){
	float X,P,sum=0;
	scanf("%f %f",&X,&P);

while(X>=1){
    
	sum = sum+X;
	
	X=X-(X*P/100);
	}
	int sum1 = sum;
	
printf("%d",sum1);
}



