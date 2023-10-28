#include <stdio.h>
//defiaaaaaaaaa

int main(){
	
	int pilih; 
	int matriks1[3][3];
	int matriks2[3][3];
	int hasil[3][3];
	
	printf("=== Operasi Matriks ===\n");
	printf("1. Penjumlahan\n");
	printf("2. Pengurangan\n");
	printf("3. Perkalian\n");
	printf("Pilih Salah Satu (1/2/3):");
	scanf("%d", &pilih);
	
	if (pilih==1){
		printf("Masukan elemen pada matriks pertama(3x3):\n" );
		for(int i=1; i<=10; i++){
			for(int j=1; j<10; j++){
				scanf("%d", &matriks1[i][j]);
			}
		}
			
		printf("Masukan elemen pada matriks kedua(3x3):\n" );
		for(int i=1; i<=10; i++){
			for(int j=1; j<10; j++){
				scanf("%d", &matriks2[i][j]);
			}
		}
		printf("matriks pertama :\n");
		for(int i=1; i<=10; i++){
			for(int j=1; j<10; j++){
				printf("%d", matriks1[i][j]);
			}
		}
		printf("matriks kedua :\n");
		for(int i=1; i<=10; i++){
			for(int j=1; j<10; j++){
				printf("%d", matriks2[i][j]);
			}
		}
		for(int i=1; i<=10; i++){
			for(int j=1; j<10; j++){
			hasil[i][j] = matriks1[i][j] + matriks2[i][j];	
			}
		}
		printf("hasil penjumlahan :\n");
		for(int i=1; i<=10; i++){
			for(int j=1; j<10; j++){
			printf("%d", hasil[i][j]);	
			}
		}
		
		
		
	}else if(pilih==2){
		printf("Masukan elemen pada matriks pertama(3x3):\n" );
		for(int i=1; i<10; i++){
			for(int j=1; j<10; j++){
				scanf("%d", &matriks1[i][j]);
			}
		}
			
		printf("Masukan elemen pada matriks kedua(3x3):\n" );
		for(int i=1; i<10; i++){
			for(int j=1; j<10; j++){
				scanf("%d", &matriks2[i][j]);
			}
		}
		printf("matriks pertama :\n");
		for(int i=1; i<10; i++){
			for(int j=1; j<10; j++){
				printf("%d", matriks1[i][j]);
			}
		}
		printf("matriks kedua :\n");
		for(int i=1; i<10; i++){
			for(int j=1; j<10; j++){
				printf("%d", matriks2[i][j]);
			}
		}
		for(int i=1; i<10; i++){
			for(int j=1; j<10; j++){
			hasil[i][j] = matriks1[i][j] - matriks2[i][j];	
			}
		}
		printf("hasil pengurangan :\n");
		for(int i=1; i<10; i++){
			for(int j=1; j<10; j++){
			printf("%d", hasil[i][j]);	
			}
		}
 		
 	
	}else if(pilih==3)
	{
		printf("Masukan elemen pada matriks pertama(3x3):\n" );
		for(int i=1; i<10; i++){
			for(int j=1; j<10; j++){
				scanf("%d", &matriks1[i][j]);
			}
		}
			
		printf("Masukan elemen pada matriks kedua(3x3):\n" );
		for(int i=1; i<10; i++){
			for(int j=1; j<10; j++){
				scanf("%d", &matriks2[i][j]);
			}
		}
		printf("matriks pertama :\n");
		for(int i=1; i<10; i++){
			for(int j=1; j<10; j++){
				printf("%d", matriks1[i][j]);
			}
		}
		printf("matriks kedua :\n");
		for(int i=1; i<10; i++){
			for(int j=1; j<10; j++){
				printf("%d", matriks2[i][j]);
			}
		}
		for(int i=1; i<10; i++){
			for(int j=1; j<10; j++){
			hasil[i][j] = matriks1[i][j] * matriks2[i][j];	
			}
		}
		printf("hasil perkalian :\n");
		for(int i=1; i<10; i++){
			for(int j=1; j<10; j++){
			printf("%d", hasil[i][j]);	
			}
		}
	
	
	}else
	{
		printf("dah");
	}
	
}