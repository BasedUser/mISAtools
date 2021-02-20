#include <stdio.h>
#include <iostream>
#include <fstream>
#include "LEnum.hpp"

void tryParseInstruction(std::fstream* fin, std::fstream* fout) {
	// massive switch case to handle instructions
	// since we're reading individual bits and instructions always start on a new byte, read one byte
	unsigned int * stored;
	short bits;
	fin->read((char *)stored,1); // IIIIDDDD ???????? ???????? ????????
	*stored >>= 24; // 00000000 00000000 00000000 IIIIDDDD
	bits = 4; // we have just read a byte and about to remove the first 4 bits
	switch(*stored >> 4) {
		*stored &= 0xF;
		case I_OP: {
			break;
		}
		case I_SET: {
			break;
		}
		case I_READ: {
			break;
		}
		case I_WRITE: {
			break;
		}
		case I_DRAW: {
			break;
		}
		case I_PRINT: {
			break;
		}
		case I_DRAWFLUSH: {
			break;
		}
		case I_PRINTFLUSH: {
			break;
		}
		case I_GETLINK: {
			break;
		}
		case I_CONTROL: {
			break;
		}
		case I_RADAR: {
			break;
		}
		case I_SENSOR: {
			break;
		}
		case I_JUMP: {
			break;
		}
		case I_UBIND: {
			break;
		}
		case I_UCONTROL: {
			break;
		}
		case I_ULOCATE: {
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
		std::cerr << "E: Unable to open input file \"" << argv[1] << "\"" << std::endl;
		return 1;
	}
	fout.open(argv[2]);
	if(!fout.is_open()) {
		std::cerr << "E: Unable to open output file \"" << argv[2] << "\"" << std::endl;
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

