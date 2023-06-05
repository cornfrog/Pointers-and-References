#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 5

void mallocArray(int** array);
void printArray(int** array);
void setArray(int** array);
void modifyArray(int** array);

int main(){
	int* testArray = NULL;
	mallocArray(&testArray);
	setArray(&testArray);
	printArray(&testArray);
	modifyArray(&testArray);
	printArray(&testArray);
	return 0;
}

void mallocArray(int** array){
	*array = malloc(ARRAY_SIZE * sizeof(int));
	if(array == NULL){
		printf("Error: Malloc() Failed\n");
		return;
	}
}

void setArray(int** array){
	for(int i = 0; i < ARRAY_SIZE; i++){
		(*array)[i] = i;
	}
}

void printArray(int** array){
	for(int i = 0; i < ARRAY_SIZE; i++){
		printf("array[%d] = %d\n", i, (*array)[i]);
	}
	printf("\n");
}

void modifyArray(int** array){
	for(int i = 0; i < ARRAY_SIZE; i++){
		(*array)[i] *= 2;
	}
}
