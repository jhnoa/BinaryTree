#include "func.h"

int cek(string a, string b) 
{
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
//	return a.compare() < b ? 1:0;
}

void put(string x)
{
	FILE *file = fopen("data.txt", "a+");
	fputs(x.c_str(), file);
}
