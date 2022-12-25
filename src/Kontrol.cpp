/**
* @file Kontrol.cpp
* @description cpp file.
* @course 2-A
* @assignment 2
* @date 
* @author Mustafa Karadeniz g211210066
*/
#include "Kontrol.hpp"

Kontrol::Kontrol(Organizma *organizma)
{
    this->organizma = organizma;
}

void Kontrol::mutate()
{
    this->organizma->mutasyon();
    this->organizma->yazdir();
}