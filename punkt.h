#ifndef ZADANIE_PUNKT_H
#define ZADANIE_PUNKT_H


class punkt {
    float wsp_x;
    float wsp_y;
    float temp_x;
    float temp_y;
    float len;
    public:

        punkt(float wsp_x, float wsp_y);
        float getFirstPointCord() const;
        float getSecondPointCord() const;
        void obliczanieOdleglosci(punkt first, punkt second);
        float getLength() const;
        void setNewPointCord(float x, float y);

};


#endif //ZADANIE_PUNKT_H
