#include <iostream>
using namespace std;

int main() {
    double length, width;// you can also use float (note it has 6-7 digit precision)

    // Get input from user
    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;  

    // Calculate area and perimeter
    double area = length * width;
    double perimeter = 2 * (length + width);

    // Display results
    cout << "Area of the rectangle: " << area << " and Perimeter of the rectangle: " << perimeter << endl;
// You can also use "\n" as endline
    return 0;
}
