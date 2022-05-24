#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n = 12;
    int ans;
    int ans_1;
    int a = 3;

    ans = n / a;
    ans_1 = n - ans * a;


    cout << ans << " " << ans_1;
}