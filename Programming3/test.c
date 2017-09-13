#include<stdio.h>
#include<stdlib.h>


/*
*Task: Create matrix multiplication
Input: Size of square matrix (250,500,1000,1500,2000)
Internals: Explicitly or implicitly allocate sufficient memory to hold three NxN floating point matrices
Using a random number generator - populate two of the matrices
Multiply the two matrices, putting the result into the third

*/
int main(int argc, char *argv[]) {
	int dimension, r1,c1,r2,c2 = 0;
	int i,j,a,b,d = 0;
	printf("%d\n",argc);
	int count = 0;
	while(count < argc) {
		if(strcmp(argv[count],"-d") == 0) {
			if(argv[count+1] == NULL) {
				printf("No arguments after -d.\n");
			}
			else if(atoi(argv[count+1]) < 0) {
				printf("Negative number is not allowed\n");
			}
			else {
				dimension = atoi(argv[++count]);
			}
		}
		count++;
	}
	
	r1 = dimension;
	c1 = dimension;
	r2 = dimension;
	c2 = dimension;
	
	printf("Dimension %d\n",dimension);

	float ** arr1;
	time_t t1;
	arr1 = (float **)malloc(c1 * sizeof(float *)); 
	srand((unsigned) time(&t1));
	for(i = 0; i < r1; i++){
		arr1[i] = (float *) malloc(r1 * sizeof(float));
	}
	
	for(i = 0; i <r1; i++){
		for(j = 0; j < c1; j++) {
			arr1[i][j] = rand();
		}
	}

	
	float ** arr2;
	time_t t2;
	arr2 = (float **)malloc(c2 * sizeof(float *)); 
	srand((unsigned) time(&t2));
	for(a = 0; a < r1; a++){
		arr2[a] = (float *) malloc(r2 * sizeof(float));
	}
	
	for(a = 0; a < r2; a++){
		for(b = 0; b < c2; b++) {
			arr2[a][b] = rand();
		}
	}
	
	
	// Result
	float **result;
	result = (float **)malloc(c2 * sizeof(float *)); 
	for(d = 0; d < r1; d++){
		result[d] = (float *) malloc(r1 * sizeof(float));
	}
	for(a = 0; a < r1; a++) {
		for(b = 0; b< c2;b++) {
			for(d = 0;d < c1; d++) {
				result[a][b]+=arr1[a][d]*arr2[d][b];	
			}
		}
	}
		
	

	return 0;
}
