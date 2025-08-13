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

    int mat[x][y];

    cout<<"Enter elements of matrix: "<<endl;

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

    int diag_sum=0;
    if(x==y){
        for(int i=0; i<x; i++){
                diag_sum+=mat[i][i];
        }
        cout<<"Sum of Diagonal Elements is: "<<diag_sum;
    }

    else{
        cout<<"Diagonal elements sum not possible.";
    }

    return 0;

}

/*
Output:
Enter the no.of rows: 3
Enter the no.of columns: 3
Enter elements of matrix: 
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
Sum of Diagonal Elements is: 15
*/
