#include "proses.h"
#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	cout << "Encode(1)/Decode(2) : ";
	int a;
	cin >> a;
	cin.ignore();
	
	if (a == 1) {
		int jmlfile;
		cout << "Input jumlah file yang dikompres : ";
		cin >> jmlfile;
		cin.ignore();
		int cntfile;
		char filenamee[100][100];
		char outname[100];
		for (cntfile=0 ; cntfile<jmlfile ; cntfile++) {
			cout << "Input file yang dikompres : ";
			cin.getline(filenamee[cntfile],100);
			//cout << filenamee[cntfile];
			//cin >> filenamee[cntfile];
		}
		cout << "Nama file zip : ";
		cin.getline(outname,100);
		//cout << outname;
		//cin >> outname;
		encoding(cntfile,filenamee,outname);
	}
	else {
		char fileinput[100];
		cout << "Input file untuk decompress : ";
		cin.getline(fileinput,100);
		//cin >> fileinput;
		decoding(fileinput);
	}
	
	
	
}