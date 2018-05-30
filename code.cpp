#include <iostream>
#include <fstream>
#include <ctype.h>
#include <stdlib.h>

using namespace std;

//Шифр на базе XOR
void coder(char *input, char *output, char *key);

void main(int argc, char *argv[]){
	if(argc!=4){
		cout<<"Usage: coder input output key";
		exit(1);
	}
	coder(argv[1],argv[2], argv[3]);
}

void coder(char *input, char *output, char *key){
	int ch;
	ifstream in (input, ios::in | ios::binary);
	ofstream out (output, ios::out | ios::binary);
	
	if(!in){
		cout<<"Cannot open input file. \n";
		exit(1);
	}
	if(!out){
		cout<<"Cannot open input file. \n";
		exit(1);
	}
	
	int k=0, size=strlen(key);
	do{
		char ch=in.get();
		ch=ch^key[k%size];
		if(!in.eof())
			out.put(ch);
		k++;
	}while(!in.eof());

	in.close();
	out.close();
}

