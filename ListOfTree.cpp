#include "ListOfTree.h"
#include <iostream>
#include <fstream>
using namespace std;

ElemenList::ElemenList(Tree _Elemen, ElemenList* _Next) {
	Elemen = _Elemen;
	Next = _Next;
}

Tree ElemenList::GetTree() {
	return Elemen;
}

ElemenList* ElemenList::GetNext() {
	return Next;
}

void ElemenList::SetElemen(Tree _Elemen) {
	Elemen = _Elemen;
}

void ElemenList::SetNext(ElemenList* _Next) {
	Next = _Next;
}

int ElemenList::GetCount() {
	return Elemen.Getcount();
}

int ElemenList::GetName() {
	return Elemen.Getname();
}

ListOfTree::ListOfTree(ElemenList* _First) {
	First = _First;
	int j;
	for (j = 0; j<256; j++)
		buf[j] = 0;
	filled = 0;

}

int ListOfTree::IsEmpty() const {
	if (First == Nil)
		return 1;
	else
		return 0;
}

Tree ListOfTree::GetFirstTree() {
	return First->Elemen;
}

void ListOfTree::AddTerurut(Tree T) {
	ElemenList *A = new ElemenList(T);
	if (IsEmpty()) {
		First = A;
	}
	else {
		ElemenList* P = First;
		ElemenList* Prec = Nil;
		while ((P != Nil) && (A->GetTree().Getcount() >= P->GetTree().Getcount())) {
			Prec = P;
			P = P->Next;
		}
		if (Prec == Nil) {
			A->SetNext(First);
			First = A;
		}
		else {
			Prec->SetNext(A);
			A->SetNext(P);
		}
	}
}

void ListOfTree::PrintList() {
	ElemenList* P = First;
	while (P != Nil) {
		P->Elemen.PrintTree();
		P = P->GetNext();
	}
}


void ListOfTree::ReadFile(std::ifstream& f) {
	if (!f) {
	}
	else {
		char c;
		long i = 0; //itungan jumlah char opsional
		int b;
		long size = f.tellg();
		//cout << size << endl;
		f.seekg(0, ios::beg);
		//long buf[256]; //array
		double process;

		while (f.get(c)) {
			b = int(c);
			if (b < 0)
				b += 256;
			buf[b]++;
			i++;
			process = (double(i) / double(size)) * 100;

		}
		long total = 0;
		int j;
		for (j = 0; j<256; j++) {
			total += buf[j];
		}

		filled = 1;
	}
}

void ListOfTree::MakeList() {
	if (filled) {
		int indeks1, indeks2;
		for (indeks1 = 0; indeks1 <= 255; indeks1++) {
			long max = 0;
			for (indeks2 = 1; indeks2 <= 255; indeks2++) {
				if (buf[indeks2] > buf[max]) {
					max = indeks2;
				}
			}
			if (buf[max] != 0) {
				ElemenTree* temp = new ElemenTree(buf[max], max);
				Tree temptree(temp);
				AddTerurut(temptree);
				buf[max] = 0;
			}
		}
	}
}


Tree ListOfTree::DeleteFirst() {
	if (!IsEmpty()) {
		ElemenList* P = First;
		if (P->Next == Nil) {
			First = Nil;
		}
		else {
			First = P->Next;
		}
		ElemenTree* T = new ElemenTree(P->Elemen.Getcount(), P->Elemen.Getname(), P->Elemen.Root->Left, P->Elemen.Root->Right);
		Tree X(T);
		return T;
	}
	else {
		return Nil;
	}
}

Tree ListOfTree::HuffmanTree() {
	Tree temp1, temp2;
	int x = -1;
	int cnt;
	Tree H;
	if (First->Next == Nil) {
		temp1 = DeleteFirst();
		ElemenTree* temp = new ElemenTree(temp1.Getcount(), x, temp1.Root, Nil);
		Tree T(temp);
		AddTerurut(T);
	}
	else {
		while (First->Next != Nil) {
			temp1 = DeleteFirst();
			temp2 = DeleteFirst();
			cnt = temp1.Getcount() + temp2.Getcount();
			ElemenTree* temp = new ElemenTree(cnt, x, temp1.Root, temp2.Root);
			Tree T(temp);
			AddTerurut(T);
			x--;
		}
	}
	return GetFirstTree();
}

void ListOfTree::savelist(std::ofstream& outfile) {
	int i;
	for (i = 0; i<255; i++) {
		outfile << buf[i] << " ";
	}
	outfile << buf[255] << endl;
}


void ListOfTree::readlist(std::ifstream& infile) {
	int i;
	for (i = 0; i<256; i++) {
		infile >> buf[i];
		filled = 1;
	}
}
