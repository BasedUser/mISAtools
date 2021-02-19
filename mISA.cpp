#include <stdio.h>
#include <iostream>
#include <fstream>
#include "LEnum.hpp"

void tryParseInstruction(std::fstream* fin, std::fstream* fout) {
	// massive switch case to handle instructions
	// since we're reading individual bits and instructions always start on a new byte, read one byte
	char * stored;
	short bits;
	fin->read(stored,1);
	bits = 4; // we have just read a byte and about to remove the first 4 bits
	switch(*stored >> 4) {
		// TODO: add enums
		case 0b0000: {
			break;
		}
		case 0b0001: {
			break;
		}
		case 0b0010: {
			break;
		}
		case 0b0011: {
			break;
		}
		case 0b0100: {
			break;
		}
		case 0b0101: {
			break;
		}
		case 0b0110: {
			break;
		}
		case 0b0111: {
			break;
		}
		case 0b1000: {
			break;
		}
		case 0b1001: {
			break;
		}
		case 0b1010: {
			break;
		}
		case 0b1011: {
			break;
		}
		case 0b1100: {
			break;
		}
		case 0b1101: {
			break;
		}
		case 0b1110: {
			break;
		}
		case 0b1111: {
			break;
		}
	}
}

int main(int argc, char* argv[]) {
	std::fstream fin;
	std::fstream fout;
	if(argc != 3) {
		printf("E: Expected 2 arguments, got %d. Exiting\n", argc-1);
		puts("Usage: misa2mlog <inputfile> <outputfile>");
		return 1;
	} else if (argc == 1 || argv[1] == "-h\0") {
		puts("Usage: misa2mlog <inputfile> <outputfile>");
		return 0;
	}
	fin.open(argv[1], std::ios::binary);
	if(!fin.is_open()) {
		std::cerr << "E: Unable to open input file \"" << argv[1] << "\": Permission denied" << std::endl;
		return 1;
	}
	fout.open(argv[2]);
	if(!fout.is_open()) {
		std::cerr << "E: Unable to open output file \"" << argv[2] << "\": Permission denied" << std::endl;
		return 1;
	}
	while(!fin.eof()){
		tryParseInstruction(&fin, &fout);
	}
	fin.close();
	fout.close();
	puts(all[133].str);
	printf("%d",all[133].id);
	return 0;
}

