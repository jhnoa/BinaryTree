#ifndef TREE_H
#define TREE_H
#include "func.h"
#include "node.h"
class tree
{
	public:
		tree();
		tree(string);
		~tree();
		void insert();
		void insert(string);
		void hapus(node*);
		node *here;
		node *left;
		node *right;
	protected:
};

#endif
