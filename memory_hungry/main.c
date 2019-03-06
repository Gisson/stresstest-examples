#include "stdio.h"
#include "stdlib.h"

void leaky(int num){
	malloc(sizeof(int)*num);
}

int main(int argc, char** argv){
	while(1){
		leaky(10);
	}
	return 0;
}
