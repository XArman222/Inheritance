//Arman Majhi
//PRN:24070123022

#include <iostream>
using namespace std;

class vehicle {
    public:
string brand = "Ford";
void color() {
cout << "The color is red" << endl;
}
};

class car : public vehicle {
public:
string model = "Mustang";
};

int main() {
car myCar;
myCar.color();
cout << myCar.brand + " " + myCar.model << endl;
return 0;
}
/* OUTPUT:
The color is red
Ford Mustang
*/
