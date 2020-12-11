#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string>
#include "initialisationNameSommet.cpp"
#include "initialisationElementSommet.cpp"
#include "matriceTableau.cpp"

using namespace std;

int main(){

    int nbSituation, y, i;
    float nbElement, valAleatoire;

    valAleatoire= rand() % 100 + 1;
    cout<<valAleatoire<<endl;


    cout<<"Combien de situation (sommet) ? "<<endl;
    cin>>nbSituation;

    string nomsSituations[nbSituation];
    float elementSituations[nbSituation];

    initNameSommet(nbSituation, nomsSituations);
    initElementSommet(nbSituation, elementSituations);

    int matrice[nbSituation][nbSituation];


/*  for (i=0;i<=nbElement;i++) {
        cout<<nomsSituations[i]<<" : "<<elementSituations[i]<<endl;
    }
*/
    initMatrice(&matrice[0][0], nbSituation, nomsSituations, elementSituations);
    
    for (i=0;i<=nbSituation;i++)
    {
        for (y = 0; y <= nbSituation; y++)
        {
            cout<<nomsSituations[i]<<" et "<<nomsSituations[y]<<" : "<<matrice[i][y]<<endl;
        }
        
    }


    return 0;
}