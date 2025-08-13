// Vidhi Ratan
// 24070123131
// B2
#include<iostream>
using namespace std;
int main(){

    int x, y;

    cout<<"Enter the no.of rows: ";
    cin>>x;

    cout<<"Enter the no.of columns: ";
    cin>>y;

    int mat[x][y], mat_T[y][x];

    cout<<"Enter elements of matrix: "<< endl;

    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            cin>>mat[i][j];
        }
    }
    cout<<"Matrix is:"<<endl;
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            cout<<mat[i][j]<<"\t";
        }
        cout<<endl;
    }

    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            mat_T[i][j]=mat[j][i];
        }
    }
    cout<<"Transpose of Matrix is:"<<endl;
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            cout<<mat_T[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;

}

/*
Output:
Enter the no.of rows: 3
Enter the no.of columns: 3
Enter elements of Matrix: 
1
2
3
4
5
6
7
8
9
Matrix is:
1	2	3	
4	5	6	
7	8	9	
Transpose of Matrix is:
1	4	7	
2	5	8	
3	6	9
*/
