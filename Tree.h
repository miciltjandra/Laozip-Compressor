#pragma once
#ifndef TREE_H
#define TREE_H
#include <stdio.h>
#include <stdlib.h>
#define Nil NULL
#include <string.h>
#include <fstream>

class ElemenTree {
public:
	friend class Tree;
	friend class ListOfTree;
	ElemenTree(long long _info = 0, int _name = 0, ElemenTree* _Left = Nil, ElemenTree* _Right = Nil);
	void SetLeft(ElemenTree* left);
	void SetRight(ElemenTree* right);
	void PrintElemenTree(int h);
	int SearchTree(int x);
	ElemenTree* getLeft();
	ElemenTree* getRight();
	int getname();

private:
	int name;
	long long info;
	ElemenTree* Left;
	ElemenTree* Right;
};

class Tree
{
	friend class ListOfTree;
	friend class ElemenList;
	friend class main;
public:
	Tree(ElemenTree* _Root = Nil);
	void PrintTree();
	int Getname();
	long long Getcount();
	ElemenTree* root();
	char kode[256][100];
	void generatecode();
	void savetree();
	ElemenTree* getroot();

private:
	ElemenTree* Root;
	char temp[100];
};

#endif