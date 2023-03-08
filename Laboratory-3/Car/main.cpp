#include <stdio.h>
#include "Parking_spot.h"
#include "Car.h"
#include "Parking.h"
using namespace std;

int main() {
	Car a1, a2, a3, a4, a5;
	a1.SetColor((char*)"white");
	a2.SetColor((char*)"green");
	a3.SetColor((char*)"red");
	a4.SetColor((char*)"green");
	a5.SetColor((char*)"white");
	Parking P;
    P.Init();
    P.AddSpotAndSetColor((char*)"green");
    P.AddSpotAndSetColor((char*)"green");
    P.AddSpotAndSetColor((char*)"white");
    P.AddSpotAndSetColor((char*)"red");
    P.ParkingCar(a1);
    P.ParkingCar(a3);
    P.ParkingCar(a4);
    P.ParkingCar(a2);
	
	return 0;
}