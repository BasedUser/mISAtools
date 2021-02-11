#include <stdio.h>
#include <fstream>
#include "LEnum.h"

int main(int argc, char*[] argv) {
	ifstream fin;
	ofstream fout;
	if(argc != 2) {
		puts("E: Expected 2 arguments, got %d. Exiting\n", argc);
		puts("Usage: misa2mlog <inputfile> <outputfile>");
		return 1;
	} else if (argc == 0 || argv[0] == "-h") {
		puts("Usage: misa2mlog <inputfile> <outputfile>");
		return 0;
	}
	fin.open(argv[0]);
	fout.open(argv[1]);
	
}
