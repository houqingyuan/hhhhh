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
  cout<<"���ݳ���:";
  cin>>m;
  cout<<"��Χ����:";
  cin>>min;
  cout<<"��Χ����:";
  cin>>max;
  cout<<"��Ϊ:"<<ArraySum(m,min,max);
  return 0;
}
