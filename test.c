#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "Matrix.h"
int main(int argc, char const *argv[])
{
	MATRIX a,b;
	int i,j;
	matinit(&a,10,10);
	matinit(&b,10,10);
	matfill(&a,0);
	for(i=0;i<10;i++){
		a.data[i][i]=i+1;
	}
	matfill(&b,1);
	puts("a=");
	matdisp(&a);
	puts("b=");
	matdisp(&b);
	puts("a+b=");
	matadd(&a,&b,&a);
	matdisp(&a);
	system("pause");
	return 0;
}
