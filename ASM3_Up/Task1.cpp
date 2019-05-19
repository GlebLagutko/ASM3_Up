#include<iostream>

using namespace std;

int masA[4][4] = { {1,1,1,1} , {2,2,2,2} , {3,3,3,3} , {4,4,4,4} };
int masB[4][4];
int n = 4;
int i = 1;


void func1()
{
	_asm
	{
		mov ecx, 0; стoлбец

		mark :

		mov eax, n
			mul ecx;      (j*n + i), A[j][i]
			add eax, i
			mov esi, eax
			mov edi, masA[esi * 4]


			mov eax, n
			mul i
			add eax, ecx;   адрес A[i][j] равен A + (i*n + j)*размер элемента

			mov ebx, masA[eax * 4]
			mov masA[esi * 4], ebx

			mov masA[eax * 4], edi


			inc ecx
			cmp ecx, n
			jl mark

	}

	for (int t = 0; t < 4; ++t)
	{
		std::cout << endl;
		for (int i = 0; i < 4; ++i)
		{
			std::cout << masA[t][i];
		}
	}
	std::cout << endl;
}

int main()
{
	func1();
	system("pause");
	return 0;
}