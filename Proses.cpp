#include "Proses.h"
#include <iostream>
#include <fstream>
#include "proses.h"
#include <math.h>
#include <time.h>
#include <string>

using namespace std;

char ChangeToChar(string data) {
	int temp;
	int hasil = 0;
	char karakter;
	temp = (int(data[0]) - 48) * 128;
	hasil = hasil + temp;
	temp = (int(data[1]) - 48) * 64;
	hasil = hasil + temp;
	temp = (int(data[2]) - 48) * 32;
	hasil = hasil + temp;
	temp = (int(data[3]) - 48) * 16;
	hasil = hasil + temp;
	temp = (int(data[4]) - 48) * 8;
	hasil = hasil + temp;
	temp = (int(data[5]) - 48) * 4;
	hasil = hasil + temp;
	temp = (int(data[6]) - 48) * 2;
	hasil = hasil + temp;
	temp = (int(data[7]) - 48) * 1;
	hasil = hasil + temp;
	karakter = char(hasil);

	return karakter;
}

string ChangeToBinary(int data) {
	string biner = "";
	int hasil = 0;
	int sisa = 0;
	int temp = 0;
	if (data < 0) {
		data += 256;
	}
	hasil = data / 128;
	sisa = data % 128;
	if (hasil == 1)
		temp = 49;
	else
		temp = 48;
	biner = char(temp);

	hasil = sisa / 64;
	sisa = sisa % 64;
	if (hasil == 1)
		temp = 49;
	else
		temp = 48;
	biner = biner + char(temp);

	hasil = sisa / 32;
	sisa = sisa % 32;
	if (hasil == 1)
		temp = 49;
	else
		temp = 48;
	biner = biner + char(temp);

	hasil = sisa / 16;
	sisa = sisa % 16;
	if (hasil == 1)
		temp = 49;
	else
		temp = 48;
	biner = biner + char(temp);

	hasil = sisa / 8;
	sisa = sisa % 8;
	if (hasil == 1)
		temp = 49;
	else
		temp = 48;
	biner = biner + char(temp);

	hasil = sisa / 4;
	sisa = sisa % 4;
	if (hasil == 1)
		temp = 49;
	else
		temp = 48;
	biner = biner + char(temp);

	hasil = sisa / 2;
	sisa = sisa % 2;

	if (hasil == 1)
		temp = 49;
	else
		temp = 48;
	biner = biner + char(temp);

	if (sisa == 1)
		temp = 49;
	else
		temp = 48;
	biner = biner + char(temp);

	return biner;

}

int istua(char* namafile) {
	int len = strlen(namafile);
	int i = len;
	if ((namafile[i - 4] == '.') && (namafile[i - 3] == 't') && (namafile[i - 2] == 'u') && (namafile[i - 1] == 'a')) {
		return 1;
	}
	else {
		return 0;
	}
}

double filesize(char* namafile) {
	ifstream f(namafile, ios::binary | ios::ate);
	double size = f.tellg();
	size = size / 1024;
	size = roundf(size * 100) / 100;
	return size;
}

std::string filename(char* namafile) {
	ifstream f(namafile, ios::binary | ios::ate);
	int len = strlen(namafile);
	char purename[100] = "";
	int j = len;
	std::string hasil;

	while ((namafile[j] != '\\') && (j>0))
		j--;
	if (j == 0) {
		hasil.assign(namafile, len);
		return hasil;
	}
	else {
		strcat(purename, namafile + j + 1);
		hasil.assign(purename, strlen(purename));
		return hasil;
	}
}

