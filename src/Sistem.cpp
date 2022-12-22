#include "Sistem.hpp"


Sistem::Sistem()
{
    this->organlar = new Organ[100];

    this->next = NULL;
    this->prev = NULL;
}