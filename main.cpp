#include "tree.h"
#include "node.h"
#include "func.h"
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
bool cari = false;

void menu_data();
void t_karakter();
void cari_nama(tree *root, string nama);
void k_karakter();
int cekdata(string);
void initialize(char *);
void print_output()
{
	remove("output.txt");
	pohon->output();
}

int maxNama = 4, maxUmur = 4, maxAlamat = 6;

int main(int argc, char** argv) 
{
	initialize("data.txt");
	print_output();
	int x;
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
	
		fflush(stdin);
		try
		{
			cin >> x;	
			cin.clear();
			fflush(stdin);
			throw x;
		}
		catch(int x)
		{
			//if(x>0 && x<5 )
			//{
				if(x==1)
				{
					menu_data();
				}
				else if(x==2)
				{
					t_karakter();
					print_output();
				}
				else if(x==3)
				{
					k_karakter();
				}
				else if(x==4)
				{
					exit(0);
				}
			//}	
		
			else
			{
				cout << "Input salah. Masukan sesuai pilihan" << endl; getch();
			}
		/*if(x > '0' && x < '5')
		{
			switch (x)
			{
				case '1' :{
					menu_data();
					break;
				}
				
				case '2' :{
					t_karakter();
					print_output();
					break;
				}
				
				case '3':{
					print_output();
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
		}*/
		}
	} while(1);
	return 0;
}

void menu_data()
{
	int x;
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
		
		fflush(stdin);
		try
		{
			cin >> x;	
			cin.clear();
			fflush(stdin);
			throw x;
		}
		catch(int x)
		{
			if(x==1)
			{
				system("cls");
					if(pohon->diisi == 0)
					{
						cout << "Belum Ada Data.";
					}
					
					else
					{
						pohon->kop(maxNama, maxUmur, maxAlamat);
						pohon->print(maxNama, maxUmur, maxAlamat);
					}
					cout << endl 
						 << "Tekan apa saja untuk kembali"; getch();
			}
			else if(x==2)
			{
				int n = 1;
					system("cls");
					string temp;
					cout << "Masukan Umur Karakter: ";
					cin >> temp;
					for(int i = 0; i < temp.length(); i++) 
						if(!isdigit(temp[i])) 
						{
							cout << "Imput salah. Umur harus berupa angka.";getch();
							n = -1;
							break;
						}
					if(n == 1)
					{
						pohon->kop(maxNama, maxUmur, maxAlamat);
						pohon->cariUmur(temp, maxNama, maxUmur, maxAlamat);
						cout << endl
							 << "Tekan apa saja untuk kembali"; getch();
					
					}	
				}
			else if(x==3)
			{
				char *temp1 = new char[1000];
				string temp;
				system("cls");
				cout << "Alamat: ";
				gets(temp1);
				temp = temp1;
				for (int i = 0; i < temp.length(); i++)
				{
					if (!ispunct(temp[i]) || temp[i] == '.' || temp[i] == ',' || temp[i] == '\'' || temp[i] == ' ')
					{
						n = 2;
					}
					else
					{
						cout << "Alamat yang dimasukan salah.";getch();
						n = 0;
						break;
					} 
		
				}
				if (n == 2)
				{
					pohon->kop(maxNama, maxUmur, maxAlamat);
					pohon->cariAlamat(temp, maxNama, maxUmur, maxAlamat);
					cout << endl
						 << "Tekan apa saja untuk kembali"; getch();
				}
				break;
			}
			else if(x==4)
			{
				n = 1;
				break;
			}
			else
			{
				cout << "Input salah. Masukan sesuai pilihan." << endl;
				getchar();
			}
		}
		/*if(x > '0' && x < '5')
		{
			switch (x)
			{
				case '1' :{
					system("cls");
					if(pohon->diisi == 0) cout << "Belum Ada Data.";
					else
					{
						pohon->kop(maxNama, maxUmur, maxAlamat);
						pohon->print(maxNama, maxUmur, maxAlamat);
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
						pohon->kop(maxNama, maxUmur, maxAlamat);
						pohon->cariUmur(temp, maxNama, maxUmur, maxAlamat);
						cout << endl
							 << "Tekan apa saja untuk kembali"; getch();
					
					}
					break;
				}
				
				case '3':{
					char *temp1 = new char[1000];
					string temp;
					system("cls");
					cout << "Alamat: ";
					gets(temp1);
					temp = temp1;
					for (int i = 0; i < temp.length(); i++)
					{
						if (!ispunct(temp[i]) || temp[i] == '.' || temp[i] == ',' || temp[i] == '\'' || temp[i] == ' ')
						{
							n = 2;
						}
						else
						{
							cout << "Error Input.";getch();
							n = 0;
							break;
						} 
			
					}
					if (n == 2)
					{
						pohon->kop(maxNama, maxUmur, maxAlamat);
						pohon->cariAlamat(temp, maxNama, maxUmur, maxAlamat);
						cout << endl
							 << "Tekan apa saja untuk kembali"; getch();
					}
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
		}*/
	} while (n != 1);
}
// bikin error
void initialize(char*filename)
{
	fstream file;
//	int x;
	string nama,umur,alamat;
	file.open(filename,ios_base::in);
	while (!file.eof())
	{
		getline(file, nama, '\t');
		if(nama.length() > maxNama) maxNama = nama.length();
		if(nama == "") break;
		getline(file, umur, '\t');
		if(umur.length() > maxUmur) maxUmur = umur.length();
		getline(file, alamat, '\n');
		if(alamat.length() > maxAlamat) maxAlamat = alamat.length();
		pohon->insert(nama, umur, alamat);
	}
	file.close();
}

