
#include "punkt.h"
#include <cmath>
punkt::punkt(float wsp_x, float wsp_y) {
    this->wsp_x=wsp_x;
    this->wsp_y=wsp_y;
}

float punkt::getFirstPointCord() const {
    return wsp_x;
}

float punkt::getSecondPointCord() const {
    return wsp_y;
}

void punkt::obliczanieOdleglosci(punkt first, punkt second) {
    float x1 = first.getFirstPointCord();
    float x2 = second.getFirstPointCord();
    float y1 = first.getSecondPointCord();
    float y2 = second.getSecondPointCord();

    if (x2<0)
        x2=x2*(-1);
    if(y2<0)
        y2=y2*(-1);

    len = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

}

float punkt::getLength() const {
    return len;
}


void punkt::setNewPointCord(float x, float y) {
    wsp_x = wsp_x + x;
    wsp_y = wsp_y + y;

}
