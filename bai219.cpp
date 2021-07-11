#include <iostream>

using namespace std;

class Rectangle {
public:
    double length;
    double width;
    void getInformation() {
        cin >> length;
        cin >> width;
    }
    double getArea() {
        return length * width;
    }
    double getPerimeter() {
        return (length + width) * 2;
    }
    void display() {
        cout << "Area: " << getArea();
        cout << endl;
        cout << "Perimeter: " << getPerimeter();
    }
};

int main() {
    Rectangle r1;
    r1.getInformation();
    r1.display();
    return 0;
}