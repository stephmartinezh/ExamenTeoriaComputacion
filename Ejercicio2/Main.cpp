#include <iostream>
#include <fstream>
#include <vector>
#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
using namespace std;

void tabla();
void juego();
void validacion(int, int);
void eleccion(int);


int main(){
    tabla();
    juego();
}

void tabla(){
    cout << "/*/*/*/*/ TABLA DE VERDAD /*/*/*/*/" << endl;
    FILE *arch = fopen("tabladeVerdad.txt", "r");
    int num;
    while((num = fgetc(arch)) != EOF){  
        putchar(num);
    }
    cout <<"\n"<<endl;
    cout<<"---¡Bienvenido a piedra, papel, tijera, spock, lagartija!---\n";
}

int menu(){
    int opcion;
    cout<< "-------------------------------------- \n";
        cout<< "Jugador 1, elija su jugada: " << endl;
        cout<< "\t1.- Piedra" << endl;
        cout<< "\t2.- Papel" << endl;
        cout<< "\t3.- Tijera" << endl;
        cout<< "\t4.- Spock " << endl;
        cout<< "\t5.- Lagartija" << endl;
        cout<< "-------------------------------------- \n";
        cin>> opcion;
    return opcion;
}

void eleccion(int jugador){
    switch (jugador){
    case 1:
        cout<< "Jugador" << jugador<< " ha elegido: " << RED << "piedra " <<endl<< NC << endl;
        break;
    case 2:
        cout<< "Jugador" << jugador<< " ha elegido: "<< YEL << "papel " <<endl<< NC <<endl;
        break;
    case 3:
        cout << "Jugador" << jugador<< " ha elegido: " << MAG << "tijera " << endl<< NC <<endl;
        break;
    case 4:
        cout<< "Jugador" << jugador<< " ha elegido: " << BLU << "spock " << endl<< NC <<endl;
        break;
    case 5:
        cout<< "Jugador" << jugador<< " ha elegido: " << GRN << "lagartija " << endl<< NC <<endl;
        break;
    }
}

void juego(){
    bool condicion = true;
    int jugador1, jugador2;
    jugador1 = menu();
    while (condicion){        
        if (jugador1 < 1 || jugador2 > 5){
            condicion = true;
            cout<< "Jugador 1 ha ingresado un valor incorrecto, ingrese opcion valida: " << endl;
        }else{
            condicion = false;
        }
    }
    condicion = true;
    int primero = 1, segundo = 2;
    eleccion(primero);
    while (condicion){
        jugador2 = menu();
        if (jugador2 < 1 || jugador2 > 5){
            condicion = true;
            cout << "Jugador 1 ha ingresado un valor incorrecto, ingrese opcion valida" << endl;
        }else{
            condicion = false;
        }
    }
    eleccion(segundo);
    validacion(jugador1, jugador2);
}

void validacion(int jugador1, int jugador2){
    vector<int> piedra = {0, 0, 1, 0, 1};
    vector<int> papel = {1, 0, 0, 1, 0};
    vector<int> tijera = {0, 1, 0, 0, 1};
    vector<int> spock = {1, 0, 1, 0, 0};
    vector<int> lagartija = {0, 1, 0, 1, 0};

    if (jugador1 == 1){
        if (piedra[jugador2 - 1] == 1){
            cout << "¡Ha ganado el " << RED << " jugador 1!" << endl<< NC <<endl;
        }else{
            cout << "¡Ha ganado el jugador 2!" << endl;
        }
    }
    if (jugador1 == 2){
        if (papel[jugador2 - 1] == 1){
            cout<< "¡Ha ganado el " << YEL << " jugador 1!" << endl<< NC <<endl;
        }else{
            cout<< "¡Ha ganado el jugador 2!" << endl;
        }
    }
    if (jugador1 == 3){
        if (tijera[jugador2 - 1] == 1){
            cout<< "¡Ha ganado el " << MAG << " jugador 1!" << endl<< NC <<endl;
        }else{
            cout<< "¡Ha ganado el jugador 2!" << endl;
        }
    }if (jugador1 == 4){
        if (spock[jugador2 - 1] == 1){
            cout << "¡Ha ganado el " << BLU << " jugador 1!" << endl<< NC <<endl;
        }else{
            cout << "¡Ha ganado el jugador 2!" << endl;
        }
    }
    if (jugador1 == 5){
        if (lagartija[jugador2 - 1] == 1){
            cout<< "Gana el " << GRN << " jugador 1!" << endl<< NC <<endl;
        }else{
            cout<< "¡El ganador es el jugador 2!" << endl;
        }
    }
}
