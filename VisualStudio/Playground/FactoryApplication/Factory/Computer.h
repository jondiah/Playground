#pragma once
#include <string>

class Computer
{
public:
	Computer() {};
	Computer(std::string name = 0) : m_name(name) {};

	virtual void Run() = 0;
	virtual void Stop() = 0;

	std::string getName() { return m_name; };
	void setName(std::string& name) { m_name = name; };

	virtual ~Computer() {}; // without this, you do not call Laptop or Desktop destructor in this example!

private:
	std::string m_name;
};

