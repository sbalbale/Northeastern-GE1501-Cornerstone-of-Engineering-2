#include <iostream>
#include<fstream>
#include <cmath>

/* This program reads data into an array from a file,

/* then corrects the data and writes corrected data to a new array.

/* Any negative value is replaced with a zero and

/* any value greater than 300 is replaced with 300

/* Then the new array is printed,

/* Count how many corrections were made    */

//use standard namespace
using namespace std;
//Declare variables, arrays input file and counters
int i = 0,counter = 0, correctionCounter = 0;
double dataArr[20],corrData[20];

int main() {
//Loop to read data into array until end of file
    double dataLine=0.0;
//****Reading T1
    i=0;
//****open file
    ifstream myfile;
    myfile.open("data_radiation.txt");
    while (myfile >> dataLine){
        counter++;
//******read data from file and write to dataArr array
        dataArr[i] = dataLine;
//******print out data
//        cout <<dataArr[i]<<endl;
        i=i+1;
    }

//****close file
    myfile.close();//closing file

//Loop to put data into new array, replacing bad data
    for( i=0; i<counter; i++){
//        debug prints
//        cout << "Data: " << dataArr[i] << " ";
//****if the data is less than 0, replace with 0
        if(dataArr[i]<0){
            corrData[i]=0;
            correctionCounter++;
        }
//****if the data is greater than 300, replace with 300
        else if(dataArr[i]>300){
            corrData[i]=300;
            correctionCounter++;
        }
//****if the data is between 0 and 300, keep the same
        else{
            corrData[i]=dataArr[i];
        }
//        debug prints
//        cout << "Corrected Data: " << corrData[i] << endl;
    }

//Output the number of fixed values and the new array (loop)
//Loop to print out corrected data and count how many corrections were made
    cout<<"The number of signal values that were corrected is "<<correctionCounter<<endl;
    cout<<"The new array is: "<<endl;
    for( i=0; i<counter; i++){
        cout <<corrData[i]<<endl;
    }


    return 0;
}
