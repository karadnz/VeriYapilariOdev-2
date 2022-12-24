
#include "utils.hpp"

using namespace std;

int main()
{
    string line;
    ifstream dataFile("Veri.txt");

    int dokuCount   = getLineCount();
    int organCount  = dokuCount / 20;
    int sistemCount = organCount / 100;

    Organizma *organizma = new Organizma();

    for (int org = 0; org < sistemCount; org++)
    {
        Sistem *sistem = new Sistem();

        for (int s = 0; s < 100; s++)
        {

            Organ *organ = new Organ();

            for (int o = 0; o < 20; o++)
            {

                getline(dataFile, line);
                int *arr = initArr(line);
                int size = getWordCount(line);

                Radix *radix = new Radix(arr, size);
                delete[] arr;

                arr = radix->sort();

                Doku *doku = new Doku(arr, size);
                delete[] arr;

                organ->Tree->add(doku);

                delete radix;
            }

            sistem->addOrgan(organ);
        }

        organizma->addBack(sistem);
    }

    //organizma->yazdir();
    
    cout<<endl<<endl<<endl;

    organizma->mutasyon();

    organizma->yazdir();

    return (0);
}