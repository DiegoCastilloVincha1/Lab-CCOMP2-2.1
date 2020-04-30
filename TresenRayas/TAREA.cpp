

#include <iostream>
#include <stdlib.h>
#include <time.h> 
using namespace std;


char jugador = 'X';

char ganador = 'a';
char tablero[] = { '1' , '2' , '3' , '4' , '5' , '6' , '7' , '8' , '9' };
char tableroi[]= { '1' , '2' , '3' , '4' , '5' , '6' , '7' , '8' , '9' }; 
void Tablero();


void Jugada()
{
    int a;
    cout << "\n\tEscoge la posicion: ";  cin >> a;
    if (a == 1) {
        if (tablero[0] == '1') {
            tablero[0] = jugador;
        }
        else {
            cout << "\tLa posicion esta ocupada " << endl;
            Jugada();
            }
    }

    else if (a == 2) {
        if (tablero[1] == '2') {
            tablero[1] = jugador;
        }
        else {
            cout << "\tLa posicion esta ocupada " << endl;
            Jugada();
        }
    }
    else if (a == 3) {
        if (tablero[2] == '3') {
            tablero[2] = jugador;
        }
        else {
            cout << "\tLa posicion esta ocupada " << endl;
            Jugada();
        }
    }
    else if (a == 4) {
        if (tablero[3] == '4') {
            tablero[3] = jugador;
        }
        else {
            cout << "\tLa posicion esta ocupada " << endl;
            Jugada();
        }
    }
    else if (a == 5) {
        if (tablero[4] == '5') {
            tablero[4] = jugador;
        }
        else {
            cout << "\tLa posicion esta ocupada " << endl;
            Jugada();
        }
    }
    else if (a == 6) {
        if (tablero[5] == '6') {
            tablero[5] = jugador;
        }
        else {
            cout << "\tLa posicion esta ocupada " << endl;
            Jugada();
        }
    }
    else if (a == 7) {
        if (tablero[6] == '7') {
            tablero[6] = jugador;
        }
        else {
            cout << "\tLa posicion esta ocupada " << endl;
            Jugada();
        }
    }
    else if (a == 8) {
        if (tablero[7] == '8') {
            tablero[7] = jugador;
        }
        else {
            cout << "\tLa posicion esta ocupada " << endl;
            Jugada();

        }
    }
    else if (a == 9) {
        if (tablero[8] == '9') {
            tablero[8] = jugador;
        }
        else {
            cout << "\tLa posicion esta ocupada " << endl;
            Jugada();
        }
    }
}
void jugadaCPU() {
    int jugadacpu = (rand() % 9) + 1;
    if (jugadacpu == 1) {
        if (tablero[0] == '1') {
            tablero[0] = jugador;
        }
        else {
            cout << "\tLa posicion esta ocupada " << endl;
            jugadaCPU();
        }
    }

    else if (jugadacpu == 2) {
        if (tablero[1] == '2') {
            tablero[1] = jugador;
        }
        else {
            cout << "\tLa posicion esta ocupada " << endl;
            jugadaCPU();
        }
    }
    else if (jugadacpu == 3) {
        if (tablero[2] == '3') {
            tablero[2] = jugador;
        }
        else {
            cout << "\tLa posicion esta ocupada " << endl;
            jugadaCPU();
        }
    }
    else if (jugadacpu == 4) {
        if (tablero[3] == '4') {
            tablero[3] = jugador;
        }
        else {
            cout << "\tLa posicion esta ocupada " << endl;
            jugadaCPU();
        }
    }
    else if (jugadacpu == 5) {
        if (tablero[4] == '5') {
            tablero[4] = jugador;
        }
        else {
            cout << "\tLa posicion esta ocupada " << endl;
            jugadaCPU();
        }
    }
    else if (jugadacpu == 6) {
        if (tablero[5] == '6') {
            tablero[5] = jugador;
        }
        else {
            cout << "\tLa posicion esta ocupada " << endl;
            jugadaCPU();
        }
    }
    else if (jugadacpu == 7) {
        if (tablero[6] == '7') {
            tablero[6] = jugador;
        }
        else {
            cout << "\tLa posicion esta ocupada " << endl;
            jugadaCPU();
        }
    }
    else if (jugadacpu == 8) {
        if (tablero[7] == '8') {
            tablero[7] = jugador;
        }
        else {
            cout << "\tLa posicion esta ocupada " << endl;
            jugadaCPU();

        }
    }
    else if (jugadacpu == 9) {
        if (tablero[8] == '9') {
            tablero[8] = jugador;
        }
        else {
            cout << "\tLa posicion esta ocupada " << endl;
            jugadaCPU();
        }
    }
}

