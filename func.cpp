#include "func.h"

int cek(string a, string b) 
{
	return a.compare(b)<=0;
	/* maafkan daku
	int n;
	char *x, *y;
//	x = new char[a.length()+1];
//	x = a;
//	y = new char[b.length()+1];
//	y = b;
	if (a.length() > b.length()) n = b.length();
	else n = a.length();
	
    for (int i = 0; i < n; i++)
    {
    	if(a[i] == b[i])continue;
    	else if(a[i] < b[i]) return 1;
    	else return 0;
    }
    return 1;
//	return a.compare() < b ? 1:0;
	*/
}

void put(string x)
{
	FILE * file;
	file = fopen("data.exe", "a+");
//	if(file.is_open()) cout << "Open.";
//	else cout << "UnOpened.";
	fseek(file, 0, SEEK_END);
	fprintf(file, "%s\n", x.c_str());
	fclose(file);
}

void gotoxy(int column, int line)
{
	COORD coord;
	coord.X = column;
	coord.Y = line;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int wherex()
{
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	COORD  result;
	if (!GetConsoleScreenBufferInfo(GetStdHandle( STD_OUTPUT_HANDLE ),&csbi))
	return -1;
	return result.X;
}

int wherey()
{
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	COORD  result;
	if (!GetConsoleScreenBufferInfo(GetStdHandle( STD_OUTPUT_HANDLE ),&csbi))
	return -1;
	return result.Y;
}
