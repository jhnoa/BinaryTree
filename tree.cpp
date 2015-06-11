#include "tree.h"

tree::tree()
{
	
}

tree::~tree()
{
}

// belom selesai
void tree::insert(string data, int umur, string alamat)
{
	cout << "insert";
	if(diisi==0)
	{
		addNode(data, umur, alamat);
	}
	else if(cek(data,here->nama) == 1)
    	if(kiri==0)
		{
			left = new tree;
			kiri = 1;
			left->insert(data, umur, alamat);
		}
    	else
		{
			left->insert(data, umur, alamat);
		}
	else if(cek(data,here->nama) == 0)
		if(kanan==0)
		{
			right = new tree;
			kanan = 1;
			right->insert(data, umur, alamat);
		}
		else
		{
			right->insert(data, umur, alamat);
		}
}
void tree::addNode(string n, int a, string b)
{
	diisi = 1;
	cout << "addnode";
	here = new node(n,a,b);
}

void tree::print()
{
//	cout << here->nama;
//	getchar();
	if(kiri == 1) left->print();
	cout << here->nama << '\t' << here->umur << '\t' << here->alamat << endl;
	if(kanan == 1) right->print();
}
