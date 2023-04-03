#include <stdio.h>
#include <iostream>

int main()
{
	int Operation;

	std::cout << "Please chooste your operation: \n"
		<< "(1)Plus (2)Minus (3)Mahl (4)Geteilt \n";
	

	
    std::cin >> Operation;
		if (Operation == 1)
		{
			std::cout << "You have choosen Plus " << "\n"
				      << "choose 2 numbers you want to add: ";

			double nummer1;
			double nummer2;

			std::cin >> nummer1 >> nummer2;
		
			double ergebniss_plus = nummer1 + nummer2;

			std::cout << "You number is:" << "\n"
				      << ergebniss_plus;
		}

		else if (Operation == 2)
		{
			std::cout << "You have choosen Minus " << "\n"
				<< "choose 2 numbers you want to substract: ";

			double nummer1;
			double nummer2;

			std::cin >> nummer1 >> nummer2;

			double ergebniss_plus = nummer1 - nummer2;

			std::cout << "You number is:" << "\n"
				<< ergebniss_plus;
		}

		else if (Operation == 3)
		{
			std::cout << "You have choosen Mahl " << "\n"
				<< "choose 2 numbers you want to Multiply: ";

			double nummer1;
			double nummer2;

			std::cin >> nummer1 >> nummer2;

			double ergebniss_plus = nummer1 * nummer2;

			std::cout << "You number is:" << "\n"
				<< ergebniss_plus;
		}

		
		else if (Operation == 4)
		{
			std::cout << "You have choosen Teilen " << "\n"
				<< "choose 2 numbers you want to devide: ";

			double nummer1;
			double nummer2;

			std::cin >> nummer1 >> nummer2;

			double ergebniss_plus = nummer1 / nummer2;

			std::cout << "You number is:" << "\n"
				<< ergebniss_plus;
		}

		else
		{
			std::cout<< "Invailed input 404 please try again, and choose one of the operations!" << "\n" << "\n";
		}

		return 0;
}

