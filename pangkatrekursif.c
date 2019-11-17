#include <stdio.h>
#include <stdlib.h>
	
float pangkatrekursif(float x,float y)
	{
		if (y==0)
			return 1;
		if (y<=-1)
			return pangkatrekursif(x,y+1)/x;
		else  
			return pangkatrekursif(x,y-1)*x;
}

int main() 
{
float x,y,hasil1;
	
	printf ("masukkan basis: ");
	scanf ("%f",&x);
	
	printf("masukkan pangkat: ");
	scanf ("%f", &y);
	
	hasil1=pangkatrekursif (x,y);
	
	printf ("hasil pangkat rekursif adalah: %f\n",hasil1);
	return 0;
}

	
