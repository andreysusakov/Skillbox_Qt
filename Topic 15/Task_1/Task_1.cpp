#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> a = {1,2,3,-7,-5,6,7,-8,9};
    int maxSum = 0;
    int minInd = 0;
    int maxInd = 0;
    int start = 0;
    int sum = 0;
    int i = 0;

    for (i = 0; i < a.size(); i++){
        sum += a[i];
        if (sum < 0){
            sum = 0;
            start = i + 1;
        }else if(maxSum < sum){
            maxSum = sum;
            minInd = start;
            maxInd = i;
    }
}

    cout << "The maximum sum " << maxSum << " will be from elements between indices " << minInd << " and " << maxInd << endl;

    return 0;
}
