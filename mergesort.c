#include <stdio.h>
#include <stdlib.h>

void merge(int Data[], int temp[], int kiri, int tengah, int kanan)
{
   int i, left_end, num_elements, tmp_pos;
   left_end = tengah - 1;
   tmp_pos = kiri;
   num_elements = kanan - kiri + 1;
   while ((kiri <= left_end) && (tengah <= kanan))
     {
        if (Data[kiri] <= Data[tengah])
        {
            temp[tmp_pos] = Data[kiri];
            tmp_pos = tmp_pos + 1;
            kiri = kiri +1;
        }
        else
        {
            temp[tmp_pos] = Data[tengah];
            tmp_pos = tmp_pos + 1;
            tengah = tengah + 1;
        }
      }
      while (kiri <= left_end)
      {
            temp[tmp_pos] = Data[kiri];
            kiri = kiri + 1;
            tmp_pos = tmp_pos + 1;
      }
      while (tengah <= kanan)
      {
            temp[tmp_pos] = Data[tengah];
            tengah = tengah + 1;
            tmp_pos = tmp_pos + 1;
      }

      for (i=0; i <= num_elements; i++)
      {
            Data[kanan] = temp[kanan];
            kanan = kanan - 1;
      }
}

void m_sort(int Data[], int temp[], int kiri, int kanan)
{
   int tengah;
   if (kanan > kiri)
   {
       tengah = (kanan + kiri) / 2;
       m_sort(Data, temp, kiri, tengah);
       m_sort(Data, temp, tengah+1, kanan);
       merge(Data, temp, kiri, tengah+1, kanan);
   }
}

void mergeSort(int Data[], int temp[], int array_size)
{
   m_sort(Data, temp, 0, array_size - 1);
}
int main() {
int Data[15];
int temp[15];
	int i,n;
	printf ("banyak data: ");
	scanf("%d",&n);
	
	for (i=0;i<n;i++){
		printf ("data ke- %d  ",i+1);
		scanf ("%d",&Data[i]);
	}
	mergeSort(Data, temp, n);	
	printf ("data yang telah terurut: ");
	for (i=0;i<n;i++){
		printf ("%d\n",Data[i]);
	}
	return 0;
}

