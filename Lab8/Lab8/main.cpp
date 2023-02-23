//
//  main.cpp
//  Lab8
//  This program will take a data file with the student's name and 5 test scores on each line, calculate the average test score and output all scores and the average of each student's test score in a pleasing format
//  Created by Gilbert W. Sanborn Jr on 2/23/23.
//

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;
int main() {
    //declare all variables
    ifstream inFile;
    ofstream outFile;
    string firstName;
    string lastName;
    double score;
    double sum = 0;
    double average;
    double number;
    
    //open input and output file
    inFile.open("/Users/whitsanborn/Documents/Gateway/Programming with Object Oriented C++/Lab8/test.txt");
    
    outFile.open("/Users/whitsanborn/Documents/Gateway/Programming with Object Oriented C++/Lab8/testavg.out");

    //declare all test score variables
    double test1, test2, test3, test4, test5;
    while(!inFile.eof()) {  //loop will continue executing until the end of the file is reached
        
        //read in first name, last name, and the 5 test scores
        inFile >> firstName;
        inFile >> lastName;
        inFile >> test1 >> test2 >> test3 >> test4 >> test5;
        
        //output first name, last name and each test score along with the average to the data file testavg.out
        //format using tab escape character
        outFile << firstName << " " << lastName << endl;
        outFile << "\tTest 1: " << test1 << endl;
        outFile << "\tTest 2: " << test2 << endl;
        outFile << "\tTest 3: " << test3 << endl;
        outFile << "\tTest 4: " << test4 << endl;
        outFile << "\tTest 5: " << test5 << endl;
        
        //calculate average and output it to data file
        average = (test1 + test2 + test3 + test4 + test5) / 5;
        outFile << "\tAverage: " << fixed << setprecision(2) << average << endl;
        outFile << endl;
    }
    return 0;
}
