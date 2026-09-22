#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    for(int i = 1; i <= 7; i++)
    {
        if(number == i)
        {
            switch(i)
            {
                case 1:
                    cout << "Monday";
                    break;

                case 2:
                    cout << "Tuesday";
                    break;

                case 3:
                    cout << "Wednesday";
                    break;

                case 4:
                    cout << "Thursday";
                    break;

                case 5:
                    cout << "Friday";
                    break;

                case 6:
                    cout << "Saturday";
                    break;

                case 7:
                    cout << "Sunday";
                    break;
            }
        }
    }

    return 0;
}
