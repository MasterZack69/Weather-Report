#include <iostream>

struct Weather
{
	std::string place;
	unsigned int speed;
	int temprature;
	std::string climate;

	void report()
	{
		std::cout << place << "\n";
		std::cout << "     Wind Speed  : " << speed << "km/h\n";
		std::cout << "     Temperature : " << temprature << "°C\n";
		std::cout << "     Climate     : " << climate << "\n\n";
	}
};

int main()
{
	Weather Delhi = {"Delhi", 4, 42, "hot"};
	Delhi.report();

	Weather Mumbai = {"Mumbai", 5, 41, "hot"};
	Mumbai.report();

	Weather Kashmir = {"Kashmir", 6, 19, "cold"};
	Kashmir.report();
}