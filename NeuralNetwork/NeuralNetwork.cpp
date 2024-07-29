/* 

Neural networks: A network of "neurons", organized into layers.
    Input layer: the layer that takes in input.
    Output Layer: The layer that makes the decision(s) when classifying data
    Hidden Layers: The layers that do the computations.

Neuron: A neuron is a node in this network. It contains inputs from other neurons, their weights, a sum function , and the activation function
    Weights: the "effect" that a neuron has on a particular other neuron. This is a number between -1 and 1.
    Sum: The function that calculates the sum of all weighted inputs.
    Activation: A sigmoid function that determines whether or not the individual node will output a weighted value to all of its connections in the next layer.








*/

//To-do: code functions in c++ that mimic how a neural network functions
    //Research different ways to train neural networks

struct neuron {
    //Make neurons a class
    //Neurons will need a sum function, and a sigmoid activation function

    //Each neuron will need the biases of its predecessor connections, and the connections it has to the next layer
        //Except for inputs and outputs, those are different

};




//My lack of having taken linear algebra shows in trying to plan this out.
//The biggest thing I need to learn is how to represent the network as a matrix, as opposed to a bunch of vectors stored in objects..


int main() {
    //Example problem: Given a vector of 0's or 1's, create a neural network to determine if there are any sequence with 3 or more 1's in a row.
        //Generate example training data
        //10 input's, 3 hidden layers, each with an undecided number of neurons
    
    
    
    //Train the neural network
        //Research more into this but heres my understanding:
            //Assign random values for each potential weight.
            //Iterate through the training data, recording accuracy as we go
            //Make slight but random changes to the neural network, determine whether that increases or decreases our acuracy.
            //Repeat, aiming for our accuracy to go up!

}