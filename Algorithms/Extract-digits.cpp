/*
Make an algorithm for a function that receives two parameters N and K and returns the leftmost K digits of N .
K and returns the leftmost K digits of N . For example,
extractDigits(542207, 2) should return 54
*/

#include <iostream>


using namespace std;

int extractDigits (int N, int K){
    bool flag = false;
    int n_digits=0;
    if(N<10){
        n_digits = 1;
    }
    else if (N<100){
        n_digits = 2;
    }
    else if (N<1000){
        n_digits = 3;
    }    
    else if (N<10000){
        n_digits = 4;
    }   
    else if (N<100000){
        n_digits = 5;
    }
    else if (N<1000000){
        n_digits = 6;
    } else if(N>1000000){
        return -1;   
    }
       
    if(n_digits == K){
        cout<<"The leftmost "<<K<<" digits of "<<N<<" are: "<<N;
        return -1;
    } else if (K > n_digits){
        return -1;
    }

    int aux = N, count=0;
    while(flag!=true){
        aux /= 10;

        if(aux<10){
            count = 1;
        }
        else if (aux<100){
            count = 2;
        }
        else if (aux<1000){
            count = 3;
        }    
        else if (aux<10000){
            count = 4;
        }   
        else if (aux<100000){
            count = 5;
        }
        else if (aux<1000000){
            count = 6;
        }

        if(count == K)
            flag = true;
    }
    return aux;
}

int main(){
    int N=0, K=0;

    cout<<"Enter a number: ";cin>>N;
    cout<<"Enter the leftmost K digits of N: ";cin>>K;
    cout<<endl;

    cout<<"The leftmost "<<K<<" digits of "<<N<<" are: "<<extractDigits(N, K);
    return 0;
}