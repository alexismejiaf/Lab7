#include <iostream>
#include "Arquero.h"
#include "escuadron.h"
#include "soldado.h"
#include <vector>
using std::cout;
using std::vector;
using std::cin;
using std::endl;


int main(int argc, char const *argv[]) {
  int op=1;
  vector<Soldado*> escuadron;
  while (op != 0) {
    int op2;
    string nombre,ciudad;
    int edad;
    cout << "Ingrese el nombre" << endl;
    cin >> nombre;
    cout << "Ingrese el nombre de la ciudad" << endl;
    cin >> ciudad;
    cout << "Ingrese edad" << endl;
    cin >> edad;
    cout << "Ingrese una opcion\n0.Salir\n1.Arqueras\n2.Corazas Duras\n3.Asesinos Ocultos" << endl;
    cin >> op;
    if (op = 1) {
      int flechas,precision;
      cout << "Ingrese el numero de flechas" << endl;
      cin >> flechas;
      cout << "Ingrese precision" << endl;
      cin >> precision;
      escuadron.push_back(new Arquero(nombre,ciudad,edad,flechas,precision));
    }else if (op = 2) {
      int armadura,lanzas;
      cout << "Ingrese cuanta armadura tiene: " << endl;
      cin >> armadura;
      cout << "ingrese el numero de lanzas: " << endl;
      cin >> lanzas;
      escuadron.push_back(new coraza(nombre,ciudad,edad,armadura,lanzas));
    }else if (op = 3) {
      int asesinatos,desapercibido;
      cout << "Ingrese el numero de asesinatos: " << endl;
      cin >> asesinatos;
      cout << "Ingrese el desapercibido" << endl;
      cin >> desapercibido;
      escuadron.push_back(new asesinos(nombre,ciudad,edad,asesinatos,desapercibido));
    }
  }
  return 0;
}
