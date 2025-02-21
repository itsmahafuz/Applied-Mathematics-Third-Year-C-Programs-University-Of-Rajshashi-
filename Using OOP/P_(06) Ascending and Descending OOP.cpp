/* DATE : July 22th,2024
 MD MAHAFUZUR RAHMAN
 Roll:2110428176
 Department of Applied Mathematics,
 University Of Rajshahi.
LinkedIn : https://www.linkedin.com/in/md-mahafuzur-rahman-07b80b1b7
GitHub : https://github.com/itsmahafuz
*/

// A program to sort the entries of an array in ascending and descending order..

#include <iostream>
using namespace std;

class sorting
{
private:
    int n, i, j, temp;

public:
    void ascendingFun(int *a, int num)
    {
        n = num;
        for (i = 0; i < n; i++)
            for (j = i + 1; j < n; j++)
            {
                if (a[i] > a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        // Hence the ascending order for the given entries will be...
        cout << "\n The ascending order is:\n";
        for (i = 0; i < n; i++)
            cout << a[i] << " ";
    }

    // For descending order
    void descendingFun(int *a, int n)
    {
        int temp, i, j;

        for (i = 0; i < n; i++)
            for (j = i + 1; j < n; j++)
            {
                if (a[i] < a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        // Hence the descending order for the given entries will be...
        cout << "\n The descending order is:\n";
        for (i = 0; i < n; i++)
            cout << a[i] << " ";
    }
};

int main()
{
New:
    int n, i, x;
    cout << "\n Please enter the length of the array:\n";
    cin >> n;
    int a[n];
    cout << "\n Please enter the elements of the array:\n";
    for (i = 0; i < n; i++)
        cin >> a[i];
    sorting sort;
    sort.ascendingFun(a, n);
    sort.descendingFun(a, n);
    cout << "\nDo you want to check with new values?\n";
    cout << "\nIf yes then pless 1 otherwise press 0\n";
    cin >> x;
    if (x == 1)
        goto New;
}