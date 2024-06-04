// #include <iomanip>
#include <iostream>
#include <string>
#include <algorithm> 
#include <random>     
#include <chrono>     
#include <cmath>
using namespace std;

// Project
struct Student {
    string name;
    string presence;
    int presencePercentage;
};

// H.W.6 - drawCircle
// void drawCircle(int r) {
//     int diameter = 2 * r;
//     int a = r, b = r;
//     for (int y = 0; y <= diameter; ++y) {
//         for (int x = 0; x <= diameter; ++x) {
//             if (pow(x - a, 2) + pow(y - b, 2) <= pow(r, 2)) {
//                 cout << "*";
//             } else {
//                 cout << " ";
//             }
//         }
//         cout << "\n";
//     }
// }


int main() {

    // int arrayOfNumbers[4];
    // cout << "Enter four numbers: ";
    // for(int i = 0; i<4; i++) {
    //     cin >> arrayOfNumbers[i];
    // }
    // for(int i = 0; i< 4; i++) {
    //    cout << arrayOfNumbers[i] << " * 3 = " << arrayOfNumbers[i] * 3 << "\n";
    // }

    // const int size = 5;
    // int array1[size] = {1, 2, 3, 4, 5};
    // int array2[size] = {6, 7, 8, 9, 10};
    // int result[size];
    // for (int i = 0; i < size; i++) {
    //     result[i] = array1[i] * array2[i];
    // }
    // cout << "Arrays multiplication result: ";
    // for (int i = 0; i < size; i++) {
    //     cout << result[i] << " ";
    // }
    // cout << "\n";

    // Sinø
    // const int width = 70;  
    // const int waves = 2;   
    // const int height = 100; 
    // for (int i = 0; i < width; ++i) {
    //     double sineValue = sin((double)i / width * waves * 1.0 * M_PI);
    //     int pos = (sineValue + 1) * (height / 2.0);
    //     for (int j = 0; j < height; ++j) { 
    //         if (j == pos)
    //           cout << "*";
    //          else if (j == 50) {
    //         cout << "|";
    //       }
    //           else if (pos == 50) {
    //             cout << "-";
    //           }
    //         else
    //         cout << ' '; 
    //     }
    //   cout << endl; 
    // }

    // H.M.1
    // const string MyName = "Haider Daij";
    // const string Department = "Information and Communication technology";
    // const string College = "College of Informa􏰀on Engineering";
    // const string University = "Al-Nahrain University";
    // cout << "My Name is: " << MyName << "\n";
    // cout << "Department: " << Department << "\n";
    // cout << "College: " << College << "\n";
    // cout << "University: " << University;
    
    // H.M.2
    // int base = 3;
    // int height = 5;
    // int width = 5;
    // int length = 6;
    // int point = 2;
    // double triangleArea = ((double)1 / 2 * (base * height));
    // int rectangleArea = width * length;
    // int circumferenceRectangle = 2 * (width + length);
    // cout << "Area of the triangle is: " << triangleArea << "\n";
    // cout << "Area of the rectangle: " << rectangleArea << "\n";
    // cout << "Circumference of the rectangle: " << circumferenceRectangle << "\n";

    // H.M.3
    // int radius, year, dollar;
    // double power;
    // double voltage = 220;
    // cout << "Enter the radius: ";
    // cin >> radius;
    // cout << "Enter your birthday year: ";
    // cin >> year;
    // cout << "Enter the power: ";
    // cin >> power;
    // cout << "Enter your US dollar: ";
    // cin >> dollar;
    // cout << "------------\n";
    // cout << "Area of the circle is: " << M_PI * pow(radius, 2) << "\n";
    // cout << "Your age is: " << 2024 - year << "\n";
    // cout << "Current in Amperes is: " << power / voltage << "A\n";
    // cout << "You will have: " << dollar * 1350 << "IQDs";

    // H.W.4.1
    // int number;
    // cout << "Enter the number: ";
    // cin >> number;
    // cout << (number % 2 == 0 ? "Even" : "Odd");
    // Quntity -> check -> ? return something : return something else

    // H.W.4.2
    // int a,b,c;
    // cout << "Enter the value of a,b,c: ";
    // cin >> a >> b >> c;
    // double discriminant = pow(b,2) - (4 * a * c);
    // double realPart = -b / (2 * a);
    // double imaginaryPart = sqrt(-discriminant) / (2 * a);
    // double root1, root2;
    // if (discriminant == 0) {
    // cout << "The roots are the same: " << realPart; 
    // } else if (discriminant > 0) {
    // root1 = (-b + sqrt(discriminant)) / (2 * a);
    // root2 = (-b - sqrt(discriminant)) / (2 * a);
    // cout << "The root 1 is: " << root1 << "\n";
    // cout << "The root 2 is: " << root2;
    // } else if (discriminant < 0) {
    //     cout << "The root 1 is: " << realPart << "+" << imaginaryPart << "i\n";
    //     cout << "The root 2 is: " << realPart << "-" << imaginaryPart << "i";
    // }

    // H.W.4.3
    // int r,a,b;
    // cout << "Enter the radius and a,b: ";
    // cin >> r >> a >> b;
    // cout << "(x - " << a << ")^2 + (y - " << b << ")^2 - " << pow(r,2) << " = 0";

    // H.W.5.1
    // int number = -9;
    // cout << (number > 0 ? "Positive" : number < 0 ? "Negative" : "Zero");

    // H.W.5.2 && H.W.6
    // int r,a,b,x,y;
    // cout << "Enter the radius and a,b: ";
    // cin >> r >> a >> b;
    // cout << "Circle Equation: " << "(x - " << a << ")^2 + (y - " << b << ")^2 - " << pow(r,2) << " = 0\n";
    // cout << "Enter the XY of the point to check: ";
    // cin >> x >> y;
    // double distance = sqrt(pow(x - a,2) + pow(y - b,2));
    // cout << (distance > r ? "The point Outside the circle\n" : distance < r ? "The point Inside the circle\n" : "The point on the circle\n");
    // drawCircle(r);

    // Max_Value    
    // int numbers[5];
    // int numbersArrayLength = sizeof(numbers) / sizeof(int);
    // cout << "Enter five numbers1 please: ";
    // for (int i = 0; i< numbersArrayLength; i++) {
    //         cin >> numbers[i];
    // }
    // int min = numbers[0];
    // for (int i=0; i < numbersArrayLength; i++) {
    //     if (numbers[i] < min) {
    //         min = numbers[i];
    //     }
    // }
    // cout << "The Min Value is: "<< min << "\n";

    // Character 
    // char words[] = "the brown fox jumbed over the lazy dog.";
    // int last = words[0];
    // int length = sizeof(words) / sizeof(char);
    // for(int i=length; i>0; i--) {
    //     cout << words[i];
    // }

    // Project
    // // Create new array contain 5 names of string
    // string names[5] = {"ahmed", "mohammed", "zaid", "karar", "omar"};
    // // Knowing the array Length = 5
    // int namesArrayLenght = sizeof(names) / sizeof(string);
    // // Set the array of 5 Obj (struct)
    // Student students[namesArrayLenght];
    // // Create array of 3 number possible for student presences
    // int percentages[] = {0, 7, 14};
    // // Knowing the array Length = 3
    // const int numPercentages = sizeof(percentages) / sizeof(int);
    // /* 00:00:00 UTC on January 1, 1970 (number of ticks from 1970 - now)
    // for exmple -> 1715461183712439 */
    // unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    // // default_random_engine starts with a different initial state each time the program is run -> unique value
    // default_random_engine engine(seed);
    // for (int i = 0; i < namesArrayLenght; i++) {
    //     students[i].name = names[i];
    //     shuffle(percentages, percentages + numPercentages, engine);
    //     students[i].presencePercentage = percentages[i % numPercentages];
    //     // cout << students[i].name << " - " << students[i].presencePercentage << "%\n";
    // }
    // int index = 0;
    // string response;
    // while (index < namesArrayLenght) {
    //     cout << "Does the student \"" << students[index].name << "\" exist Today? (yes/no): ";
    //     cin >> response;
    //     if (response != "yes" && response != "no") {
    //         cout << "Invalid response. Please answer with \"yes\" or \"no\".\n";
    //         continue;           
    //     }
    //     students[index].presence = response;
    //     index++;
    // }
    // cout << "\nPresence List:\n";
    // for (int i = 0; i < namesArrayLenght; i++) {
    // cout << "Student: " << students[i].name << " - "
    //      << students[i].presencePercentage << "%, Present Today: " 
    //      << students[i].presence;
    // cout << (students[i].presencePercentage == 14 && students[i].presence == "no" ? " --> Dismissed!" : "") << "\n";
    // }

    return 0;

}


