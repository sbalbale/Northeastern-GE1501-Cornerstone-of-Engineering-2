#include <iostream>
#include<fstream>
#include <cmath>
using namespace std;
int i=0,counter=0,counter2=0;
double T1[12],T2[12],T1new[12];


double average_vel(double vel[]){
    double avg_vel=0.0;
    i=0;
    while(i<10){
        // cout <<vel[i]<<endl;
        avg_vel = avg_vel+vel[i];
        i=i+1;
    }
    avg_vel = avg_vel/10;
   // cout <<"avg_vel ="<<avg_vel<<endl;
    return avg_vel;
}

int main() {
    double T=0.0;
//****Reading T1
    i=0;
    ifstream myfile;
    myfile.open("T1.txt");
    while (myfile >> T){
        counter++;
        T1[i] = T;
         cout <<T1[i]<<endl;
        i=i+1;
      }
//****Reading T2
cout<<"************************************************"<<endl;
    i=0;
    ifstream myfile2;
    myfile2.open("T2.txt");
    while (myfile2 >> T){
        T2[i] = T;
        cout <<T2[i]<<endl;
        i=i+1;
    }
    cout<<"************************************************"<<endl;
    myfile.close();//closing file
    myfile2.close();//closing file

    i=0;
    while(i<12){
        if(T1[i]<0){
            counter2++;
           T1new[i]= T2[i];
        }else{
            T1new[i]= T1[i];
        }
        i++;
    }
    cout <<"number of corrected data is:"<<counter2<<endl;
    cout <<"The new array is:"<<endl;
    i=0;
    while(i<counter){
        cout <<T1new[i]<<endl;
        i++;
    }

    return 0;
}
