
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <fstream>

using namespace std;
int main()
{
    
    string line;
    ifstream dataFile("veri.txt");

    while (getline(dataFile, line))
    {
        cout << line << "$" <<endl;

        istringstream ss(line);

        while (ss)
        {
            string word;
            if(ss >> word)
            {
                cout<<stoi(word)<<endl;
            }
        }

    }
    dataFile.close();


}

