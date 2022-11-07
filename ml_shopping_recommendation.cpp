#include "machinelearning.h"

#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main()
{
    // create machine learning object
    MachineLearning ml;

    // set data file
    ml.setDataFile("retail.csv");

    // set target attribute
    ml.setTargetAttribute("customer");

    // set training percentage
    ml.setTrainingPercentage(80);

    // enable personalization
    ml.enablePersonalization();

    // build model
    ml.buildModel();

    // get predictions
    vector<string> predictions = ml.getPredictions();

    // print predictions
    for (int i = 0; i < predictions.size(); i++)
        cout << predictions[i] << endl;

    return 0;
}
