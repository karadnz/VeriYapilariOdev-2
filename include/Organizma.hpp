/**
* @file Organizma.hpp
* @description hpp file.
* @course 2-A
* @assignment 2
* @date 
* @author Mustafa Karadeniz g211210066
*/
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

    bool    isEmpty();

    void    yazdir();
    void    mutasyon();

    Organizma();
    ~Organizma();
};

#endif