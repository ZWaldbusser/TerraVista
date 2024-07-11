
//Create Functions to implement a hypothetical Logistic Growth Learning model


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


