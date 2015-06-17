#ifndef TREE_H
#define TREE_H
#include "func.h"
#include "node.h"
class tree
{
	
	public:
		tree();
		~tree();
		void insert(string, string, string);
		void addNode(string, string, string);
		void print(int, int, int);
		void kop(int, int, int);
		void cariUmur(string, int, int, int);
		void cariAlamat(string, int, int, int);
		void output();
		void hapustree();
		int diisi = 0;
		node *here = new node;
		int kanan = 0, kiri = 0;
		tree *left;
		tree *right;
	protected:
};

#endif
