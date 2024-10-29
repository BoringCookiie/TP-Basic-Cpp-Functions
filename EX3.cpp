


#include <iostream>
using namespace std;


const float PI = 3.14159;
float surface(float length, float width) {
    return length * width;
}

float surface(float radius) {
    return PI * radius * radius;
}

int main() {
    float length, width, radius;

    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    cout << "The area of the rectangle is: " << surface(length, width) << endl;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "The area of the circle is: " << surface(radius) << endl;

    return 0;
}
