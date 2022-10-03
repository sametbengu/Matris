#include <stdio.h>
#include <time.h>

int main(void) {
	clock_t start_t, end_t;
	
	double N,i,j,k;
	printf("Matrisin boyutunu girin: ");
	scanf("%lf",&N);
	double matris1[N][N],matris2[N][N],sonuc[N][N];
	
	
	
	while(N<=5000){
	
	start_t = clock();
	
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			for(k=0;k<N;k++){
				sonuc[i][j]+=matris1[i][k] * matris2[k][j];
			}
			
		}		
	} 
	end_t = clock();
	printf("ijk için geçen süre: %f\n", (double)(end_t - start_t) / CLOCKS_PER_SEC);
	
	for(j=0;j<N;j++){
		for(i=0;i<N;i++){
			for(k=0;k<N;k++){
				sonuc[i][j] += matris1[i][k] * matris2[k][j];
			}
		}
	}
	end_t = clock();
	printf("jik için geçen süre: %f\n", (double)(end_t - start_t) / CLOCKS_PER_SEC);
	
	for(i=0;i<N;i++){
		for(k=0;k<N;k++){
			for(j=0;j<N;j++){
				sonuc[i][j] += matris1[i][k] * matris2[k][j];
			}
		}
	}
	end_t = clock();
	printf("ikj için geçen süre: %f\n", (double)(end_t - start_t) / CLOCKS_PER_SEC);
	
	for(k=0;k<N;k++){
		for(i=0;i<N;j++){
			for(j=0;j<N;j++){
				sonuc[i][j] += matris1[i][k] * matris2[k][j];
			}
		}
	}
	end_t = clock();
	printf("kij için geçen süre : %f\n", (double)(end_t - start_t) / CLOCKS_PER_SEC);
	
	for(k=0;k<N;k++){
		for(j=0;j<N;j++){
			for(i=0;i<N;i++){
				sonuc[i][j] += matris1[i][k] * matris2[k][j];
			}
		}
	}
	end_t = clock();
	printf(" kji için geçen süre : %f\n", (double)(end_t - start_t) / CLOCKS_PER_SEC);
	
	for(j=0;j<N;j++){
		for(k=0;k<N;k++){
			for(i=0;i<N;i++){
				sonuc[i][j] += matris1[i][k] * matris2[k][j];
			}
		}
	}
	end_t = clock();
	printf("jki için geçen süre: %f\n", (double)(end_t - start_t) / CLOCKS_PER_SEC);
	
	
	printf("\n\n *******************  \n");
	
	
	N=N+1000;
}
	
	
}

