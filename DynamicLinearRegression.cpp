#include "Dataset.h"
#include <iostream>
using namespace std;
    //A future Problem implementation. Using dynamic arrays and given datasets in order to train LR on larger datasets.
    
    //Ideas: File I/O, Input from CSVs, creating data structure to hold the dataset

void gradientStep(Dataset set, float alpha) {
    //New gradients array
    float* gradients = new float[set.getDimensions()]{0.0};
    for(int i = 0; i < set.getEntries(); i++) {
        float error = set.weightedVals(i) - set.getPrice(i);
        for(int j = 0; j < set.getDimensions(); j++) {
            gradients[j] += error * set.getTV(i, j);
        }
    }

    for(int j = 0; j < set.getDimensions(); j++) {
        set.setWeights((alpha * (gradients[j] / 5)), j);
    }
}



int main() {
    Dataset ds;
    float alpha = 0.01;
    cout << ds.getDimensions() << endl;
}

