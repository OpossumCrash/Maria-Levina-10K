/*Напишите программу находящую первые n составных чисел.
Программа должна работать не более чем за O(n*log log n) шагов.*/

#include <iostream>

using namespace std;

int main(){
int n; cin >> n;
int o = n * 100;
bool* used = new bool [o + 1];
 used [0] = used [1] = 0;
 for (int i = 2; i <= o; i++){
    used [i] = 1;
 }
 for (int i = 2; i <= o; i++){
    if(used [i]){
        for(int j = i + i; j <= o; j += i){
            used [j] = 0;
        }
    }
 }
int schet = 0;
int* c = new int[o];
for(int i = 0; i < o; i++) {
    c[i] = i;
    cout << c[i];
}
 for (int i = 0; i <= o; i++){
    while((!used[i]) && (schet < o + 1)){
       cout << c[i];
       schet ++;
    }
 }
}


