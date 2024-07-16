
//Create Functions to further understand the algorithm
//Fairly similar to Linear Regression, so I don't intend to code more than I do understand how the model works.


//Logistic Regression definition: A regression model used to classify binary data
//Ex: Using factors to determine whether a tumor is malignent or benign


/*
Sigmoid function: y = 1/(1+e^(-z))
    z = weight*x + intercept
        x - input

It seems like weight*x can (and typically are) vectors, unless the input matrix is one dimensional (one attribute)

Loss function: Loss = (1/n)*summation((Y.i - Yhati)^2)
    Where Yi is the actual Y value of a given input
    and YhatI is the predictied Y value using our current model

Minimum Loss Function: A function that attempts to minimize loss, and get the true values close to expected
    L(y, yH) = -(y*log(yH) + (1-y)*log(1-yH))
    The more even the values, the smaller the loss function

Cost function: -(1/n)*SUMM(y(i)*log(yH(i)) + (1-y(i))*log(1-yH(i)))
*/

//Weights needs to be 2-D
int numInps;
int numDims;

//Calculates YHat
float YHat(float* valInps, float** weights, int coord) {
    float retVal = 0;
    for(int i = 0; i < numDims; i++) {
        retVal += (valInps[i]*weights[coord][i]);
    }
    return retVal;
}

//Calculates Cost Function
float costFunction(float* valInps, float** weights, int* accVals, int coord){
    float retVal = 0;
    
    for(int i = 0; i < numInps; i++){
        float YH = YHat(valInps, weights, i);
        retVal += (accVals[i]*log(YH)) + ((1-accVals[i])*(log(1-YH)));
    }


    return -((1/numInps)*retVal);
}

//Gradient descent function
void gradientDescent() {

    //Calculate gradients

    //Update weights

}