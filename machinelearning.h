#ifndef MACHINELEARNING_H
#define MACHINELEARNING_H

#include <string>
#include <vector>
#include <map>

class MachineLearning
{
public:
    MachineLearning();
    ~MachineLearning();

    void setDataFile(const std::string& filename);
    void setTargetAttribute(const std::string& target);
    void setTrainingPercentage(int percent);
    void enablePersonalization();
    void enableForecasting();
    void buildModel();
    std::vector<std::string> getPredictions();

private:
    std::string dataFile;
    std::string targetAttribute;
    int trainingPercentage;
    bool personalizationEnabled;
    bool forecastingEnabled;
    std::map<std::string, std::vector<std::string> > data;
    std::map<std::string, std::vector<std::string> > trainingData;
    std::map<std::string, std::vector<std::string> > testData;
    std::map<std::string, std::vector<std::string> > model;
};

#endif // MACHINELEARNING_H
