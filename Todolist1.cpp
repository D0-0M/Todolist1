
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    string value;
   value = "vacio";

    vector <string> Lista ;
    cout << "Lista de quehaceres" << "introduzca una tarea a realizar" << endl;
    cin >> value;
    Lista.push_back(value);
    cout << "introduzca una tarea a realizar" << endl;
    cin >> value;
    Lista.push_back(value);
    cout << "introduzca una tarea a realizar" << endl;
    cin >> value;
    Lista.push_back(value);
    cout << "introduzca una tarea a realizar" << endl;
    cin >> value;
    Lista.push_back(value);
    
    

    cout << "La lista contiene ";
    cout << Lista.size() << " elementos" << endl;

    int Numero_de_elementos = 0;
    while (Numero_de_elementos < Lista.size())
    {
     cout << "Numero de actividad a realizar " << Numero_de_elementos+1;
     cout << "  : " << Lista[Numero_de_elementos] << endl;
    
     ++Numero_de_elementos;
    
    }
    return 0;

    /* for (i = 0; i < 5; i++)
          std::cout << i << “ : “ << [i] << std::endl;
      return 0;
     */
}
