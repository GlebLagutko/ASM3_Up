#include<iostream>
#include<Windows.h>
using namespace std;


bool isPoly = false;

extern "C"
{
	int __cdecl IsPoly();
}


void checkPoly()
{
	isPoly = IsPoly();
	cout << (isPoly ? "poly" : "no") << endl;

}
int main()
{
	checkPoly();

	system("pause");
	return 0;
}

