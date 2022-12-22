#include "Doku.hpp"


Doku::Doku(int size)
{
    this->Hucreler = new Hucre[size];
    this->size = size;
    hucreCount = 0;
}

void Doku::addHucre(Hucre hucre)
{
    if(hucreCount < size)
    {
        this->Hucreler[hucreCount] = hucre;
        hucreCount++;
    }

}

void Doku::printDoku()
{
    static int i = 0;
    //cout << "doku: " << i << endl;
    i++;
    for (int i = 0; i < size; i++)
    {
        cout << Hucreler[i].DNA_len<< " ";
    }

    cout << endl;
    
}