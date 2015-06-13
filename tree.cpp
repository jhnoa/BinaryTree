#include "tree.h"

tree::tree()
{
}

tree::~tree()
{
}

// belom selesai
void tree::insert(string data, string umur, string alamat)
{
//	cout << "insert";
	if(diisi==0)
	{
		if(data.length() > maxNama) maxNama = data.length();
		if(umur.length() > maxUmur) maxUmur = umur.length();
		if(alamat.length() > maxAlamat) maxAlamat = alamat.length();
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
void tree::addNode(string n, string a, string b)
{
	diisi = 1;
//	cout << "addnode";
	here = new node(n,a,b);
}

void tree::print()
{
//	cout << here->nama;
//	getchar();
	if(kiri == 1) left->print();
	int x = maxNama - here->nama.length() + 1;
	int y = maxUmur - here->umur.length() + 1;
	cout << here->nama << setw(x) << " " << here->umur << setw(y) << " " << here->alamat << endl;
	if(kanan == 1) right->print();
}

void tree::kop()
{
	int temp = maxNama + 1 + maxUmur + 1 + maxAlamat;
	for (int i = 0; i < temp; i++)cout << '-';
	cout << endl;
	cout << "Nama" << setw(maxNama - 3) << ' ' << "Umur" << setw(maxUmur - 3) << ' ' << "Alamat" << endl;
	for (int i = 0; i < temp; i++)cout << '-';
	cout << endl;
}

void tree::cariUmur(string umur)
{
	static int n;
	if(kiri == 1) left->cariUmur(umur);
	if(stoi(here->umur) > stoi(umur) && n == 0)
	{
		tree::kop();
		cout << here->nama << setw(maxNama - here->nama.length() + 1) << ' ' << here->umur << setw(maxUmur - here->umur.length() + 1) << ' ' << here->alamat << endl;
		n++;
	}
	else if(stoi(here->umur) > stoi(umur) && n != 0)
	{
		cout << here->nama << setw(maxNama - here->nama.length() + 1) << ' ' << here->umur << setw(maxUmur - here->umur.length() + 1) << ' ' << here->alamat << endl;
	}
	if(kanan == 1) right->cariUmur(umur);
	
}
