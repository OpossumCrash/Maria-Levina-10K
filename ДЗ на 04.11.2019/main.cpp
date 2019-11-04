#include <iostream>
#include <deque>
#include <iterator>

using namespace std;

void ribs_list_to_next_table(int** &M1, bool** &M2, int N, int M){      //список рёбер -> матрица смежности

 bool** A = new bool*[N];
 for(int i = 0; i < N; i++){
    A[i] = new bool [N];
    for(int j = 0; j < N; j++){
        A[i][j] = false;
    };
 };


 for(int j = 0; j < M; j++){
    int s = M1[j][0];
    int f = M1[j][1];
    A[s - 1][f - 1] = true;
    A[f - 1][s - 1] = true;
 };

 M2 = A;
}

void find_Hamilton(deque <int> &H_cycle, bool** H_graph, int N){

   for(int a = 0; a < (N * (N - 1)); a++){
     int v1 = H_cycle.front();
     int v2 = H_cycle.front();
     H_cycle.pop_front();
     H_cycle.pop_front();

      if(H_graph[v1][v2]){
        H_cycle.push_back(v1);
        H_cycle.push_front(v2);
      }
      else
      if(!H_graph[v1][v2]){
            int i = 0;

            while(!((H_graph[v1][H_cycle.at(i)])&&(H_graph[v2][H_cycle.at(i + 1)]))){
              i++;
             };

            for(int t = 0; (2 * t) <= i; t++){
                int vu = H_cycle.at(i - t);
                H_cycle.insert(H_cycle.begin()+(i - t), v2);
                H_cycle.insert(H_cycle.begin()+t, vu);
            };

            H_cycle.push_back(v1);
        };
    };


   }


int main(){
    int N; cout << "Amount of graph vertexes ";
    cin >> N;
    int M; cout << "Amount of graph edges ";
    cin >> M;

    if(M > (N*(N - 1)/2)){
        cout << "Not possible";
        return 0;
    }

    int** mas_start_fine = new int*[M];    //создание заготовки для списка рёбер

    for(int i = 0; i < M; i++){
        mas_start_fine[i] = new int[2];
        cin >> mas_start_fine[i][0];
        cin >> mas_start_fine[i][1];
        cout << i << " " << mas_start_fine[i][0] << mas_start_fine[i][1] << endl;

     };

     bool** table_next = new bool*[N];    //создание заготовки для матрицы смежности

     for(int i = 0; i < N; i++){
        table_next[i] = new bool[N];
     };

    ribs_list_to_next_table(mas_start_fine, table_next, N, M);

    deque <int> H_cycle;
    for(int i = 0; i < N; i++){
        H_cycle.push_front(i + 1);
    }

    find_Hamilton(H_cycle, table_next, N);

    if (!H_cycle.empty()){
        cout << "Hamiltonian cycle: " << endl;
        for(int i = 0; i < N; i++){
            int s = H_cycle.front();
            cout << s << " ";
        }
    }
  return 0;
}
