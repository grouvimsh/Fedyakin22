#include <iostream>

using namespace std;

int main()
{
int** A, **B, **C;
int size;
std::cout << "Input size"; std::cin >> size;

A = new int* [size];
B = new int* [size];
C = new int* [size];

for (int i=0; i<size; i++) {
A[i] = new int[size];
B[i] = new int[size];
C[i] = new int[size];

}

for (int i=0; i<size; i++) {
for (int j=0; j<size; j++) {
std::cin>>A[i][j];
}
}

for (int i=0; i<size; i++) {
for (int j=0; j<size; j++) {
std::cin>>B[i][j];
}
}


for (int i=0; i<size; i++) {
for (int j=0; j<size; j++) {
C[i][j] = A[i][j] + B[i][j];
}
}

std::cout << "result:" << std::endl;
for (int i=0; i<size; i++) {
for (int j=0; j<size; j++) {
std::cout << C[i][j] << ' ';
}
std::cout << std::endl;
}
std::cout << "End";

for (int i=0; i<size; i++) {
    delete [] A[i];
    delete [] B[i];
    delete [] C[i];
    }
delete [] A;
delete [] B;
delete [] C;
}