void initialize(char*filename, string s)
{
	fstream file;
//	int x;
	string nama,umur,alamat;
	file.open(filename,ios_base::in);
	while (!file.eof())
	{
		getline(file, nama, '\t');
		if(nama.length() > maxNama) maxNama = nama.length();
		if(nama == "") break;
		getline(file, umur, '\t');
		if(umur.length() > maxUmur) maxUmur = umur.length();
		getline(file, alamat, '\n');
		if(alamat.length() > maxAlamat) maxAlamat = alamat.length();
		if(nama != s)
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
			if (!ispunct(temp[i]) || temp[i] == '.' || temp[i] == ',' || temp[i] == '\'' || temp[i] == ' ' || temp[i] == '-')
			{
				n = 1;
				nama = temp;
				cari = false;
				cari_nama(pohon,nama);
				if(cari == true) 
				{
					n = 4;
					cout << "Sudah ada karakter dengan nama tersebut. Masukkan nama lain." << endl;
					delete[] temp;
					break;
				}
			}
			else
			{
				cout << "Input salah. Nama tidak sesuai dengan ketentuan." << endl;
				n = 0;
				delete[] temp;
				break;
			} 
			
		}
	} while (n != 1);
	nama = temp;
	if(nama.length() > maxNama) maxNama = nama.length();
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
				cout << "Input salah. Masukan umur berupa angka positif." << endl;
				n = 0;
				delete[] temp;
				break;
			} 
			
		}
	} while (n != 2);
	umur = temp;
	delete[] temp;
	if(umur.length() > maxUmur) maxUmur = umur.length();
	
	do
	{
		cout << "Alamat: ";
		temp = new char[256];
		gets(temp);
		for (int i = 0; i < strlen(temp); i++)
		{
			if (!ispunct(temp[i]) || temp[i] == '.' || temp[i] == ',' || temp[i] == '\'' || temp[i] == ' ' || temp[i] == '-')
			{
				n = 3;
			}
			else
			{
				cout << "Input salah. Alamat tidak sesuai dengan ketentuan" << endl;
				n = 0;
				delete[] temp;
				break;
			} 
			
		}
	} while (n != 3);
	
	alamat = temp;
	delete[] temp;
	if(alamat.length() > maxAlamat) maxAlamat = alamat.length();
	
