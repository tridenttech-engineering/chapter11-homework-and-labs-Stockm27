//Lab 9-2.cpp - displays two monthly car payments
//Created/revised by <Mathias Stock> on <8-5-2024>
//

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double rates[4] = {0.92, 1.82, 0.98, 0.67};
    int choice = 0;
    int dollars=0;
    double result = 0.0;

cout <<"Curreny Menu" << endl;
    cout << "1. Euro" << endl;
    cout << "2. British Pound" << endl;
    cout << "3. German Mark" << endl;
    cout << "4. Swiss Franc" << endl;
    cout << "Enter currency choice (1-4): ";
    cin >> choice;

    if (choice > 0 && choice < 5)
    {
        cout << "Number of American dollars: ";
        cin >> dollars;
        cout << endl;
       if (choice == 1)
           cout << "Euros: ";
        else if (choice == 2)
            cout << "British Pounds: ";
        else if (choice == 3)
            cout << "German Marks: ";
        else if (choice == 4)
            cout << "Swiss Francs: "; //end if
        
        result = dollars * rates[choice - 1];
        cout << result << endl;
    }
    else
        cout << "Invalid choice" << endl;
    //end if

    return 0;
}//end of main function    
