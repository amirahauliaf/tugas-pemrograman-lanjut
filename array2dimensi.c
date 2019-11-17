#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct matakuliah{
	double ipk;
	int sks[10];
	float nilai[10];
	char nama_matkul[10][10];
};
struct mahasiswa{
	char nama[10];
	char npm [10];
	struct matakuliah matakuliah[10];
};
int main() {
	int i,y;
	float total_ip=0;
	float total_ipk=0;
	int total_sks=0;
	struct mahasiswa mahasiswa[20];
	
	strcpy (mahasiswa[0].nama,"Amirah");
	strcpy (mahasiswa[0].npm,"18081010029");
	strcpy (mahasiswa[0].matakuliah[0].nama_matkul[0],"Pemograman Dasar");
	mahasiswa[0].matakuliah[0].nilai[0]= 3.45;
	mahasiswa[0].matakuliah[0].sks[0]=4;
	strcpy (mahasiswa[0].matakuliah[1].nama_matkul[1],"Sistem Operasi");
	mahasiswa[0].matakuliah[1].nilai[1]= 3.25;
	mahasiswa[0].matakuliah[1].sks[1]=4;
	strcpy (mahasiswa[0].matakuliah[2].nama_matkul[2],"Aljabar Linear");
	mahasiswa[0].matakuliah[2].nilai[2]= 3.95;
	mahasiswa[0].matakuliah[2].sks[2]=4;
	strcpy (mahasiswa[0].matakuliah[3].nama_matkul[3],"Pancasila");
	mahasiswa[0].matakuliah[3].nilai[3]= 3.00;
	mahasiswa[0].matakuliah[3].sks[3]=4;
	
	strcpy (mahasiswa[1].nama,"dian");
	strcpy (mahasiswa[1].npm,"18081010028");
	strcpy (mahasiswa[1].matakuliah[0].nama_matkul[0],"Pemograman Dasar");
	mahasiswa[1].matakuliah[0].nilai[0]= 3.15;
	mahasiswa[1].matakuliah[0].sks[0]=4;
	strcpy (mahasiswa[1].matakuliah[1].nama_matkul[1],"Sistem Operasi");
	mahasiswa[1].matakuliah[1].nilai[1]= 3.15;
	mahasiswa[1].matakuliah[1].sks[1]=4;
	strcpy (mahasiswa[1].matakuliah[2].nama_matkul[2],"Aljabar Linear");
	mahasiswa[1].matakuliah[2].nilai[2]= 3.15;
	mahasiswa[1].matakuliah[2].sks[2]=3;
	strcpy (mahasiswa[0].matakuliah[3].nama_matkul[3],"Pancasila");
	mahasiswa[1].matakuliah[3].nilai[3]= 3.00;
	mahasiswa[1].matakuliah[3].sks[3]=3;
	
	strcpy (mahasiswa[2].nama,"mela");
	strcpy (mahasiswa[2].npm,"18081010027");
	strcpy (mahasiswa[2].matakuliah[0].nama_matkul[0],"Pemograman Dasar");
	mahasiswa[2].matakuliah[0].nilai[0]= 3.15;
	mahasiswa[2].matakuliah[0].sks[0]=4;
	strcpy (mahasiswa[2].matakuliah[1].nama_matkul[1],"Sistem Operasi");
	mahasiswa[2].matakuliah[1].nilai[1]= 3.05;
	mahasiswa[2].matakuliah[1].sks[1]=4;
	strcpy (mahasiswa[2].matakuliah[2].nama_matkul[2],"Aljabar Linear");
	mahasiswa[2].matakuliah[2].nilai[2]= 3.75;
	mahasiswa[2].matakuliah[2].sks[2]=3;
	strcpy (mahasiswa[2].matakuliah[3].nama_matkul[3],"Pancasila");
	mahasiswa[2].matakuliah[3].nilai[3]= 3.60;
	mahasiswa[2].matakuliah[3].sks[3]=3;
	
	strcpy (mahasiswa[3].nama,"ika");
	strcpy (mahasiswa[3].npm,"18081010026");
	strcpy (mahasiswa[3].matakuliah[0].nama_matkul[0],"Pemograman Dasar");
	mahasiswa[3].matakuliah[0].nilai[0]= 3.65;
	mahasiswa[3].matakuliah[0].sks[0]=4;
	strcpy (mahasiswa[3].matakuliah[1].nama_matkul[1],"Sistem Operasi");
	mahasiswa[3].matakuliah[1].nilai[1]= 3.95;
	mahasiswa[3].matakuliah[1].sks[1]=4;
	strcpy (mahasiswa[3].matakuliah[2].nama_matkul[2],"Aljabar Linear");
	mahasiswa[3].matakuliah[2].nilai[2]= 3.85;
	mahasiswa[3].matakuliah[2].sks[2]=3;
	strcpy (mahasiswa[3].matakuliah[3].nama_matkul[3],"Pancasila");
	mahasiswa[3].matakuliah[3].nilai[3]= 3.10;
	mahasiswa[3].matakuliah[3].sks[3]=3;
	
	strcpy (mahasiswa[4].nama,"alfi");
	strcpy (mahasiswa[4].npm,"18081010032");
	strcpy (mahasiswa[4].matakuliah[0].nama_matkul[0],"Pemograman Dasar");
	mahasiswa[4].matakuliah[0].nilai[0]= 3.57;
	mahasiswa[4].matakuliah[0].sks[0]=4;
	strcpy (mahasiswa[4].matakuliah[1].nama_matkul[1],"Sistem Operasi");
	mahasiswa[4].matakuliah[1].nilai[1]= 3.29;
	mahasiswa[4].matakuliah[1].sks[1]=4;
	strcpy (mahasiswa[4].matakuliah[2].nama_matkul[2],"Aljabar Linear");
	mahasiswa[4].matakuliah[2].nilai[2]= 3.85;
	mahasiswa[4].matakuliah[2].sks[2]=3;
	strcpy (mahasiswa[4].matakuliah[3].nama_matkul[3],"Pancasila");
	mahasiswa[4].matakuliah[3].nilai[3]= 3.25;
	mahasiswa[4].matakuliah[3].sks[3]=3;
	
	printf ("\n==============program menghitung ipk======================\n\n");
	char masuk[10];
	printf ("masukkan nama mahasiswa yang ingin dicari: ");
	scanf ("%s",&masuk);
	for(i=0; i<5; i++){
		if (!strcmp(mahasiswa[i].nama,masuk)){
			printf("\nNama Lengkap		\t\t: %s\n",mahasiswa[i].nama);
			printf("NPM			  \t\t: %s\n",mahasiswa[i].npm);
			for(y=0; y<4; y++){
				printf("Nama Mata Kuliah	\t\t: %s\n",mahasiswa[i].matakuliah[y].nama_matkul[y]);
				printf("Nilai			\t\t: %f\n",mahasiswa[i].matakuliah[y].nilai[y]);
				printf("Sks			\t\t: %d\n",mahasiswa[i].matakuliah[y].sks[y]);
 				total_ip = total_ip + ((mahasiswa[i].matakuliah[y].nilai[y])*(mahasiswa[i].matakuliah[y].sks[y]));
				total_sks = total_sks+mahasiswa[i].matakuliah[y].sks[y];
	 	}
	}
	}
	total_ipk =total_ip/total_sks;
	printf("\n\nTotal Sks : %d\n",total_sks);
	printf("IPK : %f\n\n",total_ipk);
	return 0;
}
