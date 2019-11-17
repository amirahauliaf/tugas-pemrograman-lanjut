#include <stdio.h>
#include <conio.h>

void main()
{
	int x;
	int *px;
	
	x=10;
	px=&x;
	
	printf ("x berada di slot memori nomor : %d\n",px);
	printf ("x berada di slot memori nomor : %d\n",&x);
	printf ("isi var x : %d\n",x);
	printf ("isi var x : %d\n",*px);
	getch ();
}
