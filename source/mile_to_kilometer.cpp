# define CATCH_CONFIG_RUNNER
# define _USE_MATH_DEFINES
# include <catch.hpp>
# include <cmath>
# include <iostream>

void mile2kilo()
{
	double kilo;
	double miles;
	std::cout << "Please input your miles : \n";
	std::cin >> miles;

	kilo = miles * 1.609344;

	std::cout << miles;
	std::cout << " miles in kilometer is : ";
	std::cout << kilo;
}	

int main()
{
	mile2kilo();
}
