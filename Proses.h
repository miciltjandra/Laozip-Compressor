#pragma once
#ifndef PROSES_H
#define PROSES_H
#include "ListOfTree.h"
#include <iostream>
#include <fstream>

using namespace std;


	char ChangeToChar(string data);
	string ChangeToBinary(int data);
	std::string filename(char* namafile);
	double filesize(char* namafile);
	int istua(char* namafile);
	void encoding(int jmlfile, char filenamee[100][100], char* outname);
	void decoding(char* fileinput);


#endif