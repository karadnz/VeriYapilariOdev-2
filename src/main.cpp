
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <fstream>

#include "Radix.hpp"



using namespace std;
int main()
{
    
    string line;
    ifstream dataFile("veri.txt");

    while (getline(dataFile, line))
    {
        cout << line << "$" <<endl;

        istringstream ww(line);
        istringstream ss(line);
        int numCount = 0;


        while (ww)
        {
            string word;
            if(ww >> word)
            {
                numCount++;
            }
        }
        

        int sayilar[numCount];
        int i = 0; 

        while (ss)
        {
            string word;
            if(ss >> word)
            {
                sayilar[i] = stoi(word);
                i++;
            }
        }
        

        Radix *radix = new Radix(sayilar,numCount);
	    int *sirali = radix->sort();

        cout<<endl<<"Siralanmadan Onceki Hali:"<<endl;
        for(int i=0;i<numCount;i++)
        {
            cout<<sayilar[i]<<",";
        }

        cout<<endl<<"Siralandiktan Sonraki Hali:"<<endl;
	    for(int i=0;i<numCount;i++)
        {
            cout<<sirali[i]<<" ";
	    }
        cout<<endl<<endl<<endl;

        delete [] sirali;
	    delete radix;

    }
    dataFile.close();


    /*int sayilar[] = {167,32,19,356,478,951,5,98,301,7,490};
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
	delete radix;*/
	return 0;


}

