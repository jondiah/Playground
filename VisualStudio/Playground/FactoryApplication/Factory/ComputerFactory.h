#pragma once
#include <string>
#include <memory>

#include "Computer.h"

enum ComputerTypes
{
	LAPTOP = 0,
	DESKTOP
};

class ComputerFactory
{
public:
	static std::unique_ptr<Computer> NewComputer(ComputerTypes type, const std::string &name = "");
};

