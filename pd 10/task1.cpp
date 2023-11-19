#include <iostream>

using namespace std;

main()
{
    int n, days = 0;
    cout << "Enter the number of saturdays: ";
    cin >> n;
    int progress[n];

    for (int j = 0; j < n; j++)
    {
        cout << "Enter miles run for saturday " << j + 1 << ": ";
        cin >> progress[j];
    }

    for (int k = 0; k < n - 1; k++)
    {
        if (progress[k + 1] > progress[k])
            days += 1;
    }

    cout << "Total Progress days: " << days;
}
