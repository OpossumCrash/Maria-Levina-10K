#include <iostream>
#include <vector>

using namespace std;

void ribs_list_to_next_table(int** &M1, int N, int M){      //список рёбер -> матрица смежности

 int** A = new int*[N];
 for(int i = 0; i <= N; i++){
    A[i] = new int [N];
    for(int j = 0; j < N; j++){
        A[i][j] = 0;
    };
 };


 for(int j = 0; j < M; j++){
    int s = M1[j][0];
    int f = M1[j][1];
    A[s + 1][f + 1] = 1;
    A[f + 1][s + 1] = 1;
 };
 for(int i = 0; i < M; i++){
    delete [] M1[i];
 }

 M1 = A;

}
void next_table_to_ribs_list(int** &M1, int N, int M){ //матрица смежности -> список рёбер

    int** A = new int*[M];

    for(int i = 0; i < M; i++){
        A[i] = new int[2];

    };
    int m = 0;
    for(int a = 0; a < N; a++){
        for(int g = a; g < N; g++){
            if((M1[a][g]) == 1){
               A[m][0] = a + 1;
               A[m][1] = g + 1;
               m++;
            };
        };
    };

    M1 = A;
}

void next_table_to_next_list(int** &M1, vector < vector <int> > &M2 , int N){ //матрица смежности -> список смежности

   for(int a = 0; a < N; a++){
       M2.push_back(vector <int>());
       for(int g = 0; g < N; g++){
        if(M1[a][g] == 1){
            M2[a].push_back(g);
        };
      };
     };

   };


/*
void next_list_to_next_table()//список смежности -> матрица смежности

void next_list_to_ribs_list() //список смежности -> список рёбер

void ribs_list_to_next_list() //список рёбер -> список смежности
*/

int main(){
    int N; cout << "Amount of graph vertexes ";
    cin >> N;
    int M; cout << "Amount of graph edges ";
    cin >> M;

    int** mas_start_fine = new int*[M];

    for(int i = 0; i < M; i++){
        mas_start_fine[i] = new int[2];
        cin >> mas_start_fine[i][0];
        cin >> mas_start_fine[i][1];
        cout << i << " " << mas_start_fine[i][0] << mas_start_fine[i][1] << endl;

    };

    ribs_list_to_next_table(mas_start_fine, N, M);

    for(int i = 0; i < N; i++){
            cout << i;
        for(int g = 0; g < N; g++){
            cout << mas_start_fine[i][g];
        };
     cout << " " << endl;
    };

    next_table_to_ribs_list(mas_start_fine, N, M);

    for(int i = 0; i < M; i++){
           cout << mas_start_fine[i][0] << " " << mas_start_fine[i][1] << endl;
        }

    vector <vector <int> > next_list;

    ribs_list_to_next_table(mas_start_fine, N, M);
    next_table_to_next_list(mas_start_fine, next_list, N);



    }





