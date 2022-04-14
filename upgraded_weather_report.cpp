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
			std::cout << "     Climate     : " << climate << "\n\n";
		}
	}
};

int main()
{
	Weather Delhi = {"Delhi", 5, 42, "hot"};
	Delhi.report();

	Weather Mumbai = {"Mumbai", 5, 41, "hot"};
	Mumbai.report();

	Weather Kashmir = {"Kashmir", 8, 19, "cold"};
	Kashmir.report();
	std::cout << "\n";

	std::cout << "Special Notes : \n";
	if (Delhi.speed >= 1 and Delhi.speed <= 3)
	{
		std::cout << "The Wind Speed in " << Delhi.place << " is slow\n";
	}
	else if (Delhi.speed >= 4 and Delhi.speed <= 6)
	{
		std::cout << "The Wind Speed in " << Delhi.place << " is normal\n";
	}
	else if (Delhi.speed == 0)
	{
		std::cout << Delhi.place << " : Bruh, Speed cannot be Zero u stupid\n";
	}
	else
	{
		std::cout << "The Wind Speed in " << Delhi.place << " is fast\n";
	}

	if (Mumbai.speed >= 1 and Mumbai.speed <= 3)
	{
		std::cout << "The Wind Speed in " << Mumbai.place << " is slow\n";
	}
	else if (Mumbai.speed >= 4 and Mumbai.speed <= 6)
	{
		std::cout << "The Wind Speed in " << Mumbai.place << " is normal\n";
	}
	else if (Mumbai.speed == 0)
	{
		std::cout << Mumbai.place << " : Bruh, Speed cannot be Zero u stupid\n";
	}
	else
	{
		std::cout << "The Wind Speed in " << Mumbai.place << " is fast\n";
	}
	
	if (Kashmir.speed >= 1 and Kashmir.speed <= 3) {
		std::cout << "The Wind Speed in " << Kashmir.place << " is slow\n";
		} else if (Kashmir.speed >= 4 and Kashmir.speed <= 6) {
			std::cout << "The Wind Speed in " << Kashmir.place << " is normal\n";
		}
		else if (Kashmir.speed == 0) {
			std::cout << "Kashmir : Bruh, Speed cannot be Zero u stupid\n";
			} else {
			std::cout << "The Wind Speed in " << Kashmir.place << " is fast\n";
			}
}