//	ofstream file;
//	file.open("data.txt", ios_base::app);
//	if(file.is_open()) cout << "Open.";
//	else cout << "UnOpened.";
//	file << nama.c_str() << '\t' << umur.c_str() << '\t' << alamat.c_str() << endl;
//	file.close();
	pohon->insert(nama, umur, alamat);
}

void cari_nama(tree *root, string nama) {
	if(cari == true) return;
	if(root->kiri == 1) cari_nama(root->left,nama);
	if(strcmp(root->here->nama.c_str(), nama.c_str()) == 0)
	{
		// escape 
		cari = true;
	}
	if(root->kanan == 1) cari_nama(root->right,nama);
}


/*
list of assumption:
1. data is read into somekind of array of class that represent each char as object
2. which would obviously being entered into binary tree
3. data processing will be using class/object

// DELETE CHAR MENU #3
1. have the name of which character to delete
2. find it.. by searching. use the tree? somewhere... from the class directly? how would that affect the tree after delete action???
3. then delete. make sure it really is gone


/// rundown

Menu Kurang Karakter

Masukkan nama:  Cersei Lannister

Anda yakin akan menghapus karakter ini (Y/N)?

Kalau jawaban ya, maka hapus karakter tersebut.

*/

	
	// when menu #3 is selected
	
	// variables
//	string s;
//	char *answer;
//	int x=0;
	
//	system("cls");
	
	// input
//	cout << "Menu Hapus Karakter" << endl
//		 << "Masukkan nama: " ;
		
//	try {
//		getline(cin,s);
		
		// standard exception automatically casts if occurs
		
		// search the name through the binary tree
		// if not found: throw exception
//		int falseparameter=0;
//		if(falseparameter) {
//			throw "abc";
//		}
		
		/* !! if found */
//		cout << "Anda yakin akan menghapus karakter ini (Y/N)? " ;
		
//		do {
//			try{
//				answer = new char[2];
//				gets(answer);
//				if(answer[0]=='Y' || answer[0]=='N') {
//					x=1;
//				}
//				else {
//					throw 20;
//				}
//				
//			}
//			catch (int n) {
//				cout << "Anda yakin akan menghapus karakter ini (Y/N)? " ;
//			}
//		
//		}while(x!=1);
//		
//		
		// insert name validation function
		// throw name error
		
//	}
//	catch () { //exception for not found data
//		cout << "Nama karakter tidak ditemukan. Masukkan nama karakter yang telah ada." << endl;
		
//	}
	
	// process
	
//	if(answer[0]=='N') {
//		cout << "no"; getch();
//	}
//	else if(answer[0]=='Y') {
//		cout << "yes";
	/*
		call deletion function in binary tree
	*/
	//	pohon->Delete(pohon,s);
//	}
	
	// end

void k_karakter()
{
	string s;
	
	cout << "Masukan Nama yang akan dihapus: ";
	getline(cin, s);
	
	int x = cekdata(s);
	if(x) cout << "Nama: " << s << endl
			   << "Yakin Akan Menghapus? (Y/N) ";
	else {
		cout << "Maaf data tidak ditemukan." << endl
			 << "Tekan apa saja untuk kembali";
		getch();
	}
	char n = getchar();
	if(toupper(n) == 'Y') 
	{
		pohon->hapustree();
		delete pohon;
		pohon = new tree;
		initialize("output.txt", s);
		print_output();
	}
	else return;
}

int cekdata(string s)
{
	ifstream file;
	file.open("output.txt");
	while (!file.eof())
	{
		string nama, umur, alamat;
		getline(file, nama, '\t');
		getline(file, umur, '\t');
		getline(file, alamat, '\n');
		if(nama == s)
		{
			file.close();
			return 1;
		}
	}
	file.close();
	return 0;
}
