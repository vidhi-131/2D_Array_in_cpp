// Vidhi Ratan
// 24070123131
// B2
#include<iostream>
using namespace std;

int main(){
    int x, y;

    cout<<"Enter the number of rows: ";
    cin>>x;

    cout<<"Enter the number of columns: ";
    cin>>y;

    int mat[x][y];

    cout<<"Enter elements of Matrix: "<<endl;

    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            cin>>mat[i][j];
        }
    }
    cout<<" Matrix is:"<<endl;
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            cout<<mat[i][j]<<"\t";
        }
        cout<<endl;
    }


    return 0;

}

/*
Output:
Enter the number of rows: 3
Enter the number of columns: 3
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
*/
