#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct data_mahasiswa
{
	int npm[3];
	float ipk[3];
};

int main(){
	struct data_mahasiswa mhs;
	mhs.npm[0] =12;
	mhs.ipk[0]= 4.00;
	mhs.npm[1] =13;
	mhs.ipk[1]= 3.56;
	mhs.npm[2] =14;
	mhs.ipk[2]= 3.76;
	int input, i,cari;	
	printf ("pilih menu: \n");
	printf ("1.Semua data\n2.tampil data(reverse)\n3.pencarian data\n");
	printf ("masukkan pilihan: ");
	scanf ("%d",&input);
	if (input == 1){
		for (i=0;i<=2;i++)
		{
		printf ("npm= %d memiliki nilai %f \n",mhs.npm[i],mhs.ipk[i]);
		}	
	}
	if (input == 2){
		for (i=2;i>=0;i--)
		{
		printf ("npm= %d memiliki nilai %f \n",mhs.npm[i],mhs.ipk[i]);
		}	
	}
	else if (input == 3){
			printf("Masukkan npm yang dicari : \n");
			scanf("%d", &cari);
			for(i = 0; i<5; i++){
				if(mhs.npm[i] == cari){
					printf("Npm : %d\n", mhs.npm[i]);
					printf("ipk : %f\n", mhs.ipk[i]);
					break;
	}
	return 0;
	}
}
}
