#include <stdio.h>
#include <stdlib.h>


int main() {
	int data[15],i,j,n,tmp;
	printf ("masukkan banyak data: ");
	scanf("%d",&n);
	
	for (i=0;i<n;i++){
		printf ("data ke-%d: ",i+1);
		scanf ("%d",&data[i]);
	}
	
	for (i=1;i<n;i++){
		for (j=i;j>0 && data[j]<data[j-1];j--){
			tmp = data[j-1];
        	data[j-1] = data[j];
        	data[j] = tmp;
		}
	}
	printf ("\n");
	printf ("data setelah diurutkan\n");
	for (i=0;i<n;i++){
		
		printf("%d",data[i]);
	}
	
	return 0;
}
