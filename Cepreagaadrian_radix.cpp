#include<iostream>
using namespace std;
int M[100];
int n;
int v0[100],v1[100],v2[100],v3[100],v4[100],v5[100],v6[100],v7[100],v8[100],v9[100];
int i0,j0;
int i1,j1;
int i2,j2;
int i3,j3;
int i4,j4;
int i5,j5;
int i6,j6;
int i7,j7;
int i8,j8;
int i9,j9;

int read_data()
{
  cout<<"n=";cin>>n;
  for(int i=1;i<=n;i=i+1)
  {
      cout<<"M["<<i<<"]=";
      cin>>M[i];
  }
}

int fill_q(int name_q,int rang)
{
    i0=1;j0=0;
     for(int i=1;i<=n;i++)
     {if(M[i]%10==0){
           j0++;
           v0[j0]=M[i];}
     }
     i1=1;j1=0;
     for(int i=1;i<=n;i++)
     {if(M[i]%10==0){
           j1++;
           v1[j1]=M[i];}}

       i2=1;j2=0;
     for(int i=1;i<=n;i++)
     {if(M[i]%10==0){
           j2++;
           v2[j2]=M[i];}}

        i3=1;j3=0;
     for(int i=1;i<=n;i++)
     {if(M[i]%10==0){
           j3++;
           v3[j3]=M[i];}}

         i4=1;j4=0;
     for(int i=1;i<=n;i++)
     {if(M[i]%10==0){
           j1++;
           v0[j0]=M[i];}}

          i5=1;j5=0;
     for(int i=1;i<=n;i++)
     {if(M[i]%10==0){
           j5++;
           v5[j5]=M[i];}}

            i6=1;j6=0;
     for(int i=1;i<=n;i++)
     {if(M[i]%10==0){
           j6++;
           v6[j6]=M[i];}}

            i7=1;j7=0;
     for(int i=1;i<=n;i++)
     {if(M[i]%10==0){
           j7++;
           v7[j7]=M[i];}}

            i8=1;j8=0;
     for(int i=1;i<=n;i++)
     {if(M[i]%10==0){
           j8++;
           v8[j8]=M[i];}}

            i9=1;j9=0;
     for(int i=1;i<=n;i++)
     {if(M[i]%10==0){
           j9++;
           v9[j9]=M[i];}}


     for(int j=100;j<=n;j=j*10){
    i0=1;j0=0;
     for(int i=1;i<=n;i++)
     {if(M[i]%j==0){
           j0++;
           v0[j0]=M[i];}
     }
     i1=1;j1=0;
     for(int i=1;i<=n;i++)
     {if(M[i]%j==0){
           j1++;
           v1[j1]=M[i];}}

       i2=1;j2=0;
     for(int i=1;i<=n;i++)
     {if(M[i]%j==0){
           j2++;
           v2[j2]=M[i];}}

        i3=1;j3=0;
     for(int i=1;i<=n;i++)
     {if(M[i]%j==0){
           j3++;
           v3[j3]=M[i];}}

         i4=1;j4=0;
     for(int i=1;i<=n;i++)
     {if(M[i]%10==0){
           j1++;
           v0[j0]=M[i];}}

          i5=1;j5=0;
     for(int i=1;i<=n;i++)
     {if(M[i]%10==0){
           j5++;
           v5[j5]=M[i];}}

            i6=1;j6=0;
     for(int i=1;i<=n;i++)
     {if(M[i]%10==0){
           j6++;
           v6[j6]=M[i];}}

            i7=1;j7=0;
     for(int i=1;i<=n;i++)
     {if(M[i]%10==0){
           j7++;
           v7[j7]=M[i];}}

            i8=1;j8=0;
     for(int i=1;i<=n;i++)
     {if(M[i]%10==0){
           j8++;
           v8[j8]=M[i];}}

            i9=1;j9=0;
     for(int i=1;i<=n;i++)
     {if(M[i]%j==0){
           j9++;
           v9[j9]=M[i];}}
}
int print_q(int name_q)
{
switch (name_q)
{
 case 0:{
                for(int i=i0;i<=j0;i++) cout<<v0[i]<<" ";
                break;
            }
 case 1:{
                for(int i=i1;i<=j1;i++) cout<<v1[i]<<" ";
                break;
            }
case 2:{
                for(int i=i2;i<=j2;i++) cout<<v2[i]<<" ";
                break;
            }
case 3:{
                for(int i=i3;i<=j3;i++) cout<<v3[i]<<" ";
                break;
            }
case 4:{
                for(int i=i4;i<=j4;i++) cout<<v4[i]<<" ";
                break;
            }
case 5:{
                for(int i=i5;i<=j5;i++) cout<<v5[i]<<" ";
                break;
            }
case 6:{
                for(int i=i6;i<=j6;i++) cout<<v6[i]<<" ";
                break;
            }
case 7:{
                for(int i=i7;i<=j7;i++) cout<<v7[i]<<" ";
                break;
            }
case 8:{
                for(int i=i8;i<=j8;i++) cout<<v8[i]<<" ";
                break;
            }
case 9:{
                for(int i=i9;i<=j9;i++) cout<<v9[i]<<" ";
                break;
            }

}
}

int main()
{
read_data();
fill_q(0,0);
print_q(0);
}
