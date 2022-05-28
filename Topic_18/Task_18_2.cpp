#include <iostream>
#include <vector>

using namespace std;

int Ways(int n, int m)

{

    if (n <= 1)

        return n;

    int res = 0;

    for (int i = 1; i<=m && i<=n; i++)

        res += Ways(n-i, m);

    return res;

}

int main()
{
    int n = 3;
    int m =3;
    int ans;

    ans = Ways(n + 1, m);
    cout << ans;
}