#include "FileLoader.h"


#include <string>
#include <iostream>



int main() {
    //Create Dataset
    std::string fileName = "winequality-red.csv";
    FileLoader df(fileName);
    //If correct constructor runs, all lines will output.
    return 0;
}