#include <iostream>
using namespace std;
int main() 
{
    int n, i, imin, tempimin;
    do {
        cout << "inserisci la dimensione del vettore" << endl;
        cin >> n;
    } while (n <= 0);
    string nomi[n], nazioni[n];
    double tempi[n];
    i = 0;
    while (i <= n - 1) {
        cout << "inserisci nome, nazionalità e tempo del " << i + 1 << " atleta" << endl;
        cin >> nomi[i];
        cin >> nazioni[i];
        cin >> tempi[i];
        i = i + 1;
    }
    i = 0;
    while (i <= n - 1) {
        cout << "il " << i + 1 << "° atleta si chiama " << nomi[i] << " ha nazionalità " << nazioni[i] << " e tempo " << tempi[i] << endl;
        i = i + 1;
    }
    imin = 0;
    tempimin = (int) tempi[0];
    i = 0;
    while (i <= n - 1) {
        if (tempi[i] < tempimin) {
            imin = i;
            tempimin = (int) tempi[i];
        }
        i = i + 1;
    }
    cout << "l'atleta vincitore è " << nomi[imin] << " ha nazionalità " << nazioni[imin] << " e tempo " << tempi[imin] << endl;
}