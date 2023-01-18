#include <iostream>
using namespace std;




int main(){
//input de l'utilisateur pour avoir un nombre entier
    int nombre;
    cout << "entrez un nombre entier:";
    cin >> nombre;
//basé sur un code d'internet (va devoir mettre la source)
    int diviseur;
    bool premier = true;
    if(nombre==0 || nombre==1){
        premier = true;
        //0 et 1 ne sont pas premiers (par définition)
        //la variable diviseur sert à storer l'itérateur i
    }else{
        for(int i = 2; i <= nombre/2; i++){
            if(nombre % i == 0){
                premier = false;
                diviseur = i;
                break;
            }
        }
    }
    if(premier){
        cout << "C'est un nombre premier.";
    }else{
        cout << "Ce n'est pas un nombre premier, car il est divisible par " << diviseur <<".";
    }
    return 0;
}