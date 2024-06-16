#ifndef FILELOADER_H
#define FILELOADER_H

#include <iostream>
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
    FileLoader(string fileName);
    FileLoader& operator=(const FileLoader& toCopy);
    FileLoader();



};

FileLoader::FileLoader() {

}

FileLoader::FileLoader(string fileName) {
    //To actually import the csv here.
    //Potentially find a library or end up actually
    //ACTUALLY EDIT THE DATASET
    ifstream inpFile;
    inpFile(filename);
    string line;

    //for all lines
    while(getline(inpFile, line)) {
        //Separate based on commas or semicolons


        //use an adder function on Dataset.h
    }



    


}

FileLoader& FileLoader::operator=(const FileLoader& toCopy){

}








#endif