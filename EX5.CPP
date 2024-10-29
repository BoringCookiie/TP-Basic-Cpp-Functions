#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double num1, num2, result;
    char operation;

    
    cout << "Entrez le premier nombre : ";
    cin >> num1;
    cout << "Entrez le second nombre : ";
    cin >> num2;
    cout << "Entrez l'operation (+, -, *, /) : ";
    cin >> operation;

    switch(operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Erreur : Division par zéro !" << endl;
                return 1;
            }
            break;
        default:
            cout << "Erreur : Operation non valide !" << endl;
            return 1;
    }

    cout << fixed << setprecision(2);
    cout << "Resultat : " << num1 << " " << operation << " " << num2 << " = " << result << endl;

return 0;
}