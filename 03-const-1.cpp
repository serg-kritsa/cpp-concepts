#include<iostream>
using namespace std;

int main(){
    const int a = 1; // int const a = 1 // the same
    // a=2; // not allowed to change value
    cout  <<  a << endl;
    // ==============================================
    
    int b = 1; // int const a = 1 // the same
    int *ptrb=&b;
    ++*ptrb;


    const int c = 1; // int const a = 1 // the same
    // int *ptrc=&c; // not allowed // invalid conversion from 'const int*' to 'int*'


    const int d = 1; // int const a = 1 // the same
    const int *ptrd=&d;
    // ++*ptrd; // not allowed // increment of read-only location '* ptrd'

    // b=2; // not allowed to change value
    cout <<  *ptrb << " " << b << endl;
    // ==============================================
    int x = 10;
    int const *ptrx = &x;
    int xx = 20;
    ptrx = &xx; // allowed to change address
    // ++*ptr1; // not allowed // increment of read-only location '* ptr1'


    int y = 10;
    int * const ptry = &y;
    ++*ptry; // allowed
    int yy = 20;
    // ptry = &yy; // not allowed to move/change address
    
    int z = 0;
    const int * const ptrz = &z;
    // ++*ptrz; // not allowed to change value
    int zz = 20;
    // ptrz = &zz; // not allowed to move/change address

}
    
