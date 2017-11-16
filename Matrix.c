#include "Matrix.h"
void matdisp(MATRIX *Matrix){
	int i,j;
	for(i=0;i<Matrix->m;i++){
		for(j=0;j<Matrix->n;j++){
			printf("%6.2lf ",Matrix->data[i][j]);
		}
		putchar('\n');
	}
}
int matinit(MATRIX *Matrix,unsigned int m,unsigned int n){
	int i,j;
	double *p;
	Matrix->m=m;//行数
	Matrix->n=n;//列数
	Matrix->data=(double **)malloc(m*sizeof(double*));//矩阵指针
	if(Matrix->data==0) return 0;//内存不足
	for(i=0;i<m;i++){
		p=(double *)malloc(n*sizeof(double));//行指针
		if(p)Matrix->data[i]=p;else return 0;//内存不足
	}
	return 1;
}
int matfree(MATRIX *Matrix){
	int i;
	for(i=0;i<Matrix->m;i++){
		free(Matrix->data[i]);//释放行
	}
	free(Matrix->data);//释放矩阵
}
int matfill(MATRIX *Matrix,double x){
	int i,j;
	for(i=0;i<Matrix->m;i++){
		for(j=0;j<Matrix->n;j++){
			Matrix->data[i][j]=x;//填充数据
		}
	}
}
int matcpy(MATRIX *d,MATRIX *s){
	int i,j;
	if(d->m!=s->m||d->n!=s->n){//如果维度不一样需要重新分配内存
		matfree(d);
		matinit(d,s->m,s->n);
	}
	for(i=0;i<s->m;i++){
		for(j=0;j<s->n;j++){
			d->data[i][j]=s->data[i][j];//复制数据
		}
	}
}
int matadd(MATRIX *a,MATRIX *b,MATRIX *s){
	int i,j;
	if(a->m==b->m&&a->n==b->n&&a->m==s->m&&a->n==s->n){
		for(i=0;i<a->m;i++){
			for(j=0;j<a->n;j++){
				s->data[i][j]=a->data[i][j]+b->data[i][j];
			}
		}
		return 1;
	}
	else return 0;
}
int matsub(MATRIX *a,MATRIX *b,MATRIX *s){
	int i,j;
	if(a->m==b->m&&a->n==b->n&&a->m==s->m&&a->n==s->n){
		for(i=0;i<a->m;i++){
			for(j=0;j<a->n;j++){
				s->data[i][j]=a->data[i][j]-b->data[i][j];
			}
		}
		return 1;
	}
	else return 0;
}
int matmul(MATRIX *a,MATRIX *b,MATRIX *s){
	int i,j;
	if(0){
		//以后再写……
	}
}
