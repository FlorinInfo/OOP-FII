#pragma once
#include "Parking_spot.h"
#include "Car.h"
class Parking
{
	Parking_spot* x;
	int size;
public:
	void Init();
	void AddSpotAndSetColor(char* color);
	void ParkingCar(Car a);
};

