#include <iostream>

using namespace std;

int main()
{
    int sum, i, n;
    sum = 0;

    for (i = 1; ;i++){
        cin >> n;
        sum += n;

        if (n == 0){
            cout << "Average =" << sum / i;
            return 0;
        }
    }
}
