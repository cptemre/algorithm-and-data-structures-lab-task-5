#include <iostream>
using namespace std;


int main()
{
    int a, b;
    do
    {
        cout << "Please enter 2 natural numbers and first number should be smaller or equal.\n";
        cout << "First number is: ";
        cin >> a;
        cout << "Second number is: ";
        cin >> b;
    } while (a > b);


    bool isTrue = true;
    while (isTrue)
    {
        int a1 = a;
        int b1 = b;
        float result = 0;
        int numbers = 0;
        int option;
        cout << "1- sum\n";
        cout << "2- sum of squares\n";
        cout << "3- arithmetic mean\n";
        cout << "4- end of program\n";
        cin >> option;
        switch (option)
        {
        case 1:
            while (a1 <= b1)
            {
                result += a1;
                a1++;
            }
            cout << "Sum is: " << result << endl;
            break;
        case 2:
            while (a1 <= b1)
            {
                result += a1 * a1;
                a1++;
            }
            cout << "Sum of squares is: " << result << endl;
            break;
        case 3:
            while (a1 <= b1)
            {
                result += a1;
                a1++;
                numbers++;
            }
            result /= numbers;
            cout << "Arithmetic mean is is: " << result << endl;
            break;
        case 4:
            isTrue = false;
            break;
        default:
            cout << "Please select and option between 1-4" << endl;
            break;
        }
    }
    return 0;
}