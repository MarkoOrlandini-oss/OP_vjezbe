#include <iostream>
#include <iomanip>

int main()
{
	/*int a, b, s;
	std::cout << "Unesi dva broja" << std::endl;
	std::cin >> a >> b;
	s = a + b;
	std::cout << "suma je " << s << std::endl;*/

	bool flag;
	std::cout << "unesi " << true << " - " << false << std::endl;
	std::cin >> flag;
	std::cout << std::boolalpha << flag << " -> " << std::noboolalpha << flag << std::endl;
	//std::cout << std::noboolalpha << flag << std::endl;

	int a = 255;
	std::cout << "hex - " << std::uppercase << std::hex << std::showbase << a << std::endl;
	std::cout << "dec - " << std::setbase(10) << std::showpos << a << std::endl;
	std::cout << "oct - " << std::setbase(8) << std::setw(10) << std::right << a << std::endl;

	double pi = 3.141592;
	std::cout << "pi = " << std::scientific << std::uppercase;
	std::cout << std::noshowpos << pi << std::endl;
	std::cout << "pi = " << std::fixed << std::uppercase;
	std::cout << std::setprecision(7) << std::setw(9) << std::setfill('x');
	std::cout << std::noshowpoint << pi << std::endl;

}