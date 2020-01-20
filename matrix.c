#include <stdio.h>

void Listele(int boy,int *ara){
	int X[boy][boy];
	int i,j;
	int k=0;
	for(i=0; i<boy; i++){
		for(j=0; j<boy; j++){
			X[i][j]=ara[k];
			k++;
		}
	}
	
	for(i=0; i<boy; i++){
		for(j=0; j<boy; j++){
			printf("%5d",X[i][j]);
		}
		printf("\n");
	}
}

int *Carp(int *ara1,int *ara2 ,int boy){
	int i,j,k=0;
	int X[boy][boy];
	int Y[boy][boy];
	int Z[boy][boy];
	
	for(i=0; i<boy; i++){
		for(j=0; j<boy; j++){
			X[i][j]=ara1[k];
			Y[i][j]=ara2[k];
			Z[i][j]=0;
			k++;
		}
	}
	for(i=0; i<boy; i++){
		for(j=0; j<boy; j++){
			for(k=0; k<boy; k++){
				Z[i][j]=Z[i][j]+X[i][k]*Y[k][j];
			}
		}
	}
	int *ara3=Z;

	return ara3;

}

void main(){
	int A[4][4]= {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
	int B[4][4]= {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2};
	int C[4][4]={};
	Listele(4,A);
		printf("\n");
	Listele(4,B);
	int *dene=Carp(A,B,4);
	int i,j;
	int k=0;
	
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			C[i][j]=dene[k];
			k++;
		}
	}
	printf("\n");

	Listele(4,C);
}
