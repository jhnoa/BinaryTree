#include "tree.h"
#include "node.h"
#include "func.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
tree pohon;
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
void maintain();
void menu_data();
void t_karakter();

int main(int argc, char** argv) 
{

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
		try
		{
			fflush(stdin);
			throw getchar();
		}
		catch (int x)
		{
			x-='0';
			if (x == 1) menu_data();
			else if (x == 2);
			else if (x == 3);
			else if (x == 4) exit(1);
			else
			{
				fflush(stdin);
				cout << "Error input. Repeat input." << endl;
				getchar();
			} 
		}
	} while(1);
	return 0;
}

void maintain()
{
	
	
}

void menu_data()
{
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
		try
		{
			fflush(stdin);
			throw getchar();
		}
		catch (int x)
		{
			x-='0';
			if (x == 1);
			else if (x == 2);
			else if (x == 3);
			else if (x == 4) n = 1;
			else 
			{
				fflush(stdin);
				cout << "Error input. Repeat input." << endl;
				getchar();
			}
		}
	} while (n != 1);
}

void t_karakter()
{
	int n = 0;
	string nama, alamat;
	int umur;
	system("cls");
	do
	{
		cout << "Menu Tambah Karakter" << endl
			 << "Nama: ";
		try
		{
			fflush(stdin);
//			gets(nama);
//			throw 
		}
		catch (string x)
		{
//			for (int i = 0; i < x.leght(); i++)
		}
	} while (n != 1);
}
