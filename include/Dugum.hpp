#ifndef Dugum_hpp
#define Dugum_hpp

#include "Doku.hpp"

class Dugum
{
    
public:

    Doku *doku;
    
    int veri;
    int yukseklik;

    Dugum* sol;
    Dugum* sag;
    
    Dugum(int veri); //doku alsin
};

#endif