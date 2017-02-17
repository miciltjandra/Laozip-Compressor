#pragma once
#ifndef LISTOFTREE_H
#define LISTOFTREE_H
#include "Tree.h"
#include <fstream>

class ElemenList {
	friend class ListOfTree;
public:
	ElemenList(Tree _Elemen, ElemenList* _Next = Nil);
	Tree GetTree();
	ElemenList* GetNext();
	void SetElemen(Tree _Elemen);
	void SetNext(ElemenList* _Next);
	int GetCount();
	int GetName();

private:
	Tree Elemen;
	ElemenList* Next;
};

class ListOfTree {
public:
	ListOfTree(ElemenList* _First = Nil);
	int IsEmpty() const;
	Tree GetFirstTree();
	void PrintList();
	void AddTerurut(Tree T);
	void ReadFile(std::ifstream& f);
	void MakeList();
	Tree DeleteFirst();
	Tree HuffmanTree();
	void savelist(std::ofstream& outfile);
	void readlist(std::ifstream& infile);
	long long buf[256];

private:
	ElemenList* First;

	int filled;
};


#endif


