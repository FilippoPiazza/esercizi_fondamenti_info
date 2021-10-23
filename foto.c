#include<stdio.h>
#define N 3
#define M 2*N

float img_src[N][N]={0}, img_out[M][M]={0};

int alg1(){
	for (int i=0; i<N; ++i){
		for (int j=0; j<N; ++j){
			img_out[i*2][j*2]=img_src[i][j];
			img_out[i*2+1][j*2]=img_src[i][j];
			img_out[i*2][j*2+1]=img_src[i][j];
			img_out[i*2+1][j*2+1]=img_src[i][j];
		}
	}
	for(int i=0; i<M; ++i){
		for(int j=0; j<M; ++j){
			printf("%2.1f ", img_out[i][j]);
    	}
    	printf("\n");
    }
	return 0;
}



int alg2(){
	for (int i=0; i<N; ++i){
		for (int j=0; j<N; ++j){
			img_out[i*2][j*2]=img_src[i][j];
			img_out[i*2+1][j*2]=(img_src[i][j]+img_src[i+1][j])/2;
			img_out[i*2][j*2+1]=(img_src[i][j]+img_src[i][j+1])/2;
		}
	}
	for (int i=0; i<N; ++i){
		for (int j=0; j<N; ++j){
			img_out[i*2+1][j*2+1]=(img_out[i*2+1][j*2]+img_out[i*2+1][j*2+2])/2;
		}
	}
	for(int i=0; i<M-1; ++i){
		for(int j=0; j<M-1; ++j){
			printf("%2.1f ", img_out[i][j]);
    	}
    	printf("\n");
    }
	return 0;
}

int main(){
	int c;
	printf("Algoritmo da usare: ");
	scanf("%d", &c);
	printf("Valori foto(da 0 a 10):\n");
	for (int i=0; i<N; ++i){
		for (int j=0; j<N; ++j){
			do{
				printf("(%d)(%d): ", i+1, j+1);
				scanf("%f", &img_src[i][j]);
			}
			while(img_src[i][j]<0 || img_src[i][j]>10);
		}
		printf("\n");
	}
	switch(c){
		case 1: 
			alg1();
			break;
		case 2: 
			alg2();
			break;
	}
}