/*
 *int gradeNumber;
    ifstream file("grades.txt");
    if(file.is_open()){
        file >> gradeNumber;
        int grades[gradeNumber];
        for(int i = 0; i < gradeNumber; i++){
            file >> grades[i];
        }
        file.close();
        int choice;
        cout << "Which one of the following calculations do you want to be done?" << endl;
        cout << "1- calculate the percentage of the students who failed this course (note: <40 is a failing grade)" << endl;
        cout << "2- calculates the average grade of the class." << endl;
        cin >> choice;
        if(choice == 1){
            int failNumber = 0;
            for(int i = 0; i < gradeNumber; i++){
                if(grades[i] < 40){
                    failNumber++;
                }
            }
            cout << "The percentage of the students who failed this course is: " << (failNumber * 100) / gradeNumber << "%" << endl;
        }else if(choice == 2){
            int sum = 0;
            for(int i = 0; i < gradeNumber; i++){
                sum += grades[i];
            }
            cout << "The average grade of the class is: " << sum / gradeNumber << endl;
        }else{
            cout << "Invalid choice!" << endl;
        }
        ofstream file("output.txt");
        if(file.is_open()){
            file << "The number of students in class: " << gradeNumber << endl;
            if(choice == 1){
                int failNumber = 0;
                for(int i = 0; i < gradeNumber; i++){
                    if(grades[i] < 40){
                        failNumber++;
                    }
                }
                file << "The percentage of the students who failed this course is: " << (failNumber * 100) / gradeNumber << "%" << endl;
            }else if(choice == 2){
                int sum = 0;
                for(int i = 0; i < gradeNumber; i++){
                    sum += grades[i];
                }
                file << "The average grade of the class is: " << sum / gradeNumber << endl;
            }
            file.close();
        }else{
            cout << "Unable to open file!" << endl;
        }
    }
 */


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

using namespace std;

int main() {
    int gradeNumber;
    ifstream file("grades.txt");
    if(file.is_open()) {
        file >> gradeNumber;
        cout << gradeNumber << endl;
        int grades[gradeNumber];
        for (int i = 0; i < gradeNumber; i++) {
            file >> grades[i];
        }

        file.close();
    }
//    int gradeNumber;
//    int fileLength = 31;
//    double grades[fileLength];
//    int i=1;
//    if(file.is_open()){
//        while(i<fileLength){
//            file >> grades[i];
//            cout << grades[i] << endl;
//            i++;
//        }
//        file.close();
//    }

}
