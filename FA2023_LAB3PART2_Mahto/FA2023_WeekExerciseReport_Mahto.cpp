//FA2023_WeekExerciseReport_Mahto.cpp
#include <string>
#include <iomanip>
#include <iostream> 
using namespace std;
int main()
{
    //Declaring all variables
    string Name;
    string Sdate;
    string Ndate;
    int Mon_t,Tue_t,Wed_t,Thur_t,Fri_t,Sat_t,Sun_t;
    float Mon_m, Tue_m, Wed_m, Thur_m, Fri_m, Sat_m, Sun_m;
    float total_t;
    float total_m;
    float avg_t;
    float avg_m;

    //Asking input from keyboard
    cout << "Enter your name:" << endl;
    getline(cin, Name);
    cout << "Enter your starting date in mm/dd/yyyy format" << endl;
    getline(cin, Sdate);
    cout << "Enter your ending date in mm/dd/yyyy format" << endl;
    getline(cin, Ndate);
    cout << "Enter how many mintues you excercised each day from Monday to Sunday with spaces in between" << endl;
    cin >> Mon_t >> Tue_t >> Wed_t >> Thur_t >> Fri_t >> Sat_t >> Sun_t;
    cout << "Enter how many miles you walk each day from Monday to Sunday with spaces in between " << endl;
    cin >> Mon_m >> Tue_m >> Wed_m >> Thur_m >> Fri_m >> Sat_m >> Sun_m;

    //Required Calculations
    total_t = Mon_t + Tue_t + Wed_t + Thur_t + Fri_t + Sat_t + Sun_t;
    total_m = Mon_m + Tue_m + Wed_m + Thur_m + Fri_m + Sat_m + Sun_m;
    avg_t = total_t / 7;
    avg_m = total_m / 7;

    //Displaying Required Output
    cout << "File name: FA2023_WeekExcerciseReport_Mahto.cpp" << endl;
    cout << "Name of the person reporting: "<<Name<< endl;
    cout << "Report Week: " << Sdate << " to " << Ndate << endl;
    cout << "-----------------------------------------------------------------------------------------" << endl;
    cout << right << setw(21) << "MON"<<setw(6) <<"TUE" << setw(6) << "WED"  << setw(6) << "THU" << setw(6) << "FRI" << setw(6) << "SAT" << setw(6) << "SUN" << setw(8)<<"TOTAL"<<setw(10)<<"AVERAGE"<< endl;
    cout << "------------------------------------------------------------------------------------------" << endl;
    cout << left << setw(9)<<"Time(minutes)" <<right << setw(8)<<Mon_t<<setw(6)<<Tue_t<<setw(6)<<Wed_t<<setw(6)<<Thur_t<<setw(6)<<Fri_t<<setw(6)<<Sat_t<<setw(6)<<Sun_t<<setw(8)<<total_t<<setw(10) << fixed << setprecision(2)<<avg_t<< endl;//setprecision for displaying only 2 decimal values
    cout << left << setw(9) <<"Distance(miles)"<<right << setw(6)<< Mon_m << setw(6) << Tue_m << setw(6) << Wed_m << setw(6) << Thur_m << setw(6) << Fri_m << setw(6) << Sat_m << setw(6) << Sun_m << setw(8) << total_m << setw(10) << avg_m << endl;
    cout << "------------------------------------------------------------------------------------------" << endl;


        system("pause"); //This will pause the output to read
    return 0;
}
