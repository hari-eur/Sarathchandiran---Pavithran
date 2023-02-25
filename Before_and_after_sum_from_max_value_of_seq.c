#include<stdio.h>
int main(void){
	int l,i,max,index,first_sum,last_sum;
	printf("Enter  seq length:");
	scanf("%d",&l);
	int arr[l];
	printf("Enter seq values: \t");
	for(i=0;i<l;i++){
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	index=0;
	for(i=1;i<l;i++){
		if(arr[i]>max){
			max=arr[i];
			index=i;
		}
		
	}
	first_sum=0;
	last_sum=0;
	for(i=0;i<l;i++){
		if(i<index){
			first_sum=first_sum+arr[i];
			
		}
		if(i>index){
			last_sum=last_sum+arr[i];
			
		}
		
	}
	printf("before sum from max : %d\n After sum from max: %d",first_sum,last_sum);
	return 0;
}
