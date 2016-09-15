#include "Record.h"
#include <string>
#include <memory>
#include <iostream>

using namespace std;

/** CarRecord is a Concrete Prototype */
class CarRecord : public Record
{
private:
	string m_carName;
	int m_ID;

public:
	CarRecord(string carName, int ID) : m_carName(carName), m_ID(ID)
	{
	}

	void print() override
	{
		cout << "Car Record" << endl
			<< "Name  : " << m_carName << endl
			<< "Number: " << m_ID << endl << endl;
	}

	unique_ptr<Record> clone() override
	{
		return make_unique<CarRecord>(*this);
	}
};

/** BikeRecord is the Concrete Prototype */
class BikeRecord : public Record
{
private:
	string m_bikeName;
	int m_ID;

public:
	BikeRecord(string bikeName, int ID) : m_bikeName(bikeName), m_ID(ID)
	{
	}

	void print() override
	{
		cout << "Bike Record" << endl
			<< "Name  : " << m_bikeName << endl
			<< "Number: " << m_ID << endl << endl;
	}

	unique_ptr<Record> clone() override
	{
		return make_unique<BikeRecord>(*this);
	}
};


/** PersonRecord is the Concrete Prototype */
class PersonRecord : public Record
{
private:
	string m_personName;
	int m_age;

public:
	PersonRecord(string personName, int age) : m_personName(personName), m_age(age)
	{
	}

	void print() override
	{
		cout << "Person Record" << endl
			<< "Name : " << m_personName << endl
			<< "Age  : " << m_age << endl << endl;
	}

	unique_ptr<Record> clone() override
	{
		return make_unique<PersonRecord>(*this);
	}
};