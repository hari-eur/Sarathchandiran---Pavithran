#include<stdio.h>
int main(void){
	int l1,l2,i,k=0,size,j;
	printf("Enter first seq length:");
	scanf("%d",&l1);
	printf("Enter second seq length:");
	scanf("%d",&l2);
	int arr1[l1],arr2[l2],com[100];
	printf("Enter first seq values: \t");
	for(i=0;i<l1;i++){
		scanf("%d",&arr1[i]);
	}
	printf("Enter second seq values: \t");
	for(i=0;i<l2;i++){
		scanf("%d",&arr2[i]);
	}
	//printf("%d ",arr1[2]);
	
    for (i = 0; i < l1; i++) {
        for (j = 0; j < l2; j++) {
            if (arr1[i] == arr2[j]) {
                com[k++] = arr1[i];
                break;
            }
        }
    }
    if (k == 0) {
        printf("No common elements in both seq.");
    } else {
        printf("Common elements: ");
        for (i = 0; i < k - 1; i++) {
            for (j = i + 1; j < k; j++) {
                if (com[i] > com[j]) {
                    int temp = com[i];
                    com[i] = com[j];
                    com[j] = temp;
                }
            }
            printf("%d ", com[i]);
        }
        printf("%d\n", com[k - 1]);
    }
	
	return 0;
}
