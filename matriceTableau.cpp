#include <iostream>
#include <math.h>
#include <string>

using namespace std;
using std::string;

void initMatrice(int *matrix ,int x, string nameSommet[], float nbrElement[]){
    int abscisse, ordonnee;
    int valMatrix;

    cout<<"---------------------------------------------------------------------------------"<<endl;    
    for (abscisse=0;abscisse<=x-1;abscisse++){
        for (ordonnee=0;ordonnee<=x-1;ordonnee++){
            cout<<"Veuillez saisir la propa ( /100) de la situation "<<nameSommet[abscisse]<<" jusqu'à la situation "<<nameSommet[ordonnee]<<endl;
            cin>>valMatrix;
            valMatrix+=*matrix;
        }
        cout<<"---------------------------------------------------------------------------------"<<endl;
    }
}