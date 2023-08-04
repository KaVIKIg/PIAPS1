#pragma once
#include "Driver.h"
#include "Board.h"
#include <iostream>

class AbstractFactory
{
public:
	virtual Driver* createDriver() = 0;

	virtual BoardAnyCar* createBoard() = 0;

	Passenger* createPassenger() 
	{ 
		return new Passenger(); 
	}
		
	virtual ~AbstractFactory() {}
};



class BusFactory : public AbstractFactory
{
public:
	BusDriver* createDriver() 
	{
		return new BusDriver();
	}
	BoardBus* createBoard() 
	{
		return new BoardBus();
	}
};

class TaxiFactory : public AbstractFactory
{
public:
	TaxiDriver* createDriver() 
	{
		return new TaxiDriver();
	}
	BoardTaxi* createBoard() 
	{
		return new BoardTaxi();
	}

};


class DepartureOfTransport
{
public:
	BoardAnyCar* createBoard(AbstractFactory& factory)
	{
		BoardAnyCar* Board = factory.createBoard();
		Board->BoardDriver(factory.createDriver());
		for (int i = 0; i < Board->maxPassengers; i++)
			Board->BoardPassenger(factory.createPassenger());
		if (Board->isReady())
			cout << "Ready!\n" << endl;
		return Board;
	}
};
