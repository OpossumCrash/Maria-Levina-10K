/*Write a program that finds all primes of Sophie Germain not exceeding n.
 The program should work in no more than O(n*log log n) steps.*/
 #include <iostream>

 using namespace std;
/*
 int main() {
 int n; cin >> n;

 bool* used = new bool [n + 1];
 used [0] = used [1] = 0;
 for (int i = 2; i <= n; i++){
    used [i] = 1;
 }
 for (int i = 2; i <= n; i++){
    if(used [i]){
        for(int j = i + i; j <= n; j += i){
            used [j] = 0;
        }
    }
 }
 for (int i = 2; i <= n; i++){
    if(used[i]){
        if(used[(2 * i) + 1]){
            cout << i << " ";
        }
    }
 }
 delete [] used;
 return 0;
 }*/
