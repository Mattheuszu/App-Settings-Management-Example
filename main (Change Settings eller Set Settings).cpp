/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

class AppSettings {
private:
    static double screen_brightness;
    static double sound_volume;

public:
    static void ChangeSettings();
    static void DisplaySettings();
};

double AppSettings::screen_brightness = 50.0;  
double AppSettings::sound_volume = 50.0;

void AppSettings::ChangeSettings() {
    std::cout << "Input screen_brightness: ";
    std::cin >> screen_brightness;
    std::cout << "Input sound_volume: ";
    std::cin >> sound_volume;
}

void AppSettings::DisplaySettings() {
    std::cout << "Screen Brightness: " << screen_brightness << std::endl;
    std::cout << "Sound Volume: " << sound_volume << std::endl;
}

int main() {
    AppSettings::ChangeSettings();
    std::cout << std::endl;
    AppSettings::DisplaySettings();

    return 0;
}