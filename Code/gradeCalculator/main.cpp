/*
The file above shows the grades of students for final exam in a class. There are 30 students in the class. Write a C++ program that:

-  reads the grades of all of the students.

- write two functions out of main() for these calculation:

    1- calculate the percentage of the students who failed this course (note: <40 is a failing grade)

    2- calculates the average grade of the class.

- Ask the user which one of the above calculations she/he want to be done and using an if statement calculate all user asked for

- generates a file (format of the file: .txt or .dat) and write these information in that file:

    1- The number of students in class

    2- All that user asked to be calculated
 */

#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <array>

using namespace std;

int main() {
    int gradeNumber;
    ifstream file("grades.txt");
    int fileLength = 31;
    double grades[fileLength];
    int i=1;
    if(file.is_open()){
        while(i<fileLength){
            file >> grades[i];
            i++;
        }

        file.close();
    }
    int choice;
    cout << "Which one of the following calculations do you want to be done?" << endl;
    cout << "1- calculate the percentage of the students who failed this course (note: <40 is a failing grade)" << endl;
    cout << "2- calculates the average grade of the class." << endl;
    cin >> choice;

    if(choice == 1) {
        double failNumber = 0;
        for (int i = 1; i < fileLength; i++) {
            if (grades[i] < 40) {
                failNumber++;
            }
        }
        cout << "The percentage of the students who failed this course is: " << (failNumber * 100) / (fileLength - 1)
             << "%" << endl;
    }else if(choice == 2) {
        double sum = 0;
        for (int i = 1; i < fileLength; i++) {
            sum += grades[i];
        }
        cout << "The average grade of the class is: " << sum / (fileLength - 1) << endl;
    }else{
        cout << "Invalid choice!" << endl;
    }

    ofstream file2("output.txt");
    if(file2.is_open()) {
        file2 << "The number of students in class: " << fileLength - 1 << endl;
        if (choice == 1) {
            double failNumber = 0;
            for (int i = 1; i < fileLength; i++) {
                if (grades[i] < 40) {
                    failNumber++;
                }
            }
            file2 << "The percentage of the students who failed this course is: "
                  << (failNumber * 100) / (fileLength - 1) << "%" << endl;
        } else if (choice == 2) {
            double sum = 0;
            for (int i = 1; i < fileLength; i++) {
                sum += grades[i];
            }
            file2 << "The average grade of the class is: " << sum / (fileLength - 1) << endl;
        }
        file2.close();
    }else{
        cout << "Unable to open file!" << endl;
    }

}
