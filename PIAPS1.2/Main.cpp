#include "Factory.h"
#include <vector>
#include <iostream>
using namespace std;
int main()
{
	DepartureOfTransport* DT = new DepartureOfTransport();
	BusFactory BF = BusFactory();
	TaxiFactory TF = TaxiFactory();
	BoardAnyCar* Bus = DT ->createBoard(BF);

	if (Bus->isReady())
		cout << "\nBus is ready!" << endl;

	BoardAnyCar* Taxi = DT ->createBoard(TF);

   if (Taxi->isReady())
		cout << "\nTaxi is ready!" << endl;
	
	system("pause");
	
	return 0;
}
