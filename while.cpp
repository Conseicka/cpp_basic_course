#include <iostream>
using namespace std;

int main()
{
    do{
        bool terminate = true;
        char respuesta;
        cout << "Deseas terminar?" << endl;
        cin >> respuesta;
        if (respuesta == 'y') 
          {
            cout << "bye bye" << endl;
            break;
          } 
    } while ( terminate );

}