#include <iostream>
#include<string>
#include<fstream>

using namespace std;
const int MAXATHLETES = 50;
const int MAXCOUNTRIES = 20;
const int MAXFUNCTIONCALLS = 100;
const int ATHLETES = 5;
int main() {
    string lastNames[MAXATHLETES];
    string firstName[MAXATHLETES];
    int ages[MAXATHLETES];
    double adRevenues[MAXCOUNTRIES];
    char surfaces[MAXATHLETES];
    string sports[MAXATHLETES];
    int athletesPerCountry[ATHLETES];
    int numberOfCountries = 0;
    ifstream dataFile;
    dataFile.open("olycs105.txt");
    //check for error
    if(dataFile.fail()){
        cerr << "Error Opening File" <<endl;
		exit(1);
    }
//displaying the country
    string country1;
    if(dataFile.is_open())
    {
        dataFile>>country1>>athletesPerCountry[0];
        cout << country1 <<'\n';
        cout<<athletesPerCountry[0]<<'\n';
        for(int i = 0; i < ATHLETES ; i++)
        {
            dataFile >>lastNames[i]>>firstName[i]>>ages[i]>>adRevenues[i]>>surfaces[i];
            getline(dataFile, sports[i]);
            cout<<lastNames[i]<<"  "<<firstName[i]<<"  "<<ages[i]<<"  "<<adRevenues[i]<<"  "<<surfaces[i]<<sports[i]<<endl;

        }

    }


    dataFile.close();


	system("pause");
    return 0;
}