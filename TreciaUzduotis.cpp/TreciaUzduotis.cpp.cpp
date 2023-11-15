// Author: Rokas Karosas
// Date: 2023 November

#include <iostream>
#include <string>

using namespace std;

// Function to check whether inputted number is a palindrome.
void Palindrome() {
    cout << "Iveskite skaiciu: ";
    int number;
    cin >> number;

    string string_number = to_string(number);
    char reversed_number[50] = {0};

    int j = string_number.length();
    for (int i = 0; i < string_number.length(); i++) {
        reversed_number[i] = string_number[j - 1];
        j--;
    }

    for (int i = 0; i < string_number.length(); i++) {
        if (string_number[i] != reversed_number[i]) {
            cout << "Skaicius ne polindromas" << endl;
            return;
        }

    }
    cout << "Skaicius polindromas" << endl;
    cout << endl;
}

// Function to check whether inputted letter is a vowel.
void Vowel() {
    cout << "Iveskite raide: ";
    char letter;
    cin >> letter;
    letter = toupper(letter);

    if (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U')
    {
        cout << "true" << endl;
        cout << endl;
    }
    else 
    {
        cout << "false" << endl;
        cout << endl;
    }
}

// Function to find GCD of two integers.
 int GreatestCommonDivisor(int number1, int number2) {
     int gcd = 0;
     int temp_number;

     if (number2 >= number1) {
         temp_number = number1;
         number1 = number2;
         number2 = temp_number;
     }
         
     for (int i = 1; i <= number1; i++) {
         if (number1 % i == 0 && number2 % i == 0)
             gcd = i;
     }
     return gcd;
}

int main()
{
    bool ProgramWorks = true;
    int action;

    while (ProgramWorks) {
        cout << "Kokia funkcija noretume pasirinkti?" << endl;
        cout << "1. Patikrinti ar jusu ivestas skaicius yra palindromas." << endl;
        cout << "2. Patikrinti ar jusu ivesta raide yra balse." << endl;
        cout << "3. Rasti didziausia bendra dalikli tarp dvieju jusu ivestu skaiciu." << endl;
        cout << "4. Baigti darba ir uzdaryti programa." << endl;
        
        cin >> action;
        
        if (action == 1)
            Palindrome();
        if (action == 2)
            Vowel();
        if (action == 3) 
        {
            int number1, number2;
            int gcd;
            cout << "Iveskite pirma skaiciu: ";
            cin >> number1;
            cout << "Iveskite antra skaiciu: ";
            cin >> number2;
            
            gcd = GreatestCommonDivisor(number1, number2);
            cout << gcd << endl;
        }
        if (action == 4) 
        {
            system("pause");
            return 0;
        }
    }
}