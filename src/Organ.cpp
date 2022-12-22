#include "Organ.hpp"


Organ::Organ()
{
    this->Agac = NULL;
}

Organ::Organ(IkiliAramaAgaci *agac)
{
    this->Agac = agac;
}