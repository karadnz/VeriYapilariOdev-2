#include "Organ.hpp"


Organ::Organ()
{
    this->Agac = new IkiliAramaAgaci;
}

Organ::Organ(IkiliAramaAgaci *agac)
{
    this->Agac = agac;
}