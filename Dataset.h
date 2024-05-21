#ifndef DATASET_H
#define DATASET_H

//Preliminary implementation of a class to hold datasets.
//Potential problems: dynamically creating new variables, keeping track of inputs/creating t[hem from file I/O?




class Dataset{

    private:


    //Base implementation will be based off of the previous code. Will need to configure a dataset and how to take input.
    //Gradient step in main?
    int numEntries = 5;
    int dimensions = 3;
    int trainingVal[3][5] = {{1, 1, 1, 1, 1}, {2104, 1600, 2400, 1416, 3000}, {3, 3, 3, 2, 4}};
    int price[5] = {400, 330, 369, 232, 540};
    float weights[3] = {0.0, 0.0, 0.0};
    float alpha = 0.01;
    //Get a 2-d array

    public:
    //Rule of 3
    Dataset();
    ~Dataset();

    float weightedVals(int x);
    float setWeights(float x, int i);
    int getEntries();
    int getDimensions();
    int getPrice(int x);
    int getTV(int i, int j);
    
};



Dataset::Dataset(){
    //Need to update once I take in new datasets
}
Dataset::~Dataset() {
    //Need to update
}

float Dataset::weightedVals(int x) {
    //A function to calculate the weighted inputs. Essentially hTheta(x)
    float retVal = 0;
    if(x < numEntries) {
        for(int i = 0; i < dimensions; i++){
            retVal += (weights[i]*trainingVal[i][x]);
        }
    }
    

    return retVal;
}
float setWeights(float x, int i) {
    weights[i] = x;
}

int Dataset::getEntries() {
    return numEntries;
}

int Dataset::getDimensions() {
    return dimensions;
}
int getPrice(int x) {
    return price[x];
}
int getTV(int i, int j) {
    return trainingVal[j][i];
}





















#endif