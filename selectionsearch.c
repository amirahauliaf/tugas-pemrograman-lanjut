#include <stdio.h>
#include <stdlib.h>

int main() {
	int n,i,data[15],j,posisi,a;
	printf ("masukkan banyak data: ");
	scanf ("%d",&n);
	for (i=0;i<n;i++){
		printf ("data ke-%d: ",i+1);
		scanf ("%d",&data[i]);
	}
	
	for (i=0;i<n;i++){
		int min=i;
		for (j=i;j<n;j++){
			if (data[j]<data[min]){
				min=j;
			}
		}
		//pertukaran
		posisi = data[min];
        data[min] = data[i];
        data[i] = posisi;
	}

        	
	printf("Hasil pengurutan sebagai berikut:\n");
  	for(i = 0; i<n; i++){
    printf("%d ", data[i]);
  	}
  	printf("\n");
	
	return 0;
}
