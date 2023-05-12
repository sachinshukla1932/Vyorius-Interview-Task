#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int simulateTemperature(int min, int max) {
    return rand() % (max - min + 1) + min;
}
void controlTemperature(int currentTemp, int minTemp, int maxTemp) {
    if (currentTemp < minTemp) {
        cout << "Activating heating system..." << endl;
    } else if (currentTemp > maxTemp) {
        cout << "Activating cooling system..." << endl;
    } else {
        cout << "Temperature within desired range. No action needed." << endl;
    }
}
int main() {
    srand(time(NULL));
    char c='y';
    int minTemp, maxTemp;
    cout << "Enter the desired minimum temperature: ";
    cin >> minTemp;
    cout << "Enter the desired maximum temperature: ";
    cin >> maxTemp;
    cout<<"Do you wish to give a test case or should the program test for random values?(enter 'y' for user input):";
    cin>>c;
    if(c=='y' || c=='Y')
    {
        int currentTemp=0;
        cout<<"Enter the  tests that you want to run:";
        cin>>currentTemp;
        cout << "Current temperature: " << currentTemp << "°C" << endl;
        controlTemperature(currentTemp, minTemp, maxTemp);
        cout << "-------------------------" << endl;
    }
    else{
        cout<<"Enter the no. of tests that you want to run:";
        int n;
        cin>>n;
        while (n--) {
            int currentTemp = simulateTemperature(0,100);
            cout << "Current temperature: " << currentTemp << "°C" << endl;
            controlTemperature(currentTemp, minTemp, maxTemp);
            cout << "-------------------------" << endl;
        }
    }
    return 0;
}