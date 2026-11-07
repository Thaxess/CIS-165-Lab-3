#include <iostream>
using namespace std;

int main() {

    // Declare and initialize the total minutes and hours for level one
    int level_one_total_minutes = 78;
    int level_one_hours = level_one_total_minutes / 60;
    int level_one_remaining_minutes = level_one_total_minutes % 60;

    // Declare and initialize the total minutes and hours for level two
    int level_two_total_minutes = 144;
    int level_two_hours = level_two_total_minutes / 60;
    int level_two_remaining_minutes = level_two_total_minutes % 60;

    // Calculate the time difference between level two and level one
    int time_difference_minutes = level_two_total_minutes - level_one_total_minutes;
    int time_difference_hours = time_difference_minutes / 60;
    int time_difference_remaining_minutes = time_difference_minutes % 60;

    // Output the results
    cout << "Level One: " << level_one_hours << " hours and " << level_one_remaining_minutes << " minutes." << endl;
    cout << "Level Two: " << level_two_hours << " hours and " << level_two_remaining_minutes << " minutes." << endl;
    cout << "Level Two took " << time_difference_hours << " hours and " << time_difference_remaining_minutes << " minutes more than Level One." << endl;

    return 0;
}