void victoria() {
    
    if (tablero[0] == 'X' and tablero[1] == 'X' and tablero[2] == 'X') {
        ganador = 'X';
    }
    if (tablero[3] == 'X' and tablero[4] == 'X' and tablero[5] == 'X') {
        ganador = 'X';
    }
    if (tablero[6] == 'X' and tablero[7] == 'X' and tablero[8] == 'X') {
        ganador = 'X';
    }
    if (tablero[0] == 'X' and tablero[3] == 'X' and tablero[6] == 'X') {
        ganador = 'X';
    }
    if (tablero[1] == 'X' and tablero[4] == 'X' and tablero[7] == 'X') {
        ganador = 'X';
    }
    if (tablero[2] == 'X' and tablero[5] == 'X' and tablero[8] == 'X') {
        ganador = 'X';
    }
    if (tablero[0] == 'X' and tablero[4] == 'X' and tablero[8] == 'X') {
        ganador = 'X';
    }
    if (tablero[2] == 'X' and tablero[4] == 'X' and tablero[6] == 'X') {
        ganador = 'X';
    }
    if (tablero[0] == 'O' and tablero[1] == 'O' and tablero[2] == 'O') {
        ganador = 'O';
    }
    if (tablero[3] == 'O' and tablero[4] == 'O' and tablero[5] == 'O') {
        ganador = 'O';
    }
    if (tablero[6] == 'O' and tablero[7] == 'O' and tablero[8] == 'O') {
        ganador = 'O';
    }
    if (tablero[0] == 'O' and tablero[3] == 'O' and tablero[6] == 'O') {
        ganador = 'O';
    }
    if (tablero[1] == 'O' and tablero[4] == 'O' and tablero[7] == 'O') {
        ganador = 'O';
    }
    if (tablero[2] == 'O' and tablero[5] == 'O' and tablero[8] == 'O') {
        ganador = 'O';
    }
    if (tablero[0] == 'O' and tablero[4] == 'O' and tablero[8] == 'O') {
        ganador = 'O';
    }
    if (tablero[2] == 'O' and tablero[4] == 'O' and tablero[6] == 'O') {
        ganador = 'O';
    }
}
void juego2() {

    int l = 0;
    do {
        cout << "Jugador escoja su ficha: "; cin >> jugador;
        if (jugador == 'x') {
            jugador = 'X';
        }
        else if (jugador == 'o') {
            jugador = 'O';
        }
    } while (jugador != 'X' && jugador != 'O');
    

    
    Tablero();
    while (l < 9) {
        l++;
        Tablero();
        Jugada();
        Tablero();
        if (jugador == 'X') {
            jugador = 'O';
        }
        else {
            jugador = 'X';
        }
        jugadaCPU();
        if (jugador == 'X') {
            jugador = 'O';
        }
        else {
            jugador = 'X';
        }
        
        victoria();
        if (ganador == 'X') {
            cout << "X gana " << endl;
            break;
        }
        else if (ganador == 'O') {
            cout << "O gana " << endl;
            break;
        }
        else if (ganador == 'a' and l == 9) {
            cout << "Es un empate " << endl;
            break;
        }
        
        
        
    }
}
void juego() {
    
    int b = 0;
    char se = 's';
    while (se == 'S' || se == 's') {
        do {
            for (int i = 0; i < 9; i++) {
                tablero[i] = tableroi[i];
        }
            
            cout << "Jugador 1 escoja su ficha: "; cin >> jugador;
            if (jugador == 'x') {
                jugador = 'X';
            }
            else if (jugador == 'o') {
                jugador = 'O';
            }
        } while (jugador != 'X' && jugador != 'O');
        system("cls");
        Tablero();
        while (b < 9)
        {

            b++;
            Jugada();

            Tablero();
            victoria();


            if (ganador == 'X') {
                cout << "\tX gana " << endl;
                break;

            }
            else if (ganador == 'O') {
                cout << "\tO gana " << endl;
                break;
            }
            else if (ganador == 'a' and b == 9) {
                cout << "\tEs un empate " << endl;
                break;
            }

            if (jugador == 'X') {
                jugador = 'O';
            }
            else {
                jugador = 'X';
            }

        }
        cout << "quieres jugar de nuevo (S/N) \n"; cin >> se;
    }
    
}

int main()
{
    srand(time(NULL));
    int g = 0,h = 0;
    do 
    {
        
        cout << "Bienvenida al juego de tres en rayas " << endl;
        cout << "\n1. Juego de dos jugadores\n";
        cout << "\n2. Juego contra el CPU\n";
        cout << "\n3. Salir del juego\n";
        for (int i = 0; i < 9; i++) {
            tablero[i] = tableroi[i];
        }
        cout << "Ingresa tu opcion ";  cin >> g;
        
        switch (g) {
            
        case 1: 
            
            juego();
            break;
            
        case 2: cout << "hola" << endl;
            system("cls");
            juego2();
            return 0;
        case 3: cout << "?Seguro que quieres salir? SI o NO \n";
            cout << "\n 1 -SI ";
            cout << "\n 2 -NO ";
            cin >> h;
            if (h == 1) {
                return 0;
            }
            else {
                return main();
            }
            break;
        } 
    }
    while(g!= 3);
    
    
    system("pause");
    return 0;
}
void Tablero() {

    system("cls");
    cout << "\n\tTres en rayas\n";
    cout << "\n\t" << tablero[0] << " |  " << tablero[1] << " |  " << tablero[2] << endl;
    cout << "\t" << "------------" << endl;
    cout << "\t" << tablero[3] << " |  " << tablero[4] << " |  " << tablero[5] << endl;
    cout << "\t" << "------------" << endl;
    cout << "\t" << tablero[6] << " |  " << tablero[7] << " |  " << tablero[8] << endl;
}


