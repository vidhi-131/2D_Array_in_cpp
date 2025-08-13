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

    int mat_sum[x1][y1];
    if(x1==y2 && y1==x2){
        for(int i=0; i<x1; i++){
            for(int j=0; j<y1; j++){
        mat_sum[i][j]=mat1[i][j]+mat2[i][j];
            }
        }
    }
    else{
        cout<<"Addition can't be performed.";
    }

    cout<<"Sum of Matrices is:"<<endl;
    for(int i=0; i<x1; i++){
        for(int j=0; j<y1; j++){
            cout<<mat_sum[i][j]<<"\t";
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
Sum of Matrices is:
12	14	16	
18	20	22	
24	26	28	
*/
