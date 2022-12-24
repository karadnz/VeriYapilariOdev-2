/**
* @file utils.hpp
* @description hpp file.
* @course 2-A
* @assignment 2
* @date 
* @author Mustafa Karadeniz g211210066
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <fstream>

#include "Radix.hpp"
#include "Doku.hpp"
#include "Hucre.hpp"
#include "Organizma.hpp"
#include "Kontrol.hpp"

using namespace std;

int     getWordCount(string line);
int     getLineCount();
int*    initArr(string line);