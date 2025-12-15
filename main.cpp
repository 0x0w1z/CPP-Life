#include <iostream>
#include <fstream>
#include <cctype>
#include <iomanip>
#include <string>


using namespace std;

const int nameLength = 40;
const int moneyDigit = 8;
const int numberMaximum = 15;
const int typeSize = 5;
const string sep = " |";
const int totalLen = maxName + maxNumber + typeSize + maxMoney + sep.size() * 4;
const string sepLine = sep + string(totalLen -1, '=') + '|';




