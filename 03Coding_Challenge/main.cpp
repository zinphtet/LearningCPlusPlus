#include <iostream>

using namespace std;
// clenaing service
// small rom 25
// large room 40
// tax 6%
// Total cost ---
// valid for 30 days
int main()
{
    const int small_price = 25;
    int smallNum = 0;
    const int large_price = 45;
    int largeNum = 0;
    const int valid_day = 30;
    const double tax = 0.06;
    cout << "CLEANING SERVICES FOR ROOMS" << endl;
    cout << "(Tax is 6 percent for all rooms)" << endl;
    cout << "Number of Small romms  : ";
    cin >> smallNum;
    cout << "Number of Large romms : ";
    cin >> largeNum;
    cout << "######################################";
    cout << "\nTotal Info\n";
    cout << "Price for small rooms (including tax)" << (small_price * smallNum) + ((small_price * smallNum) * tax) << " $" << endl;
    double allSmall = (small_price * smallNum) + ((small_price * smallNum) * tax);
    cout << "Price for large rooms (including tax)" << (large_price * largeNum) + ((large_price * largeNum) * tax) << " $" << endl;
    double allLarge = (large_price * largeNum) + ((large_price * largeNum) * tax);
    cout << "Total Estimated Cost :" << allSmall + allLarge << " $" << endl;
    cout << "Valid for " << valid_day << " days";
    return 0;
}