#include "ComputerFactory.h"
#include "Factory.h"

std::unique_ptr<Computer> ComputerFactory::NewComputer(ComputerTypes type, const std::string & name)
{
	if (type == ComputerTypes::LAPTOP) {
		//return new Laptop(name);
		return std::make_unique<Laptop>(name);
	}
	if (type == ComputerTypes::DESKTOP) {
		return std::make_unique<Desktop>(name);
	}
	return NULL;
}
