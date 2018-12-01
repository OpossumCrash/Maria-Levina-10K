/*Write a program that finds the first n composite numbers.
The program should work in no more than O(n*log log n) steps.*/

#include <iostream>

using namespace std;
/*
int main(){
int n; cin >> n;
int o = n * 10;
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
for(int i = 0; i <= o; i++) {
    c[i] = i;

}
for (int i = 4; i <= o; i++){
    if((!used[i]) && (schet < n)){
       cout << c[i] << endl;
       schet++;
    }
 }

delete [] used;
return 0;
}*/
