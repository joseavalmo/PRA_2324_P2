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

template <typename T>
T QuickSort(vector<T> v, int ini, int fin){
	 if(ini < fin){
		 int pivot = Partition(v, ini, fin);
		 QuickSort(v, ini, pivot-1);
		 QuickSort(v, pivot+1, fin);
	 }
}

template <typename T>
T Partition(vector<T> v, int ini, int fin){
	vector<T> x = v[fin];
	int i = ini;
	for(int j=ini; j < fin-1; j++){
		if(v[j] <= x){
			vector<T> aux = v[i];
			v[i] = v[j];
			v[j] = aux;
			i = i+1;
		}
	}
	vector<T> aux = v[i];
	v[i] = v[fin];
	v[fin] = v[i];

	return i;
}
