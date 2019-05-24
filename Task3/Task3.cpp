#include <iostream>
#include <iomanip>
#include <experimental/filesystem>

using namespace std;

const int N = 10;

extern "C"
{
	int __fastcall Function1(int, int*);
	int __fastcall Function2(int, int*);
	

}

int main()
{
	int a_size;
	cin >> a_size;
	int* a = new int[a_size];
	srand(time(NULL));
	for (int i = 0; i < a_size; i++)
	{
		a[i] = rand() % N;
	}


	cout << endl;
	for (int i = 0; i < a_size; i++)
	{
		cout << setw(6) << a[i] << ' ';
	}
	cout << endl;
	int result;
	result = Function1(a_size, a);


	for (int i = 0; i < a_size; i++)
	{
		cout << setw(6) << a[i] << ' ';
	}

	auto result1 = Function2(a_size, a);


	cout << endl << "Count : " << result << endl;
	cout << "Most popular : " << result1 << endl;
	system("pause");
	return 0;
}

/*push ebp
mov ebp, esp
mov		esi, [ebp + 12]
mov     edi, ecx
mov		eax, 0
mov		ecx, [ebp + 8]

loop1:
mov dword ptr[esi + 4 * ecx - 4], 0
loop loop1
mov ecx, edi

loop2 :
mov		eax, dword ptr[edx + 4 * ecx - 4]
inc		dword ptr[esi + 4 * eax]
loop loop2

mov		eax, 0
mov		ecx, [ebp + 8]
loop3:
mov		ebx, dword ptr[esi + 4 * ecx - 4]
test	ebx, ebx
jz		no_instances
inc		eax
no_instances :
loop loop3
pop ebp
ret 4*/