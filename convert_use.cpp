#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cmath>
#include <cstring>
#include <unordered_map>
#include <windows.h>
using namespace std;
#include "convert.h"

int main() {
    int n, choice;


   cout<<("\n\n\t\t\t************************ Welcome to the Converter ************************")<<"\n";

    while (true) {
        cout << "\t\t1. Binary to Octal" << "\n";
        cout << "\t\t2. Octal to Binary" << "\n";
        cout << "\t\t3. Decimal to Octal" << "\n";
        cout << "\t\t4. Octal to Decimal" << "\n";
        cout << "\t\t5. Decimal to Hexadecimal" << "\n";
        cout << "\t\t6. Hexadecimal to Decimal" << "\n";
        cout << "\t\t7. Hexadecimal to Binary" << "\n";
        cout << "\t\t8. Binary to Hexadecimal" << "\n";
        cout << "\t\t9. Decimal to Binary" << "\n";
        cout << "\t\t10. Binary to Decimal" << "\n";
        cout << "\t\t11. Hexadecimal to Octal" << "\n";
        cout << "\t\t12. Octal to Hexadecimal" << "\n";
        cout << "\t\tEnter -1 to exit " << "\n";
        cout << "\nEnter your choice : " << "\n";
        cin >> choice;
        if (choice == -1) {
            return -1;
        }
        if (choice > 12) {
            cout << "Invalid choice" << "\n";
            //Sleep(1000);
            //system("cls");
            continue;
        }
        cout << "Enter no. " << "\n";
        if (choice == 1) {
            cin >> n;
            convert<int> ob(n);
            cout << ob.convertBinarytoOctal(n) << "\n";
        }
        else if (choice == 2) {
            cin >> n;
            convert<int> ob(n);
            cout << ob.convertOctalToBinary(n) << "\n";
        }
        else if (choice == 3) {
            cin >> n;
            convert<int> ob(n);
            cout << ob.Decimal_T0_Octal(n) << "\n";
        }
        else if (choice == 4) {
            cin >> n;
            convert<int> ob(n);
            cout << ob.Octal_TO_Decimal(n) << "\n";
        }
        else if (choice == 5) {
            cin >> n;
            convert<int> ob(n);
            ob.decToHexa(n);
            cout << "\n";
        }
        else if (choice == 6) {
            char s[20];
            cin >> s;
            convert<string> ob(s);
            cout << ob.hexadecimalToDecimal(s) << "\n";
        }
        else if (choice == 7) {
            string s;
            cin >> s;
            convert<string> ob(s);
            cout << ob.hex_to_bin(s) << "\n";
        }
        else if (choice == 8) {
            string s;
            cin >> s;
            convert<string> ob(s);
            ob.bin_to_hex(s);
        }
        else if (choice == 9) {
            cin >> n;
            convert<int> ob(n);
            ob.dec_to_bin(n);
            cout << "\n";
        }
        else if (choice == 10) {
            string s;
            cin >> s;
            convert<string> ob(s);
            ob.Bin_to_dec(s);
            cout << "\n";
        }
        else if (choice == 11) {
            scanf("%x", &n);
            printf("%o", n);
            cout << "\n";
        }
        else if (choice == 12) {
            scanf("%o", &n);
            printf("%x", n);
            cout << "\n";
        }
        //Sleep(5000);
        //system("cls");
    }
}
