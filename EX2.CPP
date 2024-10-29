
#include <iostream>
using namespace std;

float surface(float longueur, float largeur = 0) {
    if (largeur == 0) {
        largeur = longueur;  
    }
    return longueur * largeur;  
}
int main() {
    float longueur, largeur;
    cout << "Entrez la longueur du rectangle: ";
    cin >> longueur;
    cout << "Entrez la largeur du rectangle, si c'est un carré entrez 0: ";
    cin >> largeur;
    cout << "La surface du rectangle est: " << surface(longueur, largeur) << endl;

    return 0;
}
