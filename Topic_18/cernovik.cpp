#include <iostream>

using namespace std;


int main()
{
    long long n = 922465;
    int ans = 0;


    do
    {
        int m = n % 10;
        cout << m << endl;
        bool even = m % 2 == 0;
         if(even)
        {
        ans++;
        n /= 10;
        cout << n << " " << "/" << ans << "/";
        }
        else
        {
        n /= 10;
        cout << n << " ";
        }
    }while (n / 10 != 0);
    cout << ans;

    return 0;
}
