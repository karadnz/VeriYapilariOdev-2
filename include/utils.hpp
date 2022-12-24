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

int     getWordCount(string line);
int     getLineCount();
int*    initArr(string line);