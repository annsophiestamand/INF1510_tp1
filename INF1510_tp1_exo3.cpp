#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double hauteur_initiale;
    cout << "Quelle-est la hauteur initiale de la balle?";
    cin >> hauteur_initiale;

    int nbr_rebonds;
    cout << "Combien de rebond(s) la balle fait-elle?";
    cin >> nbr_rebonds;

    double coefficient;
    cout << "Quel-est le coefficient de rebond (entre 0 et 1)?";
    cin >> coefficient;

    //valider que les entrées de l'utilisateurs sont plausibles

    //remplir avec le code de la question 2

    
    float vitesse_initiale = pow(2*9.81*hauteur_initiale, 0.5);
    float vitesse, hauteur;
        
    for(int i=0; i<=nbr_rebonds; i++){
        vitesse = vitesse_initiale*coefficient;
        hauteur = pow(vitesse, 2)/(2*9.81);
    }
    cout << "La hauteur finale de la balle est : " << hauteur << ".";
    return 0;
}
