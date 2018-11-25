/*Напишите программу проверяющую является ли число составным. В
программе гарантируется, что число - натуральное.*/
#include <iostream>

using namespace std;

int main()
{
    int n, i;
    cin >> n;

    if (n == 1){
        cout << "Unit";
    }
    else if (n == 2) {
        cout << "Prime";
            }
    else for (i = 1; i < (n - 1); i++ ) {
            if ((n % (n - i)) == 0) {
            cout << "Composite";
            return 0;
            }
      }
    if ((i == (n - 1))&& ((n % (n - i)) == 0)){
            cout << "Prime";
            }

    return 0;

}









