#ifndef DATASET_H
#define DATASET_H

//Preliminary implementation of a class to hold datasets.
//Potential problems: dynamically creating new variables, keeping track of inputs/creating t[hem from file I/O?




class Dataset{

    private:

    int numEntries;
    //Get a 2-d array

    public:
    //Rule of 3
    Dataset();
    ~Dataset();


    int getEntries();




};



Dataset::Dataset() : numEntries(0) {
    //Need to update
}
Dataset::~Dataset() {
    //Need to update
}


int Dataset::getEntries() {
    return numEntries;
}





















#endif