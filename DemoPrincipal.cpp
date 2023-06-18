#include <iostream>
#include "RoundHole.cpp"
#include "RoundPeg.cpp"
#include "SquarePeg.cpp"
#include "SquarePegAdapter.cpp"
#include "TrianglePegAdapter.cpp"
using namespace std;

int main(){
    RoundHole* hole = new RoundHole(5);
    RoundPeg* rpeg = new RoundPeg(5);
    if(hole->fits(*rpeg)){
        cout<<"La pieza redonda r5 encaja en el orificio redondo r5."<<endl;
    }
    SquarePeg* smallSqPeg = new SquarePeg(2);
    SquarePeg* largeSqPeg = new SquarePeg(20);
    SquarePegAdapter* smallSqPegAdapter = new SquarePegAdapter(*smallSqPeg);
    SquarePegAdapter* largeSqPegAdapter = new SquarePegAdapter(*largeSqPeg);
    if (hole->fits(*smallSqPegAdapter)) {
       cout<<"La pieza cuadrada w2 encaja en el orificio redondo r5."<<endl;
    }
    if (hole->fits(*largeSqPegAdapter)) {
        cout<<"La pieza cuadrada w20 no encaja en el orificio redondo r5."<<endl;
    }

    //EJEMPLO CON LA FORMA DEL TRIANGULO
    TrianglePeg* smallTgPeg = new TrianglePeg(3);
    TrianglePeg* largeTgPeg = new TrianglePeg(30);
    TrianglePegAdapter* smallTgPegAdapter = new TrianglePegAdapter(*smallTgPeg);
    TrianglePegAdapter* largeTgPegAdapter = new TrianglePegAdapter(*largeTgPeg);
    if (hole->fits(*smallTgPegAdapter)) {
       cout<<"La pieza triangular w3 encaja en el orificio redondo r5."<<endl;
    }
    if (hole->fits(*largeTgPegAdapter)) {
        cout<<"La pieza triangular w30 no encaja en el orificio redondo r5."<<endl;
    }
    return 0;
}