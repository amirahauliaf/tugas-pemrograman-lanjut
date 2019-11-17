#include <stdio.h>
#include <stdlib.h>
int main() {
	int data[15],banyak,a,b;
	int tmp;
	printf ("masukkan banyak data yang di inginkan: ");
	scanf("%d",&banyak);
	for (a=0;a<banyak;a++){
		printf ("masukkan data ke-%d: \n",a+1);
		scanf ("%d",&data[a]);
	}
	
	for(a=0; a<banyak;a++){
    	for(b=0; b<banyak-a-1; b ++){
      		if(data[b] > data[b+1]){
        	tmp = data[b];
        	data[b] = data[b+1];
        	data[b+1] = tmp;
      }
    }
  } 
  printf("Hasil pengurutan sebagai berikut:\n");
  for(a = 0; a<banyak; a++){
    printf("%d ", data[a]);
  }
  printf("\n");
return 0;
}
