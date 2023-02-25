#include<stdio.h>
int main(void){
	int A,B,X,i,small,diff;
	printf("Enter A , B, X:");
	scanf("%d %d %d",&A,&B,&X);
	small=A;
	diff=abs(A-X);
	for(i=A;i<=B;i++){
		
		if(abs(X-i)<diff){
			diff=abs(X-i);
			small=i;
		}
	}
	printf("the value of smallest absolute difference is %d and the difference value is %d:",small,diff);
	
	return 0;
}
