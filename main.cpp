#include <iostream>
#include "punkt.h"
/*
Utwórz klasę (o nazwie punkt) opisującą punkt w układzie kartezjańskim. Klasa ta powinna mieć funkcje składowe, które umożliwiają:
(a) przypisanie współrzędnych punktu,
(b) wypisanie współrzędnych punktu,
(c) obliczenie odległości punktu od innego punktu (tej samej klasy),
(d) przesunięcie punktu o wektor [x,y]
 */
int main() {
    //a)
    punkt point1(1,2);
    punkt point2(2,3);
    //b)
    std::cout<<point1.getFirstPointCord()<<" "<<point1.getSecondPointCord()<<std::endl;
    std::cout<<point2.getFirstPointCord()<<" "<<point2.getSecondPointCord()<<std::endl;
    //c)
    point2.obliczanieOdleglosci(point1,point2);
    std::cout<<point2.getLength()<<std::endl;
    //d)
    point1.setNewPointCord(5,5);
    std::cout<<point1.getFirstPointCord()<<" "<<point1.getSecondPointCord()<<std::endl;

}
