#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string str;
        cin >> n;
        cin >> str;
        int indian = count(str.begin(), str.end(), 'I');
        int not_indian = count(str.begin(), str.end(), 'Y');
        int no_sure = count(str.begin(), str.end(), 'N');

        if (indian >= 1)       // this will check for indian 
        {
            cout << "INDIAN" << endl;
        }
        else if (not_indian > 0)        // this will check for not indian
        {
            cout << "NOT INDIAN" << endl;
        }
        else                             // this means information is insufficient
        {
            cout << "NOT SURE" << endl;
        }
    }

    return 0;
}