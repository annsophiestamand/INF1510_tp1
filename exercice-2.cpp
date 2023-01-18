#include <iostream>
using namespace std;
bool estPositif(double a) //Fonction qui vérifie que le nombre est positif
{
    if (a > 0)
    {
        return true;
    }
}

bool validerTaux(double a) // Fonction qui vérifie que le taux est compris entre 0 et 100
{
    if (a >= 0 && a <= 100)
    {
        return true;
    }
}
int main()
{
    while (true)
    {
        double SommePretee, MontantRembourse, TauxInteretAnnuel;
        cout << "Entrez la somme d’argent qui a été prêtée" << endl;
        cin >> SommePretee;
        cout << "Entrez le montant remboursé chaque mois" << endl;
        cin >> MontantRembourse;
        cout << "Entrez le taux d’intérêt annuel" << endl;
        cin >> TauxInteretAnnuel;
        if (estPositif(SommePretee) && estPositif(MontantRembourse) && validerTaux(TauxInteretAnnuel))
        {
            double SommeInterets = SommePretee * TauxInteretAnnuel / 100;
            double MoisNecessaires = (SommePretee + SommeInterets) / MontantRembourse;
            cout << "Le nombre de mois nécessaires pour rembourser la dette est de " << MoisNecessaires << " mois." << endl
                 << "La somme des intérêts perçus par le prêteur est de " << SommeInterets;
            break;
        }
        else
        {
            cout << "Entrez des montants positifs et un taux compris entre 0 et 100" << endl;
        }
    }
}