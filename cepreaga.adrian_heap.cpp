#include<iostream>
using namespace std;
int n,v[100];
int read_data(){
cout<<"n=";cin>>n;
for(int i=1;i<=n;i++){
    cout<<"v["<<i<<"]=";cin>>v[i];
}
}
int make_heap(){
for(int i=2;i<=n;i++){
    int element=v[i];
    int Tata=i/2;
    int Fiul=i;
    while((Tata>=1)&&(v[Tata]<v[Fiul])){
        swap(v[Tata],v[Fiul]);
        Fiul=Tata;
        Tata=Fiul/2;
    }
}
}
int print_data(){
for(int i=1;i<=n;i++){
    cout<<v[i]<<" ";
}
}
int main(){
read_data();
make_heap();
print_data();
}
