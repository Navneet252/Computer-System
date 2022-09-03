#include<bits/stdc++.h>
using namespace std;
int main()
{

	
	vector<vector<double>> X(5000,vector<double>(5000)),Y(5000,vector<double>(5000)),Z(5000,vector<double>(5000));
	
	int a=1024;
	clock_t time;

	for(int i=1; i < a; ++i)
	for ( int j = 1; j < a; ++j)
	{
		X[i][j]=i;
		Y[i][j]=j;
	}


	time = clock();
	for (int i = 1; i<=a; ++i)
	{
		for (int j = 1; j <=a; ++j)
		{   
			Z[i][j]=0;
			for (int k = 1; k <=a; ++k)
			{
				Z[i][j]+= X[i][k] * Y[k][j];
			}
		}
	}
	time = clock() - time;

	cout<< "Time for Multiplication "<< (float)time/CLOCKS_PER_SEC << " sec\n";	


	return 0;
}