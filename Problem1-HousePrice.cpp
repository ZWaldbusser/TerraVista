//A starting file, aimed at solving the common House Price Machine Learning Problem.
//Goal: Create a modifiable Linear Regression Algorithm

//Problem: Given 2 input vectors (sqft and # bedrooms) and an output Vector (price of home),
//create an algorithm that can predict the price of a house given two new input points.


//Solution: Starting with 5 input cases, create a gradient descent algorithm.

int sqft[5] = {2104, 1600, 2400, 1416, 3000};
int numBedrooms[5] = {3, 3, 3, 2, 4};
int price[5] = {40, 330, 369, 232, 540};
float alpha = 0.01;


//To-Do: do the weights need to start with initial guesses?
float thetaVec[3] = {0, 0, 0};
//In this case, the ThetaVec array stores the weights of our linear estimation. This is what we will edit

//To-Do: Implement this equation: θj := θj + α*sum(n, i=1, (y^i - h(x^i))xj^i) for every j (weight in the equation)

//Repeat the below equation until convergence
int main() {
    for(int i = 0; i < 3; i++) {
        float newWeight;

        //To-do: read the length of the intput vectors.
        for(int j = 0; j < 5; j++) {
            //To-do: implement summation segment of the equation
        }

        newWeight *= alpha;
        newWeight += thetaVec[i];
        thetaVec[i] = newWeight;
    }




}









