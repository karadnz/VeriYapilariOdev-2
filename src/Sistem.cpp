/**
* @file Sistem.cpp
* @description cpp file.
* @course 2-A
* @assignment 2
* @date 
* @author Mustafa Karadeniz g211210066
*/
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


Sistem::~Sistem()
{
    for (int i = 0; i < 100; i++)
    {
        delete organlar[i];
    }

    delete organlar;
    
}