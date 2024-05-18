#include <iostream>


//************************************************************************************
//A starting file, aimed at solving the common House Price Machine Learning Problem.
//Goal: Create a modifiable Linear Regression Algorithm

//Problem: Given 2 input vectors (sqft and # bedrooms) and an output Vector (price of home),
//create an algorithm that can predict the price of a house given two new input points.

//Not working, however this is the basis for linear regression. When I move on to Dynamic, I want to find larger datasets to test and verify (5 cases is probably my problem)
//************************************************************************************

//Solution: Given x amount of input cases, determine the weights. 

//Potential Problem: not enough test cases?
int trainingVal[3][5] = {{1, 1, 1, 1, 1}, {2104, 1600, 2400, 1416, 3000}, {3, 3, 3, 2, 4}};
int price[5] = {400, 330, 369, 232, 540};
float alpha = 0.01;

//In this case, the weights array stores the weights of our linear estimation. This is what we will edit
float weights[3] = {0.0, 0.0, 0.0};


//To-Think-About: This function will need to be changed. Might need to dynamically iterate through arrays of unknown size?
float hTheta(int x) {
    return ((weights[0]*trainingVal[0][x]) + (weights[1]*trainingVal[1][x]) + (weights[2]*trainingVal[2][x]));
}

//Repeat the below equation until convergence
void gradientStep() {
    std::cout << "Old weights: " << weights[0] << " " << weights[1] << " " << weights[2] << std::endl;


    //Gradient Step
    float gradients[3] = {0.0, 0.0, 0.0};
    for(int i = 0; i < 5; i++) {
        float error = hTheta(i) - price[i];
        for(int j = 0; j < 3; j++) {
            gradients[j] += error * trainingVal[j][i];
        }
    }
    //Update "weight vector". Takes the average of the errors. 
    for(int j = 0; j < 3; j++) {
        weights[j] -= alpha * (gradients[j] / 5);
    }
    std::cout << "New weights: " << weights[0] << " " << weights[1] << " " << weights[2] << std::endl;
}
int main() {
    gradientStep();
    //Currently not working. Likey has to do with the number of test cases.

    std::cout << weights[0] << " " << weights[1] << " " << weights[2] << std::endl;     //Test Output, view the weights.
    std::cout << weights[0] + (weights[1]*2104) + (weights[2]*3) << std::endl;          //Test output, using the newly trained weights
    std::cout << 89.60 + (0.1392 * 2104) + (-1 * 8.738 * 3)<< std::endl;                                   //Output from training set, to test the accuracy.
}

