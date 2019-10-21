#include <iostream>
#include <vector>

using namespace std;

//доделать команды 2,3,4
//доделать формирование вектора векторов list_next


void ribs_list_to_next_table(int** &M1, int** &M2, int N, int M){      //список рёбер -> матрица смежности

 int** A = new int*[N];
 for(int i = 0; i < N; i++){
    A[i] = new int [N];
    for(int j = 0; j < N; j++){
        A[i][j] = 0;
    };
 };


 for(int j = 0; j < M; j++){
    int s = M1[j][0];
    int f = M1[j][1];
    A[s - 1][f - 1] = 1;
    A[f - 1][s - 1] = 1;
 };

 M2 = A;
}
void next_table_to_ribs_list(int** &M1, int** &M2, int N, int M){ //матрица смежности -> список рёбер

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

    M2 = A;
}

void next_table_to_next_list(int** &M1, vector < vector <int> > &M2 , int N){ //матрица смежности -> список смежности

   for(int a = 0; a < N; a++){
       M2.push_back(vector <int>());

       for(int g = 0; g < N; g++){
        if(M1[a][g] == 1){
            M2[a + 1].push_back(g + 1);
        };
       };
       cout << a + 1 << " ";
       for(int g = 0; g < N; g++){
        cout << "{" << M2[a][g] << " ";
       }
       cout << "}" << endl;
   };

}

void ribs_list_to_next_list(int** &M1, vector <vector <int> > &M2, int N, int M){    //список рёбер -> список смежности

  for(int a = 0; a < N; a++){
       M2.push_back(vector <int>());
       M2[a].resize(N);
  };

  for(int g = 0; g < M; g++){

       int s = M1[g][0];
       int f = M1[g][1];
       M2[s - 1].push_back(f);
       M2[f - 1].push_back(s);

  };

};



/*
void next_list_to_next_table()//список смежности -> матрица смежности

void next_list_to_ribs_list() //список смежности -> список рёбер

*/

int main(){
    int N; cout << "Amount of graph vertexes ";
    cin >> N;
    int M; cout << "Amount of graph edges ";
    cin >> M;
    if(M >= (N*(N - 1)/2)){
        cout << "Not possible";
        return 0;
    }

    int command;

    cout << " № 1 - from edge list to adjacency matrix" << endl;
    cout << " № 2 - from edge list to adjacency list" << endl;
    cout << " № 3 - from adjacency list to adjacency matrix" << endl;
    cout << " № 4 - from adjacency list to edge list" << endl;
    cout << " № 5 - from adjacency matrix to edge list" << endl;
    cout << " № 6 - from adjacency matrix to adjacency list" << endl;
    cout << "Enter the number of command";
    cin >> command;

    int** mas_start_fine = new int*[M]; //создание заготовки для списка рёбер
     for(int i = 0; i < M; i++){
        mas_start_fine[i] = new int[2];
     };

    int** table_next = new int*[N];     //создание заготовки для матрицы смежности
     for(int i = 0; i < N; i++){
        table_next[i] = new int[N];
     };

    vector <vector <int> > list_next;   //создание заготовки для списка смежности

    if((command == 1) || (command == 2)) {

       for(int i = 0; i < M; i++){
        cin >> mas_start_fine[i][0];
        cin >> mas_start_fine[i][1];
        cout << i << " " << mas_start_fine[i][0] << mas_start_fine[i][1] << endl;

       };
       if (command ==1){
        ribs_list_to_next_table(mas_start_fine, table_next, N, M);

        cout << "Adjacency matrix:" << endl;

        for(int i = 0; i < N; i++){
           cout << i+1 << " ";
          for(int g = 0; g < N; g++){
             cout << table_next[i][g];
          };
          cout << " " << endl;
        };
       }

       else if(command == 2){
         cout << "Adjacency list:" << endl;
         ribs_list_to_next_list(mas_start_fine, list_next, N, M);

         for(int g = 0; g < N; g++){
          cout << g + 1 << " " << "{" ;
          for(int a = 0; a < N; a++){
            if(list_next[g][a + 1] != 0)
             cout << list_next[g][a] << " ";
          };
          cout << "}" << endl;
          };
        }
     };

  /*  if((command == 3)||(command == 4)){

        for(int a = 0; a < N; a++){
            M2.push_back(vector <int>(N));

            for(int i = 0; i < N; i++){
              int v; cin >> v;
              M2[a].push_back(v);
            };
        };

        if(command ==3){

          next_list_to_next_table();
          cout << "Adjacency matrix:" << endl;

          for(int i = 0; i < N; i++){
            cout << i+1 << " ";
           for(int g = 0; g < N; g++){
             cout << table_next[i][g];
           };
          cout << " " << endl;
          };

        };
        else if(command == 4){
         next_list_to_ribs_list();
         cout << "Edges list:" << endl;

         for(int i = 0; i < M; i++){
           cout << mas_start_fine[i][0] << " " << mas_start_fine[i][1] << endl;
         };
        };
    }*/
    if((command == 5)||(command == 6)){

      for(int i = 1; i <= N; i++){
        cout << i << " ";
      };

      for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << i + 1 << " ";
            cin >> table_next[i][j];
        }
      }

      if(command == 5){
       next_table_to_ribs_list(table_next, mas_start_fine, N, M);

       cout << "Edges list:" << endl;

       for(int i = 0; i < M; i++){
           cout << mas_start_fine[i][0] << " " << mas_start_fine[i][1] << endl;
        };
      }
      else if (command == 6){
         cout << "Adjacency list:" << endl;
         next_table_to_next_list(table_next, list_next, N);
      };
     };

    return 0;
    }





