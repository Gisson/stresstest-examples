#include "stdio.h"

void writeAlot(){
	FILE *zero, *test;
	zero = fopen("/dev/zero", "r");
	test = fopen("test", "w");
	while(1)
		fputc( fgetc(zero), test);
	fclose(zero);
	fclose(test);
}

int main(int argc, char** argv){
	writeAlot();
	return 0;
}
