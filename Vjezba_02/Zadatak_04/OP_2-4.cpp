#include <iostream>
#include <windows.h>

//		Napisati funkciju koja vraća niz int vrijednosti veličine n u kojem je svaki
//		element zbroj svoja dva prethodnika.Prvi i drugi element u nizu su jedinice.
//		U main funkciji ispisati dobiveni niz i osloboditi memoriju.
int* fibonacci(int*, int);
void print(int*, int);
int main()
{
	int n = 50;
	int fibArray[50] = {};

	fibonacci(fibArray, n);
	print(fibArray, n);

}
int* fibonacci(int *array, int n)
{
	array[0] = 1;
	array[1] = 1;
	for (int i = 2; i < n; i++)
		array[i] = array[i - 1] + array[i - 2];
	return array;
}
void print(int* array, int n)
{
	for (int i = 0; i < n; i++)
		std::cout << " -> " << array[i] << std::endl;
}