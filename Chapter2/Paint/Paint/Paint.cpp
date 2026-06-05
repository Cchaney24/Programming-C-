// PaintEstimator.cpp
// This program estimates the number of gallons
// needed for two coats of paint on a fence.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Constants

    const double PAINT_COVERAGE = 340.0;
    const int COATS = 2;

    // Variables

    double height;
    double length;
    double area;
    double paintArea;
    double gallonsNeeded;

    // Get user input

    cout << "This program estimates the number of gallons needed "
        << "for 2 coats of paint on a fence given its height and length.\n";
    cout << "Please enter the height and length: ";

    cin >> height >> length;

    // Calculate fence area

    area = height * length;

    // Calculate area for 2 coats

    paintArea = area * COATS;

    // Calculate gallons needed

    gallonsNeeded = paintArea / PAINT_COVERAGE;

    // Display results

    cout << fixed << setprecision(2);

    cout << "\nFence Area: "
        << area
        << " square feet";

    cout << "\nArea for 2 Coats: "
        << paintArea
        << " square feet";

    cout << "\nGallons Needed: "
        << gallonsNeeded
        << endl;

    return 0;
}
