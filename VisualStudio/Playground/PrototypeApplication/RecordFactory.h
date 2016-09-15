#pragma once
#include "Record.h"
#include "MixedRecords.h"
#include <memory>
#include <iostream>
#include <unordered_map>

using namespace std;
/** Opaque record type, avoids exposing concrete implementations */
enum RecordType
{
	CAR,
	BIKE,
	PERSON
};

/** RecordFactory is the client */
class RecordFactory
{
private:
	unordered_map<RecordType, unique_ptr<Record>, hash<int> > m_records;

public:
	RecordFactory()
	{
		m_records[CAR] = make_unique<CarRecord>("Ferrari", 5050);
		m_records[BIKE] = make_unique<BikeRecord>("Yamaha", 2525);
		m_records[PERSON] = make_unique<PersonRecord>("Tom", 25);
	}

	unique_ptr<Record> createRecord(RecordType recordType)
	{
		return m_records[recordType]->clone();
	}
};