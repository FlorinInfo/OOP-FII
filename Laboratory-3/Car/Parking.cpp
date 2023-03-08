#include "Car.h"
#include "Parking.h"
#include "Parking_spot.h"
#include <stdio.h>
#include <string.h>

bool Compare2Str(char* str1, char* str2) {
	if (strlen(str1) != strlen(str2)) return false;
	else
	for (int i = 0; i < strlen(str1); i++) {
		if (str1[i] != str2[i]) return false;
	}
	return true;
}

void Parking::Init() {
	size = 0;
	Parking_spot* x = new Parking_spot[size];
}

void Parking::AddSpotAndSetColor(char* color) {
	Parking_spot* place = new Parking_spot[size + 1];
	for (int i = 0; i < size; i++)
        place[i] = x[i];
    place[size].SetColor(color);
	delete[] x;
	x = place;
	size++;
}

void Parking::ParkingCar(Car a) {
	for (int i = 0; i < size; i++) 
		if (Compare2Str(x[i].GetColor(), a.GetColor()) == true) 
			if (x[i].IsBusy() == false) {
				x[i].Busy();
				printf("Car colo: %s park color: %d", a.GetColor(), i);
				i = size;
			}	
}