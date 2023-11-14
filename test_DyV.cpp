#include <vector>
#include "DyV.h"
#include <iostream>
using namespace std;

int main(){
	vector<int> ia{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	vector<int> id{9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	vector<char> ca{'a', 'b', 'c', 'd', 'e', 'f', 'g'};
	vector<char> cd{'g', 'f', 'e', 'd', 'c', 'b', 'a'};
	vector<float> f1{4.3, 2.7, 9.10, 6.82, 1.33, 5.5, 0.26, 10.13};
	vector<float> f2{4.14, 6.11, 11.13, 6.2, 14.8, 2.14, 7.9, 6.12 };
	vector<char> c1{'i', 'm', 'z','j', 'r', 'e', 'k', 't', 'y', 'c'}; 

	while(1){
	cout << "Elige una opcion:"<<endl;
	cout << "1. Busqueda binaria ascendente de enteros" << endl;
	cout << "2. Busqueda binaria descendente de enteros" << endl;
	cout << "3. Busqueda binaria ascendente de char"<< endl;
	cout << "4. Busqueda binaria descendente de char" << endl;
	cout << "5. Quicksort de float aleatorio" << endl;
	cout << "6. Quicksort de float aleatorio 2" << endl;
	cout << "7. Quicksort de caracter aleatorio" << endl; 
	cout << "8. Salir"<< endl;
	int a;
	cin >> a;
	int x;
	char c;
	switch(a){
		case 1:
			cout << "Numero a buscar:" << endl;
			cin >> x;
			cout << BusquedaBinaria(x, ia, 0, ia.size()) << endl;
			break;
		case 2:
	        	cout << "Numero a buscar:" << endl;
        		cin >> x;
          		cout << BusquedaBinaria_INV(x, id, 0, id.size()) << endl;
            		break;
		case 3:
            		cout << "Letra a buscar: " << endl;
            		cin >> c;
            		cout << BusquedaBinaria(c, ca, 0, ca.size()) << endl;
		    	break;
		case 4:
			cout << "Letra a buscar: " << endl;
			cin >> c;
			cout << BusquedaBinaria_INV(c, cd, 0, cd.size()) << endl;
			break;
		case 5:
                        cout << QuickSort(f1, 0, 7) << endl;
                        break;
		case 6:
                        cout << QuickSort(f2, 0, 7) << endl;
                        break;
		case 7:
                        cout << QuickSort(c1, 0, 9) << endl;
                        break;
		case 8:
			return 0;
		default:
			cout << "Opcion no valida" << endl;
	}
	}
}
