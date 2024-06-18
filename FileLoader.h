#ifndef FILELOADER_H
#define FILELOADER_H

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class FileLoader{
    //Not even sure if i need this object. Might just be able to do a Dataset(".csv")

    private:
    //Blueprinting Idea: An object that loads in xml files for datasets

    /*
    Time to get this to work
    Datasets were pulled from UC Irvines database
    Both sets are 11 dimensions. The dynamic cpp can handle these new dimensions.
    The redwine csv has 
    
    */

    public:
    //Rule of 3 needs to be applied here
    
    FileLoader();
    FileLoader(std::string file);
    //FileLoader& operator=(const FileLoader& toCopy);
        //Don't plan on using the = operator. Might need to implement anyway
    ~FileLoader() { cout << "\nDstructor!";};



};
FileLoader::FileLoader() {

}

FileLoader::FileLoader(std::string file){

    //To actually import the csv here.
    //ACTUALLY EDIT THE DATASET
    ifstream inpFile(file);
    string line;

    //for all lines
    while(getline (inpFile, line)) {
        //Successfully takes in the lines. Now to split for each semicolon
        std::cout << line << std::endl;
        //Separate based on commas or semicolons


        //use an adder function on Dataset.h
    }



    

    inpFile.close();
}














#endif