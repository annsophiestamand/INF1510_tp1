#include <iostream>
#include <random>
using namespace std;

double NombreAleatoire()
{
    default_random_engine aleatoire(random_device{}());
    uniform_real_distribution<double> distribution(-1, 1);
    return distribution(aleatoire);
}
int main()
{
    cout << "Quelle est le nombre d'itérations souhaitées " << endl;
    int iterations;
    cin >> iterations;
    int compteur = 0;
    for (int i = 0; i < iterations; i++)
    {
        double x = NombreAleatoire();
        double y = NombreAleatoire();
        //cout << "(" << x << "," << y << ")" << endl;
        if ((pow(x, 2) + pow(y, 2)) < 1)
        {
            compteur++;
        }
    }
    double pi = compteur * 4.000000 / iterations;
    cout << "pi est : " << pi << endl;
    double ecart = abs(pi - 3.141593);
    cout << "L'écart relatif entre cette valeur approchée et la valeur précise est : " << ecart << endl;
}