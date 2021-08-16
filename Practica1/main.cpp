
#include<iostream>
#include<stdlib.h>
using namespace std;

class Automata {
    private: //Atributos
        string quintupla[];

    public: //Metodos
        Automata(string []);//contructor
        bool esSoloUnEstadoEnDelta(string []);
        bool AFD();
        bool AFN();

};

Automata::Automata(string _quintupla[]){
    //asignacion de los valores
   if (esSoloUnEstadoEnDelta("funciondelta"))
   {
       AFD(_quintupla);
   }
   else{
       AFN(_quintupla);
   }
    
}

bool Automata::esSoloUnEstadoEnDelta(string _funcionDelta[]){

}

bool Automata::AFD(){

}

bool Automata::AFN(){

}


int main (){
    string Q[1];
    string alfabeto[1];
    string funcionDelta[1];
    string estadoInicial[1];
    string estadoFinal[1];

    Automata a1 = Automata(Q,alfabeto,funcionDelta,estadoInicial,estadoFinal);
    


    system("pause");
    return 0;
}