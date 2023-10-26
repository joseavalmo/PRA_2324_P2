#include<vector>
#include <iostream>
using namespace std;



template <typename T>
T BusquedaBinaria (T x, vector<T> v, int ini, int fin){
	if(ini > fin){
		cout << "No se encuentra x en el array" << endl;
		return 0;
	}

	int medio = (ini+fin)/2;
	
	if(v[medio] == x){
		return medio;
	} 
	else if(v[medio] < x){
		return BusquedaBinaria(x, v, medio+1, fin);
	}
	else{
		return BusquedaBinaria(x, v, ini, medio-1);
	}
}

template <typename T>
T BusquedaBinaria_INV(T x, vector<T> v, int ini, int fin){
	if(fin < ini){
		cout << "No se encuentra x en el array" << endl;
		return 0;
	}

	int medio = (ini+fin)/2;

	if(v[medio] == x){
		return medio;
	}
	else if(v[medio] > x){
		return BusquedaBinaria_INV(x, v, medio+1, fin);
	}else{
		return BusquedaBinaria_INV(x, v, ini, medio-1);
	}
}
