
#include <iostream>
#include <iomanip>

using namespace std;

extern "C"	void __fastcall Function1(int, int**, int);

int main()
{
	int N, ind;
	wcin >> N >> ind;
	ind--;
	int** a = new int*[N];
	for (int i = 0; i < N; i++)
	{
		a[i] = new int[N];
		for (int j = 0; j < N; j++)
		{
			a[i][j] = rand() % 10;
		}
	}

	wcout << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			wcout << setw(4) << a[i][j] << ' ';
		}
		wcout << endl;
	}

	Function1(N, a, ind);

	wcout << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			wcout << setw(5) << a[i][j] << ' ';
		}
		wcout << endl;
	}
	system("pause");
	return 0;
	
}