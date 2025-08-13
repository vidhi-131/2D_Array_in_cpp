// Vidhi Ratan
// 24070123131
// B2
#include<iostream>
using namespace std;

int main(){

    int x1, y1;

    cout<<"Enter the no.of rows of matrix 1: ";
    cin>>x1;

    cout<<"Enter the no.of columns of matrix 1: ";
    cin>>y1;

    int mat1[x1][y1];

    cout<<"Enter elements of matrix 1: "<<endl;

    for(int i=0; i<x1; i++){
        for(int j=0; j<y1; j++){
            cin>>mat1[i][j];
        }
    }


    int x2, y2;

    cout<<"Enter the no.of rows of matrix 2: ";
    cin>>x2;

    cout<<"Enter the no.of columns of matrix 2: ";
    cin>>y2;

    int mat2[x2][y2];

    cout<<"Enter elements of matrix 2:"<<endl;

    for(int i=0; i<x2; i++){
        for(int j=0; j<y2; j++){
            cin>>mat2[i][j];
        }
    }

     cout<<"Matrix 1 is:"<<endl;
    for(int i=0; i<x1; i++){
        for(int j=0; j<y1; j++){
            cout<<mat1[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<"Matrix 2 is:"<<endl;
    for(int i=0; i<x2; i++){
        for(int j=0; j<y2; j++){
            cout<<mat2[i][j]<<"\t";
        }
        cout<<endl;
    }

    int mat_prod[100][100];

    if(x2==y1){
    for(int i=0; i<x1; i++){
        for(int j=0; j<y1; j++){
            for(int w=0; w<y2; w++){
            mat_prod[i][w]+=mat1[i][j]*mat2[j][w];
            }
        }
    }
}
else{
    cout<<"Multiplication not possible.";
}
    cout<<"Multiplication of Matrices is:"<<endl;
    for(int i=0; i<x1; i++){
        for(int j=0; j<y2; j++){
            cout<<mat_prod[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;

}

/*
Output:
Enter the no.of rows of matrix 1: 3
Enter the no.of columns of matrix 1: 3
Enter elements of matrix 1: 
1
2
3
4
5
6
7
8
9
Enter the no.of rows of matrix 2: 3
Enter the no.of columns of matrix 2: 3
Enter elements of matrix 2:
11
12
13
14
15
16
17
18
19
Matrix 1 is:
1	2	3	
4	5	6	
7	8	9	
Matrix 2 is:
11	12	13	
14	15	16	
17	18	19	
Multiplication of Matrices is:
90	96	102	
216	231	246	
342	366	390	
*/
