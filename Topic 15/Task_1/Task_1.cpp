#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> a = {1,2,3,4,-5,6,7,-8,-9};
    int maxSum = 0;
    int minInd = 0;
    int maxInd = 0;
    int sum = 0;
    int i = 0;
    int j = 0;

    for (i = 0; i < a.size(); i++){
        sum = a[i];
        for (j = i+1; j < a.size(); j++){
            sum += a[j];
            if (maxSum < sum){
                maxSum = sum;
                minInd = i;
                maxInd = j;
            }
        }
    }

    cout << "The maximum sum " << maxSum << " will be from elements between indices " << minInd << " and " << maxInd << endl;

    return 0;
}
