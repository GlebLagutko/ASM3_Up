
#include <iostream>
#include <iomanip>

using namespace std;

extern "C"	void __fastcall Function1(int, int**, int);

int main()
{
	int N, ind;
	wcin >> N >> ind;
	ind--;
	int** matrix = new int*[N];
	for (int i = 0; i < N; i++)
	{
		matrix[i] = new int[N];
		for (int j = 0; j < N; j++)
		{
			matrix[i][j] = rand() % 10;
		}
	}

	wcout << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			wcout << setw(4) << matrix[i][j] << ' ';
		}
		wcout << endl;
	}

	Function1(N, matrix, ind);

	wcout << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			wcout << setw(5) << matrix[i][j] << ' ';
		}
		wcout << endl;
	}
	system("pause");
	return 0;
	
}