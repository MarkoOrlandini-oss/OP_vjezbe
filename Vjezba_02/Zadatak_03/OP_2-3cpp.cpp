#include <iostream>
#include <windows.h>
//#include <time.h>


//		Napisati funkciju koja vraća referencu na neki element niza. 
//		Koristeći povratnu vrijednost funkcije kao lvalue uvećajte i-ti element niza za jedan.
int reference(int*, int*);

int main()
{
	int i = 5;
	int array[20] = { 1,54,5,65,91,2,3,45,15,7,36,47,56,94,15,78,84,25,11,87 };
	for (int i = 0; i < 20; i++)
		std::cout << " -> " << array[i] << std::endl;
	reference(array, &i);
	std::cout.width(10) ; std::cout << std::right <<" --> " << array[i] << std::endl;
}

int reference(int *array, int *i)
{
	/*srand(time(NULL));
	*i = rand() % 20;*/
	return array[++*i];
}