encode(std::ifstream& f, std::ofstream& fileencode, Tree X, long long sizeawal)
{
							string biner = "";
							char c; //karakter dari file
							int x; //ubah karakter file ke integer
							char huruf; // karakter yg udh 8 bit diubah ke karakter baru
							int pjg = 0; // panjang karakter udh 8 atau belum, digunain pas akhir kalau ga 8 panjangnya
							int z;
							if (!f) {
								//cout << "File not found!!" << endl;
							}
							else {
								//double progress = cntfile * jatahfile;
								while (f.get(c)) {
									//progress += 1 / double(sizeawal) * 100;
									
									x = int(c);
									if (x<0) {
										x += 256;
									}
									for (z = 0; z<256; z++) {
										if (x == z) {
											int length;
											length = strlen(X.kode[z]);
											int i;
											for (i = 0; i < length; i++) {
												if (pjg == 8) {
													huruf = ChangeToChar(biner);

													fileencode << huruf;
													pjg = 0;
													biner = "";
													biner = biner + X.kode[z][i];
													pjg = pjg + 1;
												}
												else {
													biner = biner + X.kode[z][i];
													pjg = pjg + 1;
												}

											}
										}
									}

								}
								if (pjg != 8) {
									int tambah;
									tambah = 8 - pjg;
									int i;
									for (i = 0; i < tambah; i++) {
										biner = biner + '0';
									}
								}
								huruf = ChangeToChar(biner);
								fileencode << huruf;
							}
}

void encoding(int jmlfile, char filenamee[100][100], char* outname)
{
					time_t start, now;
					double seconds;
					time(&start);

					int cntfile;
					ListOfTree A;
					for (cntfile = 0; cntfile < jmlfile; cntfile++) {
						ifstream f(filenamee[cntfile], ios::binary | ios::in | ios::ate);
						A.ReadFile(f);
					}



					int z;
					int sum = 0;
					float frek;
					float entropi = 0;
					long long sizeawal = 0;
					long long copybuf[256];
					for (z = 0; z < 256; z++) {
						sum = sum + A.buf[z];
					}

					for (z = 0; z < 256; z++) {
						frek = (float)A.buf[z] / (float)sum;
						if (frek != 0) {
							entropi = entropi + (frek * (-log2(frek)));
						}
						copybuf[z] = A.buf[z];
						sizeawal += A.buf[z];
					}

					ofstream fileencode(outname, ios::binary | ios::out);
					A.savelist(fileencode);
					fileencode << jmlfile << "." << endl;

					A.MakeList();
					Tree X;
					X = A.HuffmanTree();
					X.generatecode();

					float jmlbit = 0;
					for (z = 0; z < 256; z++) {
						frek = (float)copybuf[z] / (float)sum;
						jmlbit = jmlbit + (frek * float(strlen(X.kode[z])));
					}

					long long encoded = 0;
					
					double progress = 0;
					for (cntfile = 0; cntfile < jmlfile; cntfile++) {
						//fileencode
						
						//yg gw ubah buat nama
						ifstream f(filenamee[cntfile], ios::binary | ios::ate);
						int len = strlen(filenamee[cntfile]);
						char purename[100] = "";
						int j = len;
						while ((filenamee[cntfile][j] != '\\') && (j>0))
							j--;
						if (j == 0)
							fileencode << filenamee[cntfile] << endl;
						else {
							strcat(purename, filenamee[cntfile] + j + 1);
							fileencode << purename << endl;
						}

						fileencode << f.tellg() << endl;
						f.seekg(0, ios::beg);
						encode(f, fileencode, X, sizeawal);
						//**************************************************************
							





						//**************************************************************
						fileencode << "\n.\n";
					}
					long long sizeakhir = fileencode.tellp();
					fileencode.close();
					char intStr[100];
					string stemp;
					time(&now);
					seconds = difftime(now, start);
					string statistik = "";
					statistik = statistik + "Waktu pemampatan	: ";
					if (int(seconds / 60) != 0) {
						int menit = seconds / 60;
						seconds = int(seconds) % 60;
						itoa(menit, intStr, 10);
						stemp = string(intStr);
						statistik += stemp + " menit ";
					}
					itoa(seconds, intStr, 10);
					stemp = string(intStr);
					statistik += stemp + " detik\r\n";
					statistik += "Ukuran awal	: ";
					itoa(sizeawal, intStr, 10);
					stemp = string(intStr);
					statistik += stemp += " bytes\r\n";
					statistik += "Ukuran akhir	: ";
					itoa(sizeakhir, intStr, 10);
					stemp = string(intStr);
					statistik += stemp += " bytes\r\n";
					float nisbah = float(sizeakhir) / float(sizeawal) * 100;
					float desimal = nisbah - int(nisbah);
					desimal *= 10000;
					itoa(nisbah, intStr, 10);
					stemp = string(intStr);
					statistik += "Nisbah pemampatan	: " + stemp + ".";
					itoa(desimal, intStr, 10);
					stemp = string(intStr);
					statistik += stemp + "%\r\n";
					itoa(entropi, intStr, 10);
					stemp = string(intStr);
					statistik += "Entropi		: " + stemp + ".";
					desimal = entropi - int(entropi);
					desimal *= 100000;
					itoa(desimal, intStr, 10);
					stemp = string(intStr);
					statistik += stemp + "\r\n";
					itoa(jmlbit, intStr, 10);
					stemp = string(intStr);
					statistik += "Jumlah bit per karakter : " + stemp + ".";
					desimal = jmlbit - int(jmlbit);
					desimal *= 100000;
					itoa(desimal, intStr, 10);
					stemp = string(intStr);
					statistik += stemp + "\r\n";
					cout << statistik << endl;

			//---------------------------------------------------------
}



