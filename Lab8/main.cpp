//
//  main.cpp
//  Lab8
//
//  Created by Gilbert W. Sanborn Jr on 2/23/23.
//

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;
int main() {
    ifstream inFile;
    string firstName;
    string lastName;
    double score;
    double sum = 0;
    double average;
    double number;
    
    inFile.open("/Users/whitsanborn/Documents/Gateway/Programming with Object Oriented C++/Lab8/test.txt");
    
    //read in first and last name from data file
    inFile >> firstName;
    inFile >> lastName;
    
  /*  cout << firstName << " " << lastName << " ";
    int i = 0; //loop counter initialized to zero
    while(i < 5) {
        inFile >> number;
        cout << number << endl;
        /*sum += number;
         }
         
         cout << fixed << setprecision(2) << number << " ";
         
        i++;
    */
    int i = 0;
    while(i < 5) {
        inFile >> number;
        cout << number << " ";
        sum += number;
        i++;
    }
    
    average = sum / i;
    cout << "\nAverage: " << average << endl;
    return 0;
    }
