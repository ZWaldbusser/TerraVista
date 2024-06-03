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

    //Weights are the only thing that need to change
    float* weights;
    float alpha = 0.01;
    //Get a 2-d array

    public:
    //Rule of 3
    Dataset();
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
    weights[i] += x;
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