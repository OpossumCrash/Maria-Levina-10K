#include <iostream>

using namespace std;

int step(int a,int b){
    int temp = a;
    for (int i = 0; i < b; i++){
    a = a * temp;
}
return a;
}

/*int main (){

 int n; cin >> n;
 int a = (n - (n / 2)) - 1;
 int ras = step(10, a) * 9;
 for (int i = 0; i < ras; i++){

 }

}*/
