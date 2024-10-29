#include <iostream>
using namespace std;

int main() {
    string nom;
    int age;
    int height;

    cout << "Enter your name: ";
    cin >> nom;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your height: ";
    cin >> height;
    
    cout << "bonjour " << nom << "! Tu as " << age << " ans , et tu mesures " <<height<< "cm.";
    return 0;
}
