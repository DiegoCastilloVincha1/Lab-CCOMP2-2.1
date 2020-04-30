


#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{   
    int a;
    cout << "de cuantos elementos tu arreglo "; cin >> a;
    int arreglo[10], arreglo2[10];
    for (int i = 0; i < a; i++) {
        cout << i + 1 << "digite un numero: "; cin >> arreglo[i];
    }
    for (int j = 0; j < a; j++) {
        arreglo2[j] = arreglo[j] * 2;
        cout << arreglo2[j] << endl;
    }
    
    
    
    /*int factorial=1 ,n = 0;
    int suma = 0;
    cout << "Ingresa un numero: "; cin >> n;
    int a = 1;
    while (a <= n) {
        int factorial = 1;
        for (int i = 1; i <= a; i++) {
            factorial = factorial * i;
        }
        suma = suma + factorial;
        a++;
    }
    cout << suma << endl;*/ /*int a = 0, b = 0;
    do {
        cout << "Ingresa un numero positivo: "; cin >> a;
        cout << "Ingresa un numero positivo: "; cin >> b;
    } while ((a <= 0) or (b <= 0));
    int suma = 1;
    for (int i = 0; i < b; i++) {
        suma = suma * a;
    }
    cout << suma << endl;*/  /*float a = 0, temp = 0, tempm=0, tempM=0;
    float media = 0;
    while (a < 6) {
        cout << "ingresa la temperatura "; cin >> temp;
        if (a == 0) {
            tempm = temp;
        }
        if (temp > tempM) {
            tempM = temp;
        }
        if (temp < tempm) {
            tempm = temp;
        }
        media = media + temp;
        a++;
    }
    media = (media / 6);
    cout << media << endl;
    cout << tempm << endl;
    cout << tempM << endl;*/
    system("pause");
    return 0;
 } 

