//MergSort - float
#include <iostream>
using namespace std;

int merge(float* pfaA, int p, int q,int r)
{
    if(p>=q) return 1;
    //    int n1=p-q;
    // int n2=
    cout << "In func merge main arr : " << endl;
    cout << "p=" << p << " q=" << q << " r=" << r << endl;
    float* pfaAtemp=pfaA;
    cout << "pfaAtem=" << *pfaAtemp << endl;
    for(int i=p; i <=r; i++) {
        cout << *pfaAtemp << endl;
        pfaAtemp++;
    }
        
    float* pfaN1=new float[q+2-p];
    float* pfaN2=new float[r+1-q];
    //float* pfaAtemp=pfaA+p;
    pfaAtemp=pfaA;
    cout << "pfaAtem=" << *pfaAtemp << endl;
    for (int i=0; i < p;i++) pfaAtemp++;
    cout << " before N1 init -- " << *pfaAtemp <<  endl;
    float* pfaN1temp=pfaN1;
    cout << "in N1 init :" << endl;
    for(int i=p; i<=q; i++) {
        cout << *pfaAtemp << endl;
        *pfaN1temp=*pfaAtemp;
        pfaN1temp++;
        pfaAtemp++;
    }
    //pfaAtemp=pfaA+q+1;
    pfaAtemp=pfaA;
    cout << "pfaAtem=" << *pfaAtemp << endl;
    for (int i=0; i <=q;i++) pfaAtemp++;
    cout << " before N2 init -- " << *pfaAtemp <<  endl;
    float* pfaN2temp=pfaN2;
    cout << "in N2 init :" << endl;
    for(int i=q+1; i<=r; i++) {
        cout << *pfaAtemp << endl;
        *pfaN2temp=*pfaAtemp;
        pfaN2temp++;
        pfaAtemp++;
    }
    pfaN1temp=pfaN1;
    cout << "N1 :" << endl;
    for(int i=0; i<=(q-p+1); i++) {
        cout << *pfaN1temp << endl;
        pfaN1temp++;
    }
    pfaN2temp=pfaN2;
    cout << "N2 :" << endl;
    for(int i=0; i<=(r-q); i++) {
        cout << *pfaN2temp << endl;
        pfaN2temp++;
    }
    delete pfaN1;
    delete pfaN2;
    return 0;
};

int main(int argc, char **argv)
{
    float* pfaArr=new float[10];
    float* pfaAtemp=pfaArr;
    for (int i=0; i<10; i++) {
        *pfaAtemp=(1+i)*1.001;
        pfaAtemp++;
    }
    std::cout << "Hello World" << std::endl;
    pfaAtemp=pfaArr;
    for(int i=0; i<10; i++) {
        cout << *pfaAtemp << endl;
        pfaAtemp++;
    }
    merge(pfaArr,2,5,8);
    pfaAtemp=pfaArr;
    for(int i=0; i<10; i++) {
        cout << *pfaAtemp << endl;
        pfaAtemp++;
    }
    delete pfaArr;
    return 0;
}
