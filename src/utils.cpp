#include "utils.hpp"

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

int getLineCount()
{
    int count = 0;
    string line;
    ifstream dataFile("Veri.txt");

    while (getline(dataFile, line))
    {
        count++;
    }

    dataFile.clear();
    dataFile.seekg(0);

    return (count);
}

int *initArr(string line)
{

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

    return (arr);
}