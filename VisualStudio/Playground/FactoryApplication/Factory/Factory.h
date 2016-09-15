#pragma once
#include "Computer.h"

class Laptop : public Computer
{
public:
	Laptop(const std::string& name = "") : Computer(name) {};
	void Run() override { mHibernating = false; };
	void Stop() override { mHibernating = true; };
	virtual ~Laptop() {}; // because we have virtual functions, we need virtual destructor
private:
	bool mHibernating; // Whether or not the machine is hibernating
};

class Desktop : public Computer
{
public:
	Desktop(const std::string& name = "") : Computer(name) {};
	void Run() override { mOn = true; };
	void Stop() override { mOn = false; };
	virtual ~Desktop() {};
private:
	bool mOn; // Whether or not the machine has been turned on
};
