#include <iostream>
#include <vector>
#ifndef NEURON_H
#define NEURON_H
class Neuron {


    private:
        std::vector<int> inps;
        std::vector<float> weights;
        std::vector<int> outs;
        bool isActive = false;
        int layer;
        //Figure out connections
        






    public:
        Neuron();


        //Summation function
        bool isActive();
        void setLayer(); // a hypothetical function to set the layer of a neuron, including inputs and outputs
        



};



bool isActive() {
    //Summs up the inputs*weights and determines whether or not the neuron is active
    float retVal = 0;

    //Assumes inps and weights are bijective
    for(int i = 0; i < inps.size(); i++) {
        retVal += (inps[i] * weights[i]);
    }
    return (retVal > 0) ? true : false;
}


#endif