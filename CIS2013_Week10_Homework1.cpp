#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>
using namespace std;

typedef unsigned char* Bytearray;

void print(unsigned char** board, int x, int y);



int main(){
	
	
	
	int bomb =0;
	int x,y,i,h,w;
	int success;
	int rowGuess,columnGuess;
	bool alive= true;
	srand(time(0));
	
	
		cout << "Please enter board Height: " << endl;
		cin >> x;
		cout << "Please enter board Width: " << endl;
		cin >> y;
		cout << "Please enter number of bombs: " << endl;
		cin >> bomb;
		success=(x*y)-bomb;
		cout<<endl;
		
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
		
		int* bombs = new int[bomb*2];
		int bx,by;
		
		for (int n=0;n < bomb*2; n+=2)
		{
			bx=rand()% x;
			by=rand()% y;
			
			while(1) {
				for (i=0; i < n; i+=2) {
					if (bombs[i] == bx && bombs[i+1] == by)
						
						{bx=rand()%x;
						by=rand()%y;
						break;
						}
				}
				if (i == n)
					break;
			}
			
			bombs[n] = bx;
			bombs[n+1]=by;
		}
		
						
				
	
	print (m, x,y);
	
	
	
	
	
	
		while ((alive)&&(success!=0)){
			cout << endl << "Choose your X and Y coordinates: " << endl;
			cout << "X: ";
			cin >> h;
			cout << "Y: ";
			cin >> w;
			if ((h>=x)||(w>=y)){cout << "invalid respone - choose another: " << endl;}
			else if (m[h][w]=='.'){alive=false;
				m[h][w]='@';}
			else if (m[h][w]!='.'){
				m[h][w] = 'f';
				success--;
			}
			
		}
	for(int n=0; n<bomb * 2; n+=2){	
		
		if (bombs[n] == h && bombs[n+1] == w){
			for(int k = 0; k < bomb * 2; k +=2){
				m[bombs[k+1]][bombs[k]] = 'X';
			}
		m[bombs[n]][bombs[n+1]] = '@';
		}
	}
		
		print(m,x,y);
		

	
	if (success==0){cout << "Winner Winner Chicken Dinner!";
	alive=false;}
	else{cout << "        Better luck next time" << endl;}
		
		
			
		
		
	
	
	
		
	
	
	
	
	
	
	
	
	return 0;
}

 void print(unsigned char** board, int x, int y){


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



