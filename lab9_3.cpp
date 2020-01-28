#include <iostream>
#include <string.h>
#include <math.h>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    fstream score;
    score.open("score.txt");
    string textline;
    double sum1=0;
    double sum2=0;
    int c=0;
   
    while(getline(score,textline))
    {
        sum1=sum1+atof(textline.c_str());
        sum2=sum2+pow(atof(textline.c_str()),2);
        c++;
    }
    cout<<"N = "<<c<<endl;
    cout<<"Mean = "<<sum1/c<<endl;

    cout<<"Standard deviation = "<<pow(sum2/c-pow(sum1/c,2),0.5);


    return 0;
}