#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

//	Napisati funkciju koja računa najveći i najmanji broj u nizu od n prirodnih
//	brojeva.Funkcija vraća tražene brojeve pomoću referenci.
void Fill_Array(int*,int);
void Find_MaxMin(int*,int&, int&,int);
int main()
{
	srand(time(NULL));
	int array[10];
	int min = 0, max = 0;
	int n = 10;

	Fill_Array(array, n);
	for (int i =0;i<n;i++)				//	ISPIS-samo za provjeru
	{
		std::cout << " - " << array[i] << std::endl;
	}
	Find_MaxMin(array, max, min, n);
	std::cout << "Max - " << max << std::endl << "Min - " << min << std::endl;
}
void Find_MaxMin(int *array, int &max, int &min, int n)
{
	min = array[1];
	for (int i = 0; i < n; i++)
	{
		if (array[i] > max)
			max = array[i];
		else if (array[i] < min)
			min = array[i];
	}
}
void Fill_Array(int *array, int n)
{
	for (int i = 0; i < n; i++)
		array[i] = std::rand() % 100;
}