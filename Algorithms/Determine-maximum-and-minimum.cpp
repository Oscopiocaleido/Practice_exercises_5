/*
Write a function or action that receives 5 numbers as parameters 
and determines the maximum and minimum between them.
*/

#include <iostream>

using namespace std;

void max_and_min(int d1, int d2, int d3, int d4, int d5){
    int max = 0, min = 0;

    if(d1>d2 && d1>d3 && d1>d4 && d1>d5){
        max=d1;
    }else if (d2>d1 && d2>d3 && d2>d4 && d2>d5){
        max = d2;
    }else if (d3>d1 && d3>d2 && d3>d4 && d3>d5){
        max = d3;
    }else if (d4>d1 && d4>d2 && d4>d3 && d4>d5){
        max = d4;
    }else{
        max = d5;
    }

    if(d1<d2 && d1<d3 && d1<d4 && d1<d5){
        min=d1;
    }else if (d2<d1 && d2<d3 && d2<d4 && d2<d5){
        min = d2;
    }else if (d3<d1 && d3<d2 && d3<d4 && d3<d5){
        min = d3;
    }else if (d4<d1 && d4<d2 && d4<d3 && d4<d5){
        min = d4;
    }else{
        min = d5;
    }

    cout<<"The largest of the 5 numbers is: "<<max<<" ,and the minimum is: "<<min<<endl;
}

int main(){
    int d1 = 0, d2 = 0, d3 = 0, d4 = 0, d5 = 0;

    cout<<"Enter 5 numbers: ";cin>> d1 >> d2 >> d3 >> d4 >> d5;
    max_and_min(d1, d2, d3, d4, d5);
    return 0;
}