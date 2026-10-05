#include <iostream>
using namespace std;
int main() {
    int n1, n2, n3;
    cout << "Enter three numbers: "<< endl;
    cin>>n1>>n2>>n3;
    double sum = n1+n2+n3;
    double average = sum/3;
    cout<<"average: "<<average<<endl;

    return 0;
}