#include <iostream>
using namespace std;
int main(int argc, char** argv){
	cout<< "la cantidad de argumentos es: "<< argc << "\n";
	for (int i= 1 ; i < argc; ++i){
		cout<< argv[i] << "\n";
	}
	return 0;
}
 