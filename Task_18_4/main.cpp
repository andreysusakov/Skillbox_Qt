#include <iostream>

using namespace std;

void evendigits(long long n, int ans)
{
    do
    {
        int m = n % 10;
        bool even = m % 2 == 0;
         if(even)
        {
            ans++;
//            evendigits(n /= 10, ans);
        }
//        else
//        {
//            evendigits(n /= 10, ans);
//        }
         n /= 10;
         evendigits(n, ans);
    }while (n / 10 != 0);
}

int main()
{
    long long n = 9223372036854775806;
    int ans = 0;

    evendigits(n, ans);
    cout << ans;

}
