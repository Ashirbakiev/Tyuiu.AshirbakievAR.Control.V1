// Tyuiu.AshirbakievAR.Control.V1.Task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "..//Tyuiu.AshirbakievAR.Control.V1.Lib/Tyuiu.AshirbakievAR.Control.V1.Lib.cpp"
int main()
{
    setlocale(LC_ALL, "RU");
	ISprint0Task8V3* date = new Service;
	float x;
	float y;
	float z;
	std::cout << "¬ведите переменную x\n";
	std::cin >> x;
	std::cout << "¬ведите переменную y\n";
	std::cin >> y;
	std::cout << "¬ведите переменную z\n";
	std::cin >> z;
	std::cout << "«начение арифметического выражени€ 5+(2x-z)/(3+z^2) равно "<< date->Proizved(x,y,z)<< std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
