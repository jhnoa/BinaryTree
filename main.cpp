#include "tree.h"
#include "node.h"
#include "func.h"
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
void insert(int val)
{
	if(pohon.val==NULL)tree->val=val;
	else if(val<tree->val)
    	if(tree->left!=NULL)insert(tree->left,val);
    	else
		{
			tree->left=malloc(sizeof(node_t));
			tree->left->val=val;
		}
	else if(val>=tree->val)
		if(tree->right!=NULL)insert(tree->right,val);
		else
		{
			tree->right=malloc(sizeof(node_t));
			tree->right->val=val;
		}
}

void print_tree(node_t * current) {
  if(current!=NULL)printf("\n%d ",current->val);
  if(current->left!=NULL) printf("L%d ",current->left->val);
  if(current->right!=NULL)printf(" R%d",current->right->val);
  if(current->left!=NULL) print_tree(current->left);
  if(current->right!=NULL)print_tree(current->right);}

void printDFS(node_t * current) {
  if(current->left!=NULL) printDFS(current->left);
  if(current!=NULL)printf("%d ",current->val);
  if(current->right!=NULL)printDFS(current->right);}

*/
tree *pohon = new tree;

void menu_data();
void t_karakter();
void initialize();

int main(int argc, char** argv) 
{
	initialize();
	char x;
	do
	{	
		system("cls");
		cout << "Menu Utama" << endl
			 << "" << endl
			 << "1. Tampilkan Data." << endl
			 << "2. Tambah Karakter." << endl
			 << "3. Hapus Karakter." << endl
			 << "4. Exit." << endl
			 << "" << endl
			 << "Pilihan anda? ";
//		cout << endl << sizeof(*(*pohon).left);
		cin >> x;
		fflush(stdin);
		if(x > '0' && x < '5')
		{
			switch (x)
			{
				case '1' :{
					menu_data();
					break;
				}
				
				case '2' :{
					t_karakter();
					break;
				}
				
				case '3':{
					
					break;
				}
				
				case '4':{
					exit(0);
					break;
				}
			}
		}
		else
		{
			cout << "Error Input." << endl;
			getchar();
		}
	} while(1);
	return 0;
}

void menu_data()
{
	char x;
	int n = 0;
	do
	{
		system("cls");
		cout << "Menu Tampilkan Data" << endl
			 << "" << endl
			 << "1. Tampilkan Semua Data." << endl
			 << "2. Tampilkan Karakter diatas Umur Tertentu." << endl
			 << "3. Tampilkan Karakter dialamat Tertentu." << endl
			 << "4. Kembali ke Main Menu." << endl
			 << "" << endl
			 << "Pilihan anda? ";
//		cout << endl << sizeof(pohon)
//			 << endl << sizeof(pohon->here)
//			 << endl << sizeof(pohon->here->alamat)
//			 << endl << sizeof(pohon->here->diisi)
//			 << endl << sizeof(*pohon)
//			 << endl << sizeof(*pohon->here);
		cin >> x;
		fflush(stdin);
		if(x > '0' && x < '5')
		{
			switch (x)
			{
				case '1' :{
					system("cls");
					if(pohon->diisi == 0) cout << "Belum Ada Data.";
					else
					{
						pohon->kop();
						pohon->print();
					}
					cout << endl 
						 << "Tekan apa saja untuk kembali"; getch();
					break;
				}
				
				case '2' :{
					int n = 1;
					system("cls");
					string temp;
					cout << "Masukan Umur Karakter: ";
					cin >> temp;
					for(int i = 0; i < temp.length(); i++) 
						if(!isdigit(temp[i])) 
						{
							cout << "Input Error.";getch();
							n = -1;
							break;
						}
					if(n == 1)
					{
						pohon->cariUmur(temp);
						cout << endl
							 << "Tekan apa saja untuk kembali"; getch();
					
					}
					break;
				}
				
				case '3':{
					
					break;
				}
				
				case '4':{
					n = 1;
					break;
				}
			}
		}
		else
		{
			cout << "Error Input." << endl;
			getchar();
		}
	} while (n != 1);
}
// bikin error
void initialize()
{
	fstream file;
//	int x;
	string nama,umur,alamat;
	file.open("data.txt",ios_base::in);
	while (!file.eof())
	{
		getline(file, nama, '\t');
		if(nama == "") break;
		getline(file, umur, '\t');
		getline(file, alamat, '\n');
		pohon->insert(nama, umur, alamat);
	}
	file.close();
}

void t_karakter()
{
//	cout << "masuk"; getchar();
	int n = 0;
	char *temp;
	
	string nama, alamat, umur;
	system("cls");
	cout << "Menu Tambah Karakter" << endl;
	
	do
	{
		cout << "Nama: ";
		temp = new char[256];
		gets(temp);
		for (int i = 0; i < strlen(temp); i++)
		{
			if (!ispunct(temp[i]) || temp[i] == '.' || temp[i] == ',' || temp[i] == '\'' || temp[i] == ' ')
			{
				n = 1;
			}
			else
			{
				cout << "Error Input." << endl;
				n = 0;
				delete[] temp;
				break;
			} 
			
		}
	} while (n != 1);
	nama = temp;
	delete[] temp;

	do
	{
		cout << "Umur: ";
		temp = new char[256];
		gets(temp);
		for (int i = 0; i < strlen(temp); i++)
		{
			if (isdigit(temp[i]))
			{
				n = 2;
			}
			else
			{
				cout << "Error Input." << endl;
				n = 0;
				delete[] temp;
				break;
			} 
			
		}
	} while (n != 2);
	umur = temp;
	delete[] temp;
	
	do
	{
		cout << "Alamat: ";
		temp = new char[256];
		gets(temp);
		for (int i = 0; i < strlen(temp); i++)
		{
			if (!ispunct(temp[i]) || temp[i] == '.' || temp[i] == ',' || temp[i] == '\'' || temp[i] == ' ')
			{
				n = 3;
			}
			else
			{
				cout << "Error Input." << endl;
				n = 0;
				delete[] temp;
				break;
			} 
			
		}
	} while (n != 3);
	alamat = temp;
	delete[] temp;
	
	ofstream file;
	file.open("data.txt", ios_base::app);
//	if(file.is_open()) cout << "Open.";
//	else cout << "UnOpened.";
	file << nama.c_str() << '\t' << umur.c_str() << '\t' << alamat.c_str() << endl;
	file.close();
	pohon->insert(nama, umur, alamat);
}
