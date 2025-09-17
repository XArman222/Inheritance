
//Multiple inheritance in C++
//Arman Majhi
//PRN:24070123022

#include <iostream>
using namespace std;
class engine {
    public:
    void start() {
        cout << "Engine started" << endl;
    }
};
class wheels {
    public:
    void wheel() {
        cout << "The vehicle has 4 wheels" << endl;
    }
};

class car : public engine, public wheels {
    public:
    string brand = "Ford";
    string model = "Mustang";
    void color() {
        cout << "The car is red" << endl;
    }
};
int main() {
    car myCar;
    myCar.color();
    myCar.wheel();
    myCar.start();
    cout << myCar.brand + " " + myCar.model << endl;
    return 0;   
}
/* OUTPUT:
The car is red
The vehicle has 4 wheels
Engine started
Ford Mustang
*/
