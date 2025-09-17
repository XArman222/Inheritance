//Arman Majhi
//PRN:24070123022

#include <iostream>
using namespace std;

class vehicle {
public:
void fuelcapacity() {
cout << "Vehicle fuel capacity is 60L" << endl;
}
void capacity() {
cout << "Vehicle capacity is 5 persons" << endl;
}
};
class car : public vehicle {
public:
void carfeatures() {
cout << "Car has ac" << endl;
}
};
class truck : public vehicle {
public:
void truckfeatures() {
cout << "Truck has large space" << endl;
}
};
int main() {
car c;
truck t;
c.fuelcapacity();
t.capacity();
c.carfeatures();
t.truckfeatures();  
return 0;
}

/* OUTPUT:
Vehicle fuel capacity is 60L
Vehicle capacity is 5 persons
Car has ac
Truck has large space
*/
