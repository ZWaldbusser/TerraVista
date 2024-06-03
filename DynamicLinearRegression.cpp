#include "Dataset.h"
#include <iostream>
using namespace std;
    //A future Problem implementation. Using dynamic arrays and given datasets in order to train LR on larger datasets.
    
    //Ideas: File I/O, Input from CSVs, creating data structure to hold the dataset



void printWeights(Dataset set){
    //Single run of GradStep matches non-dynamic code
    for(int i = 0; i < set.getDimensions(); i++) {
        cout << set.getWeight(i) << " ";
    }

    cout << endl;
}
void gradientStep(Dataset set, float alpha) {
    //New gradients array
    float* gradients = new float[set.getDimensions()]{0.0};
    for(int i = 0; i < set.getEntries(); i++) {
        //Testing: errors match
        float error = set.weightedVals(i) - set.getPrice(i);
        for(int j = 0; j < set.getDimensions(); j++) {
            //Testing:: Gradient updates match
            gradients[j] += error * set.getTV(i, j);
        }
    }
    
    for(int j = 0; j < set.getDimensions(); j++) {
        set.setWeight(-(alpha * (gradients[j] / 5)), j);
    }

}



int main() {
    Dataset ds;
    float alpha = 0.01;
    gradientStep(ds, alpha);
    //ds gets updates, but those don't look right
    printWeights(ds);
    gradientStep(ds, alpha);
    printWeights(ds);
    gradientStep(ds, alpha);
    printWeights(ds);
    
}

