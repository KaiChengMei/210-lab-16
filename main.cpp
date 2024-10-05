// COMSC-210 | Lab 16 | Kai-Cheng Mei
#include <iostream>
using namespace std;

class Color {
private:
    int red;
    int green;
    int blue;

public:
    // Default 
    Color() : red(0), green(0), blue(0) {}

    // Parameterized 
    Color(int r, int g, int b) : red(r), green(g), blue(b) {}

    // Partial Constructor 
    Color(int r) : red(r), green(0), blue(0) {}

    // Setter methods
    void setRed(int r) { red = r; }
    void setGreen(int g) { green = g; }
    void setBlue(int b) { blue = b; }

    // Getter methods
    int getRed() const { return red; }
    int getGreen() const { return green; }
    int getBlue() const { return blue; }

    // Print method
    void print() const {
        cout << "Color(Red: " << red << ", Green: " << green << ", Blue: " << blue << ")" << endl;
    }
};

int main() {
    // Create Color objects
    Color color1(255, 0, 0);  // Red
    Color color2(0, 255, 0);  // Green
    Color color3(0, 0, 255);  // Blue
    
    Color color4; 
    Color color5(128) ;// Red pratial

    // Print the colors
    color1.print();
    color2.print();
    color3.print();
    color4.print();
    color5.print();

    // Modify and print again
    color1.setGreen(100);
    color1.print();

    return 0;
}