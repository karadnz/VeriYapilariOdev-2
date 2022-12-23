#include "Doku.hpp"

Doku::Doku(int size)
{
    this->Hucreler = new Hucre *[size];
    this->size = size;
    hucreCount = 0;
}

Doku::Doku(string line)
{
    this->size = getWordCount(line);
    this->Hucreler = new Hucre *[size];
    hucreCount = 0;

    istringstream ss(line);

    while (ss)
    {
        string word;
        if (ss >> word)
        {
            Hucre *hucre = new Hucre(stoi(word));
            this->addHucre(hucre);
        }
    }
}

Doku::Doku(int  *arr, int size)
{
    this->size = size;
    this->Hucreler = new Hucre *[size];
    hucreCount = 0;

    for (int i = 0; i < size; i++)
    {
        Hucre *hucre = new Hucre(arr[i]);
        this->Hucreler[i] = hucre;
    }
    
}

int Doku::getWordCount(string line)
{
    istringstream ww(line);
    int size = 0;

    while (ww)
    {
        string word;
        if (ww >> word)
        {
            size++;
        }
    }

    return (size);
}

void Doku::addHucre(Hucre *hucre)
{
    if (hucreCount < size)
    {
        this->Hucreler[hucreCount] = hucre;
        hucreCount++;
    }
}

void Doku::printDoku()
{
    static int i = 0;
    // cout << "doku: " << i << endl;
    i++;
    for (int i = 0; i < size; i++)
    {
        cout << Hucreler[i]->DNA_len << " ";
    }

    cout << endl;
}


int Doku::getMiddle()
{
    return (Hucreler[(size - 1) / 2]->DNA_len);
}