

//Arman Majhi
//PRN:24070123022

#include <iostream>
using namespace std;

class shape {
    public:
    void displaytype() {
        cout << "This is a shape" << endl;
    }
};
class Circle : public shape {
    public:
    void displayarea() {
        cout << "Area of circle is 3.14*r*r" << endl;
    }
};
class rectangle : public shape {
    public:
    void displayarea() {
        cout << "Area of rectangle is l*b" << endl;
    }
}; 
int main() {
    Circle c;
    c.displaytype();
    c.displayarea();
    rectangle r;
    r.displaytype();
    r.displayarea();
    return 0;
}
/* OUTPUT:
This is a shape
Area of circle is 3.14*r*r
This is a shape
Area of rectangle is l*b
*/
