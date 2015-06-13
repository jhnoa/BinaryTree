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
		void print();
		void kop();
		void cariUmur(string);
		static int maxNama = 4, maxUmur = 4, maxAlamat = 6;
		int diisi = 0;
		node *here = new node;
		int kanan = 0, kiri = 0;
		tree *left;
		tree *right;
	protected:
};

#endif
