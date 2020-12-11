#include <iostream>
#include <math.h>
#include <string>

using namespace std;
using std::string;



void initNameSommet(int x, string nameSommet[]){
    int iteration;

    for (iteration=0;iteration<=x-1;iteration++){
        cout<<"Quel est le nom de la situation n° "<<iteration+1<<" ?"<<endl;
        cin>>nameSommet[iteration];
    }
}