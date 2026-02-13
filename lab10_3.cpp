#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
#include<fstream>
#include<cstdlib>

int main(){
        int count = 0;

        float sum = 0.000;

        float sum_of_square = 0.000;

        string textline;

        ifstream source("score.txt");

        while (getline(source,textline)){

                sum += atof(textline.c_str());

                sum_of_square += atof(textline.c_str())*atof(textline.c_str());

                count++;

        }

        cout << "Number of data = " << count << "\n";

        cout << setprecision(3);

        cout << "Mean = " << sum/count << "\n";

        cout << "Standard deviation = " << sqrt((sum_of_square/count)-pow(sum/count, 2));
}