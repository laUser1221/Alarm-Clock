//Alarm-Clock By: Leo A.

#include <iostream>
#include <fstream> //Research what is this command used for?
#include <string>

using namespace std;

int main()
{

    //Variables

    int choice = 0;
    string current;
    string wake;

    cout << "Version 1.0" << endl;

    //Menu

while (choice < 1 || choice > 3)
{
    cout << "1) Set a time to wake up" << endl;
    cout << "2) Retrieve last used time to wake up to" << endl;
    cout << "3) Exit" << endl;
    cout << "Please select an option: ";
    cin >> choice;

}




return 0;
}
