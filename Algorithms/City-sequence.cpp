/*
Write an algorithm that takes as input a sequence of pairs of city names and distances between these cities
of city names and distances between these cities (measured in miles) and reports the
miles) and reports the distances in kilometers. You must make a function
to convert from miles to kilometers (1 mile = 1.6 km), another function to read the next two cities and their distances, and
to read the next two cities and their distances, and a function to determine if the algorithm should continue to
to determine if the algorithm should continue to run. In doing so, I take into account that the end
I take into account that the end of the input is determined by two cities with the same name and distance.
For example, 
for the sequence Caracas Valencia 98 Caracas Maturin 312 Caracas Caracas 0, 
your algorithm should print: 
Caracas Valencia: 157.716
Caracas Maturin:  502.115
*/

#include <iostream>
#include <string>

using namespace std;



float millas_a_kilometros(int a){
    int km = 1;
    float result;
    float mi = 0.621371;

    result = a *(km/mi);
    return(result);
}

void leer(string& city, string& city2, float& mile){
    cout<<"Enter a the name of two cities and their distance in miles: ";cin>> city >> city2 >> mile;
}

void parar_funcion(string& city, string& city2, float distancia, bool& flag){
    if(city == city2 && distancia == 0){
        flag = false;
    }
}

int main(){
    string city, city2;
    float mile;
    bool flag = true;

    while(flag){        
        leer(city, city2, mile);
        parar_funcion(city, city2, mile, flag);

        if(flag){
            float distancia = millas_a_kilometros(mile);
            cout<<city<<" "<<city2<<" : "<<distancia<<endl;
        }
    }

    return 0;
}