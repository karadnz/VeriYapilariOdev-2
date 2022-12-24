#include "Sistem.hpp"


Sistem::Sistem()
{
    this->organlar = new Organ *[100];
    this->organCount = 0;

    this->next = NULL;
    this->prev = NULL;
}


void Sistem::addOrgan(Organ *node)
{
    this->organlar[organCount] = node;
    organCount++;
}