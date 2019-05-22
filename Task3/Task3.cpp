#include <iostream>
#include <iomanip>
#include <experimental/filesystem>

using namespace std;

extern "C"
{
	int __fastcall Function1(unsigned int, int*);
	int __fastcall FindMax(unsigned int, int*);

}

int main()
{
	unsigned int a_size;
	cin >> a_size;
	int* b = new int[a_size];
	 
	for (int i = 0; i < a_size; i++)
	{
		b[i] = rand() % 1000 ;
	}


	cout << endl;
	for (int i = 0; i < a_size; i++)
	{
		cout << setw(6) << b[i] << ' ';
	}

	int result;
	result = Function1(a_size, b);
	auto result1 = FindMax(a_size, b);

	cout << endl << "Count : " << result << endl;
	cout << "Max element : " << result1 << endl;
	system("pause");
	return 0;
}