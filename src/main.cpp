
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <fstream>

#include "Radix.hpp"

#include "Doku.hpp"
#include "Hucre.hpp"
#include "Organizma.hpp"

using namespace std;

int getWordCount(string line)
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
    return size;
}
int main()
{

    string line;
    ifstream dataFile("Balik.txt");

    int dokuCount = 0;
    int organCount = 0;
    int sistemCount = 0;

    while (getline(dataFile, line))
    {
        dokuCount++;
    }

    dataFile.clear();
    dataFile.seekg(0);

    organCount = dokuCount / 20;
    sistemCount = organCount / 100;

    int organIndex = 0;
    int sistemIndex = 0;

    // Organizma *organizma = new Organizma();

    Organ *organlar = new Organ[organCount];

    for (int org = 0; org < sistemCount; org++)
    {
        // Sistem *sistem = new Sistem();

        for (int s = 0; s < 100; s++)
        {
            // Organ *organ = new Organ();

            organlar[organIndex].Tree = new BST;

            for (int o = 0; o < 20; o++)
            {

                getline(dataFile, line);
                int size = getWordCount(line);
                istringstream ss(line);

                int *arr = new int[size];

                int i = 0;

                while (ss)
                {
                    string word;
                    if (ss >> word)
                    {
                        arr[i] = stoi(word);
                        i++;
                    }
                }

                Radix *radix = new Radix(arr, size);
                delete[] arr;
                arr = radix->sort();
                Doku *doku = new Doku(arr, size);
                delete[] arr;

                //doku->printDoku();

                organlar[organIndex].Tree->add(doku);
                

                /*cout << endl
                     << endl
                     <<"------------"
                     <<endl
                     <<endl;*/

                delete radix;
            }
            organlar[organIndex].Tree->postOrder();
            cout<<endl<<endl;
            organIndex++;
        }
    }

    organIndex = 0;

    cout<<endl;
    for (int i = 0; i < sistemCount; i++)
    {
        for (int i = 0; i < 100; i++)
        {
            if (organlar[organIndex].Tree->isBalanced())
            {
                cout<< " ";
            }
            else
            {
                cout<<"#";
            }
            organIndex++;
        }
        cout<<endl;
        
    }

    return (0);
}

/*int main3()
{

    string line;
    ifstream dataFile("veri.txt");

    int dokuSayi = 0;
    while (getline(dataFile, line))
    {
        dokuSayi++;
    }

    dataFile.clear();
    dataFile.seekg(0);

    // Doku *dokular = new Doku[dokuSayi];
    int i = 0;
    while (getline(dataFile, line))
    {
        istringstream ss(line);
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

        Doku doku(size);

        while (ss)
        {
            string word;
            if (ss >> word)
            {
                Hucre *hucre = new Hucre(stoi(word));
                doku.addHucre(*hucre);
            }
        }

        doku.printDoku();
        i++;
    }

    return (0);

    while (getline(dataFile, line))
    {
        cout << line << "$" << endl;

        istringstream ww(line);
        istringstream ss(line);
        int numCount = 0;

        while (ww)
        {
            string word;
            if (ww >> word)
            {
                numCount++;
            }
        }

        int sayilar[numCount];
        int i = 0;

        while (ss)
        {
            string word;
            if (ss >> word)
            {
                sayilar[i] = stoi(word);
                i++;
            }
        }

        Radix *radix = new Radix(sayilar, numCount);
        int *sirali = radix->sort();

        cout << endl
             << "Siralanmadan Onceki Hali:" << endl;
        for (int i = 0; i < numCount; i++)
        {
            cout << sayilar[i] << ",";
        }

        cout << endl
             << "Siralandiktan Sonraki Hali:" << endl;
        for (int i = 0; i < numCount; i++)
        {
            cout << sirali[i] << " ";
        }
        cout << endl
             << endl
             << endl;

        delete[] sirali;
        delete radix;
    }
    dataFile.close();
    return 0;
}

int main2()
{

    string line;
    ifstream dataFile("veri.txt");

    while (getline(dataFile, line))
    {
        cout << line << "$" << endl;

        istringstream ww(line);
        istringstream ss(line);
        int numCount = 0;

        while (ww)
        {
            string word;
            if (ww >> word)
            {
                numCount++;
            }
        }

        int sayilar[numCount];
        int i = 0;

        while (ss)
        {
            string word;
            if (ss >> word)
            {
                sayilar[i] = stoi(word);
                i++;
            }
        }

        Radix *radix = new Radix(sayilar, numCount);
        int *sirali = radix->sort();

        cout << endl
             << "Siralanmadan Onceki Hali:" << endl;
        for (int i = 0; i < numCount; i++)
        {
            cout << sayilar[i] << ",";
        }

        cout << endl
             << "Siralandiktan Sonraki Hali:" << endl;
        for (int i = 0; i < numCount; i++)
        {
            cout << sirali[i] << " ";
        }
        cout << endl
             << endl
             << endl;

        delete[] sirali;
        delete radix;
    }
    dataFile.close();

    int sayilar[] = {167,32,19,356,478,951,5,98,301,7,490};
    Radix *radix = new Radix(sayilar,11);
    int *sirali = radix->sort();
    cout<<"Siralanmadan Onceki Hali:"<<endl;
    for(int i=0;i<11;i++){
        cout<<sayilar[i]<<" ";
    }
    cout<<endl<<endl<<"Siralandiktan Sonraki Hali:"<<endl;
    for(int i=0;i<11;i++){
        cout<<sirali[i]<<" ";
    }

    delete [] sirali;
    delete radix;
    return 0;
}
*/