#pragma once
#include <vector>
#include "Driver.h"
using namespace std;

class BoardAnyCar
{
protected:
	Driver* driver = nullptr;
	vector<Passenger*> passengers;

public:
	
	int maxPassengers = 0;
	
	
	~BoardAnyCar()
	{
		if (driver)
			delete driver;
		for (Passenger* p : passengers)
			delete p;
	}

	bool isReady()
	{
		if (driver == nullptr)
			return false;
		if (passengers.size() < 1)
			return false;
		return true;
	}

	void BoardPassenger(Passenger* p)
	{
		if (passengers.size() == maxPassengers)
			cout << "There are no empty seats!";
		else
			passengers.push_back(p);
	}

	void BoardDriver(Driver* d)
	{
		if (d)
			driver = d;
		else
			cout << "The driver is not in the car!";
	}
};

class BoardTaxi : public BoardAnyCar
{
public:
	BoardTaxi()
	{
		maxPassengers = 3;
		cout << "\nBoardTaxi:\n";
	}
	virtual ~BoardTaxi() {};
};

class BoardBus : public BoardAnyCar
{
public:
	BoardBus()
	{
	  maxPassengers = 29;
	  cout << "BoardBus:\n";
	}
	virtual ~BoardBus() {};
};


