#include <stdio.h>
#include <stdlib.h>

float x,y,hasil2,i,a;
	
float pangkatiterasi (float x, float y){
	hasil2=1;
	if (y==0)
		return 1;
	if (y<=-1)
		for (i=-1; i>=y; i--){
		hasil2=hasil2*(1.0/x);
	}
	else
		for (i=1; i<=y; i++){
		hasil2=hasil2*x;
	}
	return hasil2;
}
int main() {
	printf ("masukkan basis: ");
	scanf ("%f",&x);
	printf("masukkan pangkat: ");
	scanf ("%f",&y);
	hasil2=pangkatiterasi (x,y);
	printf ("hasil pangkat iterasi adalah: %f",hasil2);
	return 0;
}
