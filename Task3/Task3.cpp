#include <iostream>
#include <iomanip>
#include <experimental/filesystem>

using namespace std;

extern "C"	int __fastcall Function1(unsigned int, unsigned __int16*, unsigned __int16*);

int main()
{
	unsigned __int16 a_size;
	cin >> a_size;
	unsigned __int16* a = new unsigned __int16[a_size];
	unsigned __int16* b = new unsigned __int16[1 << 16];
	for (int i = 0; i < a_size; i++)
	{
		a[i] = rand() % 1500;
	}

	cout << endl;
	for (int i = 0; i < a_size; i++)
	{
		cout << setw(6) << a[i] << ' ';
	}

	int result;
	result = Function1(a_size, a, b);

	cout << endl << result << endl;
	system("pause");
	return 0;
}