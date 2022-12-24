#ifndef ORGANIZMA_HPP
#define ORGANIZMA_HPP

#include <iostream>
#include "Sistem.hpp"

using namespace std;

class Organizma
{
    private:

    Sistem  *head;

    int size;

    public:

    void    addBack(Sistem *node);
    void    insert(Sistem *node, int index);
    void    removeAt(Sistem *node, int index);
    Sistem* FindPrevByPosition(int pos);

    void    yazdir();
    void    mutasyon();

    Organizma();
    //~Hucre();

    //dash mi degilmi fonk.

    

};

#endif