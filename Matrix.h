typedef struct Matrix{
	double **data;
	unsigned int m;
	unsigned int n;
}MATRIX;
void matdisp(MATRIX *Matrix);
int matinit(MATRIX *Matrix,unsigned int m,unsigned int n);
int matfree(MATRIX *Matrix);
int matfill(MATRIX *Matrix,double x);
int matcpy(MATRIX *d,MATRIX *s);
int matadd(MATRIX *a,MATRIX *b,MATRIX *s);
int matsub(MATRIX *a,MATRIX *b,MATRIX *s);
int matmul(MATRIX *a,MATRIX *b,MATRIX *s);
