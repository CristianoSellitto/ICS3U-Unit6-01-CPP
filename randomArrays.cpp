// Copyright Cristiano 2022
//
// Created by Cristiano Sellitto
// Created in <September> <2022>
// A program that places ten random numbers
// from 1 to 100 in an array and calculates the average

#include <iostream>
#include <string>
#include <random>

int main() {
    // Places ten random numbers in an array
    // and calculates the average

    int randomNumber;
    int randomArray[10];
    int randomArraySize = sizeof(randomArray) / sizeof(randomArray[0]);
    int sumOfAllNumbers = 0;
    float averageOfAllNumbers;
    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(1, 100);

    for (int counter = 0; counter != randomArraySize; counter++) {
        randomNumber = idist(rgen);
        randomArray[counter] = randomNumber;
        std::cout << "Random number #" << counter + 1 << " is " << randomNumber;
        std::cout << std::endl;
    }
    std::cout << std::endl;
    for (int counter = 0; counter != randomArraySize; counter++) {
        sumOfAllNumbers = sumOfAllNumbers + randomArray[counter];
    }
    averageOfAllNumbers = (
        static_cast<float>(sumOfAllNumbers) /
        static_cast<float>(randomArraySize));
    std::cout << "The average of all the random numbers is ";
    std::cout << averageOfAllNumbers << ".";
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
