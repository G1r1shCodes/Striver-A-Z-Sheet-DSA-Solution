#include<iostream>
using namespace std;
//Code Starts Here
class Solution {
   public:
    void whichWeekDay(int day) {
        switch (day) {
            case 1:
                cout << "Monday\n";
                break;
            case 2:
                cout << "Tuesday\n";
                break;
            case 3:
                cout << "Wednesday\n";
                break;
            case 4:
                cout << "Thursday\n";
                break;
            case 5:
                cout << "Friday\n";
                break;
            case 6:
                cout << "Saturday"<<endl;
                break;
            case 7:
                cout << "Sunday"<<endl;
                break;
            default:
                cout << "Invalid"<<endl;
        }
    }
};
// Code Ends Here
int main()
{
    Solution sol;
    int day;
    cin>>day;
    sol.whichWeekDay(day);
    return 0;
}