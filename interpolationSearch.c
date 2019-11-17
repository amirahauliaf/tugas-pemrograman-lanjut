#include<stdio.h>
#include <conio.h>
int main()  
struct buku{
	int nomor;
	char judul[7];
	char pengarang[7];
};
{  
struct buku buku[6];
	buku[0].nomor = 5;
	strcpy(buku[0].judul,"The C++ Programming");
	strcpy(buku[0].pengarang,"james word");
	
	buku[1].nomor=6;
	strcpy(buku[1].judul,"mastering delphi 6");
	strcpy(buku[1].pengarang,"simon webe");
	
	buku[2].nomor=7;
	strcpy(buku[2].judul,"profesional c#");
	strcpy(buku[2].pengarang,"michael bolton");
	
	buku[4].nomor=8;
	strcpy(buku[4].judul,"pure javascript");
	strcpy(buku[4].pengarang,"james word");
	
	buku[5].nomor=9;
	strcpy(buku[5].judul,"advance jsp &servlet");
	strcpy(buku[5].pengarang,"david dunn");
	
	buku[6].nomor=10;
	strcpy(buku[6].judul,"calculus make it easy");
	strcpy(buku[6].pengarang,"gunner cristian");
	
 int i,cari,posisi,low,high,proses,berhenti;  

  
 printf ("nomor buku yang ingin dicari : ");  
 scanf("%d",&cari);  
  
 low = 0;  
 high = 6;  
  
for (i=0;i<6;i++)
 {   
  posisi = (((cari-buku[low].nomor)*(high-low))/(buku[high].nomor-buku[low].nomor)+low);  
  
  if(buku[posisi].nomor == cari) {  
   printf ("\nbuku dengan nomor %d pada posisi %d\n",cari,posisi); 
   printf ("judul buku: %s\n",buku[posisi].judul);
   printf ("pengarang buku: %s\n",buku[posisi].pengarang);   
   berhenti =1;  
   break;
  }  
  
  else if(buku[posisi].nomor < cari) {  
   low = posisi + 1;  
  }  
  
  else {  
   printf ( "Data %d tidak ditemukan\n",cari);  
   break;
  }  
 }   
    return 0;  
}
