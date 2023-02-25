#include<stdio.h>
int T_largest(int p,int q,int r){
	if((p>=q && p<=r) || (p>=r && p<=q)){
		return 1;
	}
	else{
		return 0;
	}
}
int main(void){
	int a,b,c;
	printf("Enter any three numbers: \t");
	scanf("%d %d %d",&a,&b,&c);
	//printf("%d %d %d",a,b,c);
	if(T_largest(a,b,c)){
		printf("2nd largest number is  %d ",a);
	}
	else if(T_largest(b,a,c)){
		printf("2nd largest number is  %d ",b);
	}
	else if(T_largest(c,a,b)){
		printf("2nd largest number is  %d ",c);
	}
	return 0;
}
