#include "Tree.h"
#include "tree.h"
#include <iostream>
#include <fstream>
using namespace std;

ElemenTree::ElemenTree(long long _info, int _name, ElemenTree* _Left, ElemenTree* _Right) {
	info = _info;
	name = _name;
	Left = _Left;
	Right = _Right;
}

void ElemenTree::PrintElemenTree(int h) {
	int i;

	if (Left != Nil) {
		Left->PrintElemenTree(h + 1);
	}
	else {

	}
	if (Right != Nil) {
		Right->PrintElemenTree(h + 1);
	}
	else {

	}
}

void ElemenTree::SetLeft(ElemenTree* left) {
	Left = left;
}

void ElemenTree::SetRight(ElemenTree* right) {
	Right = right;
}

Tree::Tree(ElemenTree* _Root) {
	Root = _Root;
}


void Tree::PrintTree() {
	Root->PrintElemenTree(0);
}

int Tree::Getname() {
	return Root->name;
}

long long Tree::Getcount() {
	return Root->info;
}

int ElemenTree::SearchTree(int x)
{
	if (this == Nil)
		return 0;
	else
	{
		if (name == x)
			return 1;
		else
		{
			return (Left->SearchTree(x) || Right->SearchTree(x));
		}
	}
}

ElemenTree* Tree::root() {
	return Root;
}

void Tree::generatecode() {
	int i;
	ElemenTree* P;
	for (i = 0; i<256; i++) {
		P = Root;
		strcpy(temp, "");
		while (P->name != i) {
			if (P->Left->SearchTree(i)) {
				strcat(temp, "0");
				P = P->Left;
			}
			else if (P->Right->SearchTree(i)) {
				strcat(temp, "1");
				P = P->Right;
			}
			else {
				strcat(temp, "x");
				strcpy(kode[i], temp);
				break;
			}
		}

		strcpy(kode[i], temp);
	}
}

ElemenTree* ElemenTree::getLeft() {
	return Left;
}

ElemenTree* ElemenTree::getRight() {
	return Right;
}

ElemenTree* Tree::getroot() {
	return Root;
}

int ElemenTree::getname() {
	return name;
}

