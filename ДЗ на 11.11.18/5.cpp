//5) Напишите программу, заменяющую составные числа на их самые большие простые делители.

#include <iostream>

using namespace std;/*

int simple(int n){
    int i;
    if (n == 1){
        return 1;
    }
    else if (n == 2) {
        return 1;
            }
    else for (i = 1; i < (n - 1); i++ ) {
            if ((n % (n - i)) == 0) {
            return 0;
            }


      }

return 1;
}


int main () {
    int A; cin >> A;
    int nb = 1;
    if (simple (A) == 1){
            nb = A ;
            cout << nb;
            return 0;
    }
    int i = 1;
    for(i = 1; i < A; i++){
        if((A % (A - i)) == 0){
                 nb = A - i;
                 if (simple (nb) == 1){
                    cout << nb;
                    return 0;
                 }
            }
       }

    cout << "None";
    return 0;
}
*/
