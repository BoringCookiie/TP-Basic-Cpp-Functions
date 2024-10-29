#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string items[] = {"Pomme", "Banane", "Orange"};
    double prices[] = {1.50, 0.75, 1.20};

    cout << left << setw(15) << "Article" << "Prix" << endl; //setw(15) IS USED TO SPECIFY HOW MANY SPACES
    cout << "________________" << endl;

    for (int i = 0; i < 3; ++i) {
        cout << left << setw(15) << items[i] 
             << "$ " << right << fixed << setprecision(2) << prices[i] << endl; //setprecision(2) IS USED TO SPECIFY HOW MANY NUMBERS AFTER COMMA
    }

return 0;
}
