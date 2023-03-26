#include <iostream>
#include "Circuit.h"
#include "Car.h"
#include "Volvo.h"
#include "Bmw.h"
#include "Seat.h"
#include "Fiat.h"
#include "RangeRover.h"



int main() {
    Circuit c;
//
    c.SetLength(100);
//
    c.SetWeather(Weather::Rain);

    c.AddCar(new Volvo());



//    class Figure {
//    public: virtual void Draw() { std::cout << "Figure"; }
//    };
//    class Circle: public Figure {
//    public: void Draw() {  std::cout <<"Circle"; }
//        };
//        class Square: public Figure {
//        public: void Draw() {  std::cout <<"Square"; }
//            };

    c.AddCar(new Bmw());

    c.AddCar(new Seat());

    c.AddCar(new Fiat());

    c.AddCar(new RangeRover());
//
    c.Race();
//`    c.printCircuitData();`
//
    c.ShowFinalRanks(); // it will print the time each car needed to finish the circuit sorted from the fastest car to the   slowest.

    c.ShowWhoDidNotFinish(); // it is possible that some cars don't have enough fuel to finish the circuit

    return 0;
}
