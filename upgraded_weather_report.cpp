#include <iostream>

struct Weather
{
	std::string place;
	unsigned int speed;
	int temprature;
	std::string climate;

	void report()
	{
		if (speed == 0)
		{
			std::cout << "Chutiye speed 0 likh di tune " << place << " me\n";
		}
		else
		{
			std::cout << place << "\n";
			std::cout << "     Wind Speed  : " << speed << "km/h\n";
			std::cout << "     Temperature : " << temprature << "°C\n";
			std::cout << "     Climate     : " << climate << "\n";
			if (speed >= 1 and speed <= 3)
			{
				std::cout << "     The Wind Speed in " << place << " is slow\n\n";
			}
			else if (speed >= 4 and speed <= 6)
			{
				std::cout << "     The Wind Speed in " << place << " is normal\n\n";
			}
			else if (speed == 0)
			{
				std::cout << place << " : Bruh, Speed cannot be Zero u stupid\n\n";
			}
			else
			{
				std::cout << "     The Wind Speed in " << place << " is fast\n\n";
			}
		}
	}
};

int main()
{
	Weather Delhi = {"Delhi", 1, 42, "hot"};
	Delhi.report();

	Weather Mumbai = {"Mumbai", 5, 41, "hot"};
	Mumbai.report();

	Weather Kashmir = {"Kashmir", 8, 19, "cold"};
	Kashmir.report();
	std::cout << "\n";
}
