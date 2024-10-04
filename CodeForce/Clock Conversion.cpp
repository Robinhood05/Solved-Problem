#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string convertTo12Hour(int hour, int minute) {
    if (hour < 0 || hour > 23 || minute < 0 || minute > 59) {
        return "Invalid input";
    }

    string period = "AM";

    if (hour >= 12) {
        period = "PM";
        if (hour > 12) {
            hour -= 12;
        }
    }
    
    if (hour == 0) {
        hour = 12;
    }


    string minuteStr = to_string(minute);
    if (minute < 10) {
        minuteStr = "0" + minuteStr;
    }
   string hours=to_string(hour);
   if(hour<10){
       hours="0"+hours;
   }
    return  hours+ ":" + minuteStr + " " + period;
}

int main() {
    int test;
    cin >> test;
    cin.ignore();
    
    while (test--) {
        string input;
        getline(cin, input);
        int hour, minute;
        stringstream ss(input);
        char colon;
        if (ss >> hour >> colon >> minute && colon == ':') {
            cout << convertTo12Hour(hour, minute) << endl;
        }
    }

    return 0;
}

