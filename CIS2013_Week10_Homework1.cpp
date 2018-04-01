#include <iostream>
#include <cstring>
using namespace std;

typedef int* IntArrayPtr;

int main(){
	
	//bool gameover=false;
	int x,y;
	int bombs =0;
	//srand((unsigned)time(0));
	
	//while (gameover=false){
	
		cout << "Please enter board Height: " << endl;
		cin >> x;
		cout << "Please enter board Width: " << endl;
		cin >> y;
		cout << "Please enter number of bombs: " << endl;
		cin >> bombs;
		
		IntArrayPtr *m = new IntArrayPtr[x];
		int i,j;
		for (i=0; i < x; i++)
			m[i] = new int[y];
		
		cout << "       Welcome to Minesweeper." << endl;
		for (i=0; i< x; i++){
			for(j=0; j < y; j++)
				cout << m[i][j] << " ";
			cout << endl;
		}
	
	
	//}	
		
	
	
	
	
	
	
	
	
	return 0;
}
