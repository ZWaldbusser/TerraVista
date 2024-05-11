#include <iostream>
//A starting file, aimed at solving the common House Price Machine Learning Problem.
//Goal: Create a modifiable Linear Regression Algorithm

//Problem: Given 2 input vectors (sqft and # bedrooms) and an output Vector (price of home),
//create an algorithm that can predict the price of a house given two new input points.


//Solution: Starting with 5 input cases, create a gradient descent algorithm.
int trainingVal[3][5] = {{1, 1, 1, 1, 1}, {2104, 1600, 2400, 1416, 3000}, {3, 3, 3, 2, 4}};
int price[5] = {400, 330, 369, 232, 540};
float alpha = 0.01;


//To-Do: do the weights need to start with initial guesses?
float weights[3] = {0, 0, 0};
//In this case, the ThetaVec array stores the weights of our linear estimation. This is what we will edit


//Only takes in 1 parameter, will need to be resized to 2
float hTheta(int x) {
    //std::cout << ((weights[0]*trainingVal[0][x]) + (weights[1]*trainingVal[1][x]) + (weights[2]*trainingVal[2][x])) << std::endl;
    return ((weights[0]*trainingVal[0][x]) + (weights[1]*trainingVal[1][x]) + (weights[2]*trainingVal[2][x]));
}

//Repeat the below equation until convergence, try 2d for now
void gradientStep() {

    for(int j = 0; j < 3; j++) { //For every j
        float newWeight = 0;
        for(int i = 0; i < 5; i++) {
            
            //The internal summation equation of the Widrow-Hoff learning rule
            newWeight += ((price[i] - hTheta(i))*trainingVal[j][i]);
            
        }
        newWeight *= alpha;
        weights[j] += newWeight;
        
    }
}
int main() {
    gradientStep(); //Need to find a way to iteratively loop this step.

    //Currently not matching
    std::cout << weights[0] << " " << weights[1] << " " << weights[2] << std::endl;     //Test Output, view the weights.
    std::cout << weights[0] + (weights[1]*2104) + (weights[2]*3) << std::endl;          //Test output, using the newly trained weights
    std::cout << 71.27 + (0.134 * 2104) << std::endl;                                   //Output from training set, to test the accuracy.
}

