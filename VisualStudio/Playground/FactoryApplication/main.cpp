#include "Factory\ComputerFactory.h"
#include <iostream>
#include <iterator>
#include <vector>
#include <memory>
int main()
{
	std::vector<std::unique_ptr<Computer>> computers;

	// Create some computers
	for (int i = 0; i < 10; i++) {
		std::unique_ptr<Computer> laptop = ComputerFactory::NewComputer(ComputerTypes::LAPTOP, "laptop_" + std::to_string(i));
		std::unique_ptr<Computer> desktop = ComputerFactory::NewComputer(ComputerTypes::DESKTOP, "desktop_" + std::to_string(i));

		computers.push_back(std::move(laptop));
		computers.push_back(std::move(desktop));
	}

	std::cout << "Number of computers: " << computers.size() << std::endl;

	for (std::vector<std::unique_ptr<Computer>>::const_iterator it = computers.begin(); it != computers.end(); it++) {
		std::cout << "Computer: " << (*it)->getName() << std::endl;
	}
	
	return 0;
}
