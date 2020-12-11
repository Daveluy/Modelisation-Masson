#include <iostream>
#include <math.h>
#include <string>

using namespace std;

void initElementSommet(int x, float nbrElement[]) {
    int iteration;

    for(iteration=0;iteration<=x-1;iteration++){
        cout<<"Combien d'éléments sont présents sur le sommet "<<iteration+1<<" ?"<<endl;
        cin>>nbrElement[iteration];
    }

}