#include <iostream>
#include <cstring>
#include <time.h>
using namespace std;

typedef unsigned char* Bytearray;

void print(unsigned char** board, int x, int y);

int main(){
	
	
	
	int bombs =0;
	int x,y,i;
	
	
	
	
		cout << "Please enter board Height: " << endl;
		cin >> x;
		cout << "Please enter board Width: " << endl;
		cin >> y;
		cout << "Please enter number of bombs: " << endl;
		cin >> bombs;
		
		cout << "			Time to play Minesweeper!" << endl;
		cout << "                                     "<< endl;
		Bytearray *m = new Bytearray[y];
		
		for (int i = 0; i < y; i++)
		m[i] = new unsigned char[x];
	
		for (int i = 0; i < y; i++)
	{
		for (int j = 0;j < x; j++)
		{
			m[i][j] = '.';
		}
	}
		
		int* bomb = new int [bombs*2];
		int bx,by;
		
		for (int n=0; n < bombs*2; n+=2)
		{
			bx = rand() % x;
			by = rand() % y;
			
			while (1) {
				int i;
				for(i=0; i<n; i+=2){
					
					if (bombs[i] == bx && bombs[i+1] == by)
					
					{bx=rand() % x;
					by=rand() % y;
					break;
					}
					
				}
				if(i==n)
					break;
			}
						
				
	
	print(m, x, y);
	
	
		
		
			
		
		
	
	
	
		
	
	
	
	
	
	
	
	
	return 0;
}

 void print(unsigned char** board, int x, int y)
{

	cout << '\t';
	for (int i = 0; i < x;i++)
	{
		cout << i << ' ';
	}
	cout << '\n';
	for (int i = 0; i < y; i++)
	{
		cout << i << '\t';
		for (int j = 0; j < x;j++)
		{
			cout << board[i][j] << ' ';
		}
		cout << '\n';
	}
}



