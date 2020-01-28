#include <iostream>
#include <string.h>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    ifstream cheerbook;
    cheerbook.open("C:\\Users\\ASUS G531GT\\Desktop\\lab9-2562-2-poncmu\\cheerbook.txt");
    string text;
    ofstream cheerbook2;
    cheerbook2.open("C:\\Users\\ASUS G531GT\\Desktop\\lab9-2562-2-poncmu\\cheerbook_copy.txt");
    cheerbook2<<"-------------------- SOTUS ---------------------"<<endl;
    while(getline(cheerbook,text))
    {
        cheerbook2<<text<<endl;
    }
    cheerbook2<<"-------------------- SOTUS ---------------------"<<endl;
    
    

    return 0;
}