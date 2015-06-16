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

void tree::print(int maxNama, int maxUmur, int maxAlamat)
{
//	cout << here->nama;
//	getchar();
	if(kiri == 1) left->print(maxNama, maxUmur, maxAlamat);
	cout.setf(ios::left, ios::adjustfield);
	cout << setw(maxNama) << here->nama << " " << setw(maxUmur) << here->umur << " " << setw(maxAlamat) << here->alamat << endl;
	cout.unsetf(ios::adjustfield);
	if(kanan == 1) right->print(maxNama, maxUmur, maxAlamat);
}

void tree::kop(int maxNama, int maxUmur, int maxAlamat)
{
	int temp = maxNama + 1 + maxUmur + 1 + maxAlamat;
	for (int i = 0; i < temp; i++)cout << '-';
	cout << endl;
	cout.setf(ios::left, ios::adjustfield);
	cout << setw(maxNama) << "Nama" << " " << setw(maxUmur) << "Umur"  << " " << setw(maxAlamat) << "Alamat" << endl;
	cout.unsetf(ios::adjustfield);
	for (int i = 0; i < temp; i++)cout << '-';
	cout << endl;
}
	
void tree::cariUmur(string umur, int maxNama, int maxUmur, int maxAlamat)
{
	if(kiri == 1) left->cariUmur(umur, maxNama, maxUmur, maxAlamat);
	if(stoi(here->umur) > stoi(umur))
	{
		cout.setf(ios::left, ios::adjustfield);
		cout << setw(maxNama) << here->nama << ' ' << setw(maxUmur) << here->umur << ' ' << setw(maxAlamat) << here->alamat << endl;
		cout.unsetf(ios::adjustfield);
	}
	if(kanan == 1) right->cariUmur(umur, maxNama, maxUmur, maxAlamat);
}

void tree::cariAlamat(string alamat, int maxNama, int maxUmur, int maxAlamat)
{
	if(kiri == 1) left->cariAlamat(alamat, maxNama, maxUmur, maxAlamat);
	if(!strcmp(here->alamat.c_str(), alamat.c_str()))
	{
		cout.setf(ios::left, ios::adjustfield);
		cout << setw(maxNama) << here->nama << ' ' << setw(maxUmur) << here->umur << ' ' << setw(maxAlamat) << here->alamat << endl;
		cout.unsetf(ios::adjustfield);
	}
	if(kanan == 1) right->cariAlamat(alamat, maxNama, maxUmur, maxAlamat);

}

void tree::output()
{
	if(kiri == 1) left->output();
	
	ofstream file;
	file.open("output.txt", ios_base::app);
	file << here->nama << '\t' << here->umur << '\t' <<here->alamat << endl;
	file.close();
	
	if(kanan == 1) right->output();
}
