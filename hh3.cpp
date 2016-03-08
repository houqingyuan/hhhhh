#include<iostream>
#include<fstream>
using namespace std;


int ArraySum(int m,int min,int max)
{
	int *a;
	int sum=0;
	a=new int[m];
	ifstream in("sunshine2.txt");
	for(int i=min;in>>a[i],i<=max;i++)
	sum+=a[i];
	in.close();
	return sum;
}

int main(void)
{ int m,min,max;
  cout<<"数据长度:";
  cin>>m;
  cout<<"范围下限:";
  cin>>min;
  cout<<"范围上限:";
  cin>>max;
  cout<<"和为:"<<ArraySum(m,min,max);
  return 0;
}
