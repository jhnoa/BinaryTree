#ifndef TREE_H
#define TREE_H
#include "func.h"
#include "node.h"
class tree
{
	
	public:
		tree();
		~tree();
		void insert(string, int, string);
		void addNode(string, int, string);
		void print();
		int diisi = 0;
		node *here = new node;
		int kanan = 0, kiri = 0;
		tree *left;
		tree *right;
	protected:
};

#endif
