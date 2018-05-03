#include <iostream>

using namespace std;

int getMax(int v[],int n)
{
	int max=v[0];
	for (int i=1;i<n;i++)
		if (v[i]>max)
			max =v[i];
	return max;
}

int radixsort(int v[],int n,int exp)

{

	int j[n],i,k[10]={0};


	for(i=0;i<n;i++)
		k[(v[i]/exp)%10]++;


	for(i=1;i<10;i++)
		k[i]+=k[i-1];


	for(i=n-1;i>=0;i--)
	{
		j[k[(v[i]/exp)%10]-1]=v[i];
		k[(v[i]/exp)%10]--;
	}

	for(i =0;i<n;i++)
		v[i]=j[i];
}


int radixsort(int v[],int n)
{
	int exp, m;
	m=getMax(v,n);


	for (exp=1;m/exp>0;exp*= 10)
		radixsort(v,n,exp);
}

int main()
{
	int n,i;
	cout<<"N= ";
	cin>>n;

	int v[n];
	for(i=0;i<n;i++)
	{
		cout<<"introdu element "<<i+1<<": ";
		cin>>v[i];
	}

	radixsort(v, n);


	cout<<"\nElemente sortate ";
	for (i=0;i<n;i++)
		cout<<" "<<v[i];
	return 0;
}