decode(Tree X,std::ifstream& f, char* target)
{
	ElemenTree* P;
							P = X.getroot();


							int z;
							char dummy;
							f.get(dummy);
							while (dummy != '.') {
								f.get(dummy);
							}
							f.get(dummy); //baca newline

							char namafile[100];
							f.getline(namafile, 100);
							char newnamafile[100];
							strcpy(newnamafile, target);
							strcat(newnamafile, "\\");
							strcat(newnamafile, namafile);
							ofstream filedecode(newnamafile, ios::binary | ios::out);

							long long size;
							f >> size;
							f.get(dummy); //baca newline




							int count = 0;
							long long decompressed = 0;
							char huruf;
							char c;
							int x;
							string biner = "";
							char filename[100];

							if (!f) {
							}
							else {
								double progress = 0 ;
								while (decompressed < size) {
									f.get(c);
									x = (int)c;

									biner = ChangeToBinary(x);

									int i;

									for (i = 0; i < 8; i++) {
										if (biner[i] == '0') {
											if (decompressed < size)
												P = P->getLeft();
											if ((P->getLeft() == Nil) && (P->getRight() == Nil)) {
												huruf = char(P->getname());
												if (P->getname() == 10) {
													count += 1;
												}
												filedecode << huruf;
												decompressed++;
												progress = double(decompressed) / double(size) * 100;
												P = X.getroot();
											}
										}
										else {
											if (decompressed < size)
												P = P->getRight();
											if ((P->getLeft() == Nil) && (P->getRight() == Nil)) {
												huruf = char(P->getname());
												if (P->getname() == 10) {
													count += 1;
												}
												filedecode << huruf;
												decompressed++;
												progress = double(decompressed) / double(size) * 100;
												P = X.getroot();
											}
										}
									}
									
								}
							}
}

void decoding(char* fileinput)
{
					char target[100];
					cout << "Lokasi file hasil : ";
					cin >> target;
					time_t start, now;
					double seconds;
					time(&start);
					ifstream f(fileinput, ios::binary | ios::in);
					ListOfTree A;
					A.readlist(f);
					A.MakeList();
					Tree X;
					X = A.HuffmanTree();
					X.generatecode();


					int jmlfile;
					f >> jmlfile;

					int z;
					for (z = 1; z <= jmlfile; z++) {
						decode(X, f, target);
						//*********************************************
							

						//*********************************************
					}

					char intStr[100];
					string stemp;
					time(&now);
					seconds = difftime(now, start);
					string statistik = "";
					statistik = statistik + "Waktu pernimampatan	: ";
					if (int(seconds / 60) != 0) {
						int menit = seconds / 60;
						seconds = int(seconds) % 60;
						itoa(menit, intStr, 10);
						stemp = string(intStr);
						statistik += stemp + " menit ";
					}
					itoa(seconds, intStr, 10);
					stemp = string(intStr);
					statistik += stemp + " detik\n";
					cout << statistik << endl;

				//---------------------------------------------------------------------------
}