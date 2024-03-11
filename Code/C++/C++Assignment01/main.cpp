#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include <vector>

using namespace std;

// Pull data from the file
vector<string> getData(string filename) {
//    create variables
    vector<string> data;
    string line;
//    open file
    ifstream fin(filename);
    if (fin.is_open()) {
//        read file line by line and write to data vector
        while (getline(fin, line)) {
            data.push_back(line);
        }
    }
    fin.close(); //closes file
    return data;
}

//convert a vector full of strings to a vector full of doubles
vector<double> vectorConvert(vector<string> data) {
//    create variables
    vector<double> doubleData;
//    convert each string to a double and write to doubleData vector
    for (int i = 1; i < data.size(); i++) {
        doubleData.push_back(stod(data[i]));
    }
    return doubleData;
}

// Average Function
double average(vector<double> data) {
//    create variables
    double sum = 0;
//    add all values in data vector and divide by the size of the vector
    for (int i = 0; i < data.size(); i++) {
        sum += data[i];
//        cout << data[i] << endl;
    }
    return sum / data.size();
}

//root mean square function
double rms(vector<double> data) {
//    create variables
    double sum = 0;
//    add all values in data vector squared and divide by the size of the vector
    for (int i = 0; i < data.size(); i++) {
        sum += pow(data[i], 2);
    }
    return sqrt(sum / data.size());
}

vector<double> calculateBackflowTimes(vector<double> data, vector<double> time) {
//    create variables
    vector<double> backflowTimes;
    for (int i = 0; i < data.size(); i++) {
        if (data[i] < 0) {
            backflowTimes.push_back(time[i]);
        }
    }
    return backflowTimes;
}



int main() {
//  Variables
//  v file
    double vAvg, vRmsVal;
    vector<double> vStr;

//  u file
    double uAvg, uRmsVal;
    vector<double> uStr;

//  w1 file
    double wAvg, wRmsVal;
    vector<double> wStr;

//  time file
    double timeAvg, timeRmsVal;
    vector<double> timeStr;

//  backflow times
    vector<double> backflowTimes;



//  Get data from files
//  v file
    vStr = vectorConvert(getData("v.txt"));
    int vSize = vStr.size();
    double vArr[vSize];
    for (int i = 0; i < vSize; i++) {
        vArr[i] = vStr[i];
    }
    vAvg = average(vStr);
    vRmsVal = rms(vStr);

//  u file
    uStr = vectorConvert(getData("u.txt"));
    int uSize = uStr.size();
    double uArr[uSize];
//    for (int i = 0; i < uSize; i++) {
//        uArr[i] = uStr[i];
//    }
    uAvg = average(uStr);
    uRmsVal = rms(uStr);

//  w1 file
    wStr = vectorConvert(getData("w-1.txt"));
    int wSize = wStr.size();
    double wArr[wSize];
//    for (int i = 0; i < wSize; i++) {
//        wArr[i] = wStr[i];
//    }
    wAvg = average(wStr);
    wRmsVal = rms(wStr);

//  time file
    timeStr = vectorConvert(getData("time.txt"));
    int timeSize = timeStr.size();
    double timeArr[wSize];
//    for (int i = 0; i < timeSize; i++) {
//        timeArr[i] = timeStr[i];
//    }
    timeAvg = average(timeStr);
    timeRmsVal = rms(timeStr);

//  backflow times
    backflowTimes = calculateBackflowTimes(uStr, timeStr);

//  print out data
//  v file
    cout << "v file" << endl;
    cout << "Average: " << vAvg << endl;
    cout << "RMS: " << vRmsVal << endl;
    cout << endl;

//  u file
    cout << "u file" << endl;
    cout << "Average: " << uAvg << endl;
    cout << "RMS: " << uRmsVal << endl;
    cout << endl;

//    w1 file
    cout << "w1 file" << endl;
    cout << "Average: " << wAvg << endl;
    cout << "RMS: " << wRmsVal << endl;
    cout << endl;

//    time file
    cout << "time file" << endl;
    cout << "Average: " << timeAvg << endl;
    cout << "RMS: " << timeRmsVal << endl;
    cout << endl;

//    backflow times
    cout << "backflow times" << endl;
    for (int i = 0; i < backflowTimes.size(); i++) {
        cout << backflowTimes[i] << endl;
    }

//    write backflow times to output.txt file
    ofstream fout("output.txt");
    if (fout.is_open()) {
        fout << "backflow times:" << endl;
        for (int i = 0; i < backflowTimes.size(); i++) {
            fout << backflowTimes[i] << endl;
        }
    }
    fout.close();




    return 0;
}
