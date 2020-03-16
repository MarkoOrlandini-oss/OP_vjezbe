//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <windows.h>
using namespace std;

//		Napisati funkciju za unos pozitivnih cijelih brojeva. Korisnik unosi brojeve
//		sve dok ne unese nulu.Funkcija inicijalno alocira memoriju za 10 elemenata.
//		Svaki put kad veličina niza dosegne alociranu veličinu, alocira se duplo.
//		U main funkciji ispisati dobiveni niz i osloboditi memoriju.
int* entryArray(int*);
void increase(int*, int*);
void print(int*, int);
void clear(int*);
int main()
{
	int n;
	int* array = NULL;
	array = entryArray(&n);
	std::cout << "Array: ";
	print(array, n);
	std::cout << std::endl;
	clear(array);
}
int* entryArray(int* n)
{
	int size = 10;
	int* array = new int[size];
	int num, i = 0;
	std::cout << "Unesite broj:" << " -      " << "0 za EXIT" << std::endl;
	std::cout << " -> ";
	std::cin >> num;
	while (num != 0)
	{
		array[i] = num;
		i++;
		if (i > size - 1)
		{
			increase(array, &size);
		}
		std::cout << " -> ";
		std::cin >> num;
	}
	*n = i;
	return array;
}
void increase(int* array, int *size)		// ??? koristit struct??
{
	int newSize = *size * 2;
	int* newArray = new int[newSize];
	for (int i = 0; i < *size; i++)
		newArray[i] = array[i];
	clear(array);
	array = newArray;
	clear(newArray);
	*size = newSize;
}
void print(int* array, int n)
{
	std::cout << "(";
	for (int i = 0; i < n; i++)
		std::cout << "  " << array[i];
	std::cout << " )";
}
void clear(int* array)
{
	delete[] array;
}