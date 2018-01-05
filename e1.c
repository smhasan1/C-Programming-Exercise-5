#include<stdio.h>
#include<string.h>

int main(){

	int r, c, col, gen, z, i, j, count;

	scanf("%d %d", &r, &c);
	scanf("%d", &gen);
	
	col = c*2;

	getchar();

	char matrix[r][col];
	char matrix2[r][c];
	char matrix3[r][c];

	for(i = 0; i < r; i++){	

		for(j = 0; j < col; j++){

		matrix[i][j] = getchar();
//printf("%c",matrix[i][j]);

		}

	}
printf("\n");


	for(i = 0; i < r; i++){	
		c = 0;
		for(j = 0; j < col; j++){
			if(matrix[i][j] != ' ' && matrix[i][j] != '\n' ){
			matrix2[i][c] = matrix[i][j];
//printf("->%c ",matrix2[r][c]);
			c++;
			}
		}
	}

	for(i = 0; i < r; i++){
		for(j = 0; j < c; j++){
		matrix3[i][j] = matrix2[i][j];
		}
	}

for(z = 0; z < gen; z++){ 

	for(i = 0; i < r; i++){
		for(j = 0; j < c; j++){
		matrix2[i][j] = matrix3[i][j];
		}
	}


	for(i = 0; i < r; i++){
		for(j = 0; j < c; j++){

			count = 0;
			if(i == 0 && j == 0){goto a;}
				if(matrix2[i-1][j-1] == '1'){
					count++;
				}
a:			if(i == 0){goto b;}
				if(matrix2[i-1][j] == '1'){
					count++;
				}
b:			if(i == 0 && j == (c-1) ){goto c;}
				if(matrix2[i-1][j+1] == '1'){
					count++;
				}
c:			if(j == (c-1)){goto d;}
				if(matrix2[i][j+1] == '1'){
					count++;
				}
d:			if(i == (r-1) && j == (c-1)){goto e;}	
				if(matrix2[i+1][j+1] == '1'){
					count++;
				}
e:			if(i == (r-1)){goto f;}
				if(matrix2[i+1][j] == '1'){
					count++;
				}
f:			if(i == (r-1) && j == 0){goto g;}
				if(matrix2[i+1][j-1] == '1'){
					count++;
				}
g:			if(j == 0){goto h;}
				if(matrix2[i][j-1] == '1'){
					count++;
				}
h://printf("%d\n",count);

			if(matrix2[i][j] == '1'){

				if(count < 2 || count > 2){
				matrix3[i][j] = '0';
				}

			}else{

				if(count == 3){
				matrix3[i][j] = '1';
				}

			}		
		}
	}

	for(i = 0; i < r; i++){
		for(j = 0; j < c; j++){
		printf("%c ", matrix3[i][j]);
		}
	printf("\n");
	}

printf("-----\n");

}



}
