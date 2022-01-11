#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}
void inputMatrix(double I[][N])
{
    for(int i=0 ; i<N ;i++)	
    {
            cout << "Row "<<i+1<<": ";
            for(int j = 0; j<N ; j++)
            {
                cin >> I[i][j];
            }
    }
}

void findLocalMax(const double I[N][N], bool O[N][N])		
{
	for(int i = 0; i<N ; i++)
	{
		for(int j = 0 ; j<N ; j++)
		{
			O[i][j]=false;
		}	
	}
	for(int i = 1; i<N-1 ; i++)
	{
		for(int j = 1 ; j<N-1 ; j++)
		{
			if( I[i][j] >= I[i-1][j] && I[i][j] >= I[i+1][j] && I[i][j] >= I[i][j-1] && I[i][j] >= I[i][j+1] )
			O[i][j]=true;
		}	
	}
}

void showMatrix(const bool O[N][N])
{
	for(int i = 0; i<N ; i++)
	{
		for(int j = 0 ; j<N ; j++)
		{
			cout << O[i][j]<<" ";
		}
		cout << "\n";
	}
}
