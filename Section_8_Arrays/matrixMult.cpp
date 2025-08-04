#include <iostream>
using namespace std;

int main() {
    int rowsA, colsA, rowsB, colsB;
    cout << "Enter rows and columns for first matrix: ";
    cin >> rowsA >> colsA;
    cout << "Enter rows and columns for second matrix: ";
    cin >> rowsB >> colsB;
    if (colsA != rowsB) {
        cout << "Matrix multiplication not possible!" << endl;
        return 1;
    }
    int A[rowsA][colsA], B[rowsB][colsB], C[rowsA][colsB];
    cout << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < rowsA; i++)
        for (int j = 0; j < colsA; j++)
            cin >> A[i][j];
    
    cout << "Enter elements of second matrix:" <<endl;
    for (int i = 0; i < rowsB; i++)
        for (int j = 0; j < colsB; j++)
            cin >> B[i][j];

    for (int i = 0; i < rowsA; i++){
        for (int j = 0; j < colsB; j++){
            int sum = 0;
            for (int z = 0; z < colsA; z++){
                sum += A[i][z] * B[z][j];
            }
            C[i][j] = sum;
        }
    }
    cout<<"Elements of third matrix"<<endl;
    for (int i = 0; i < rowsA; i++){
        for (int j = 0; j < colsB; j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
}
