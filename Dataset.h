#ifndef DATASET_H
#define DATASET_H

//Potential problems: dynamically creating new variables, keeping track of inputs/creating t[hem from file I/O?

/*
    Notes: 6/11/2024
    Code has effectively been obliterated.
    Won't work until i get either the .csv importer OR the default constructor to match our old housing problem.
    Maybe use vector of vectors for each datapoint?
    Will need to use memory management VERY effectively
*/


class Dataset{

    private:


    //Base implementation will be based off of the previous code. Will need to configure a dataset and how to take input.
    //Gradient step in main?
    int numEntries;
    int dimensions;
    int** trainingVal;
    int* result;

    //Weights are the only thing that need to change
    float* weights;
    float alpha = 0.01;
    //Get a 2-d array

    public:
    //Rule of 3
    Dataset();
    //Try doing a constructor with a new object that takes in an xml file.
    Dataset(string fileName);
    ~Dataset();

    float weightedVals(int x);
    void setWeight(float x, int i);
    float getWeight(int i);
    int getEntries();
    int getDimensions();
    int getPrice(int x);
    int getTV(int i, int j);
    
};



Dataset::Dataset(){
    //Need to update once I take in new datasets
    weights = new float[3]();
}

Dataset::Dataset(string fileName){
    //Try making input here
    //Assume given value is the last value of every datapoint.

    //1. Create istream, begin reading the file.

    //2. Use the first line to determine dimensions

    //3. Iterate through each line, pulling the float values from each line

    //3.5. Make sure to DYNAMICALLY do everything. account for ;/, seperators. 

    //4. Make sure to close the file 


}


Dataset::~Dataset() {
    //Need to update
}

float Dataset::weightedVals(int x) {
    //A function to calculate the weighted inputs. Essentially hTheta(x)
    float retVal = 0;
    if(x < numEntries) {
        for(int k = 0; k < dimensions; k++){
            retVal += (weights[k]*trainingVal[k][x]);
        }
    }
    
    return retVal;
}

void Dataset::setWeight(float x, int i) {
    weights[i] -= x;
}
float Dataset::getWeight(int i) {
    return weights[i];
}

int Dataset::getEntries() {
    return numEntries;
}

int Dataset::getDimensions() {
    return dimensions;
}
int Dataset::getPrice(int x) {
    return price[x];
}
int Dataset::getTV(int i, int j) {
    return trainingVal[j][i];
}





















#endif