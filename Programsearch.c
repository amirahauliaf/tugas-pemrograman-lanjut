#include <stdio.h>
#include <stdlib.h>

/*int main() {
	int value[7]={8,10,6,-2,11,7,1,100};
	int cari,i;
	printf ("masukkan angka yang ingin anda cari: ");
	scanf ("%d",&cari);
	
	for (i=0;i<8;i++){
		if (value[i] == cari){
			printf ("ada");
			break;
		}
		else if (value[i] =! cari){
			printf ("tidak ada");
			break;
		}
	}
	
	return 0;
}*/

int main (){
	int data[8]={3,9,11,12,15,17,23,31,35};
	int awal,tengah,akhir,cari,ketemu=0,i;
	awal=0;
	akhir=8;
	
	printf ("masukkan angka yang ingin anda cari: ");
	scanf ("%d",&cari);
	
	for(i=0;i<9;i++){
		tengah=(awal+akhir)/2;
		if (data[tengah]<cari){
			awal = tengah+1;
		}
		else if (data[tengah]==cari){
			ketemu=1;	
		}
		else{
			akhir=tengah-1;
		}
	}
	if (ketemu == 1){
		printf("data %d ada dalam array",cari);
	}
	else {
		printf ("data %d tidak ada dalam array ",cari);
	}
	return 0;
}


