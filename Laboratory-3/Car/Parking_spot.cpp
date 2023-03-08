#include "Parking_spot.h"
#include <string.h>

void Parking_spot::SetColor(char* color) {
	for (int i = 0; i <= strlen(color); i++)
		this->culoare[i] = color[i];
}

char* Parking_spot::GetColor() {
	return this->culoare;
}

void Parking_spot::Busy() {
	this->busy = true;
}

bool Parking_spot::IsBusy() {
	return this->busy;
}
