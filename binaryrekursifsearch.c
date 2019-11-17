#include <stdio.h>
#include <stdlib.h>
int pencarian ( int cari ,int n , int data[])
{
    //variable untuk menentukan titik awal ,akhir nya
    int akhir ,awal ,tengah ,ketemu , i;
   
    akhir = n - 1; awal = 0; ketemu = -1; i = 0;
    //perulangan for untuk mencari data
    for (i=0;i<9;i++)
    {   
        tengah = ( awal+ akhir ) / 2;
            
            if (data[tengah] == cari )
        {
            ketemu = tengah;
        }
        else
        {
            if ( data[tengah] < cari )
            {
                awal = tengah + 1;
            }
            else
            {
                akhir = tengah - 1;
            }
        }i++;
    }return ketemu;
}

int main ()
{
    int cari , hasil , i , n;
	int data[8]={3,9,11,12,15,17,23,31,35};
	n=8;

    printf("angka berapa yang ingin anda cari: ");
    scanf("%d", &cari);

    hasil = pencarian ( cari , n ,data );

    if  ( hasil == - 1 )
    {
        printf("\nData tidak ditemukan !! ");
    }
    else
    {
        printf("\nAngka %d ditemukan di indeks %d", cari ,hasil);
    }

    return 0;
}
