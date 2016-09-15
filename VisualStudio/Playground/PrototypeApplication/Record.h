#pragma once
#include <memory>
using namespace std;

/** Record is the base Prototype */
class Record
{
public:
	virtual ~Record() {}
	virtual void print() = 0;
	virtual unique_ptr<Record> clone() = 0;
};

