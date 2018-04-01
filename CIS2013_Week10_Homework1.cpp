#include <iostream>
#include <cstring>
#include <time.h>
using namespace std;

void boardxprint (int i){
	cout << i;
	if (i<10){
		cout << " ";
	}
}
	
void boardyprint (int i){
	cout<< "__";
}

int main(){
	
	//bool gameover=false;
	int boardx,boardy;
	int bombs =0;
	int x,y;
	srand(time(null));
	
	//while (gameover=false){
	
		cout << "Please enter board Height: " << endl;
		cin >> boardx;
		cout << "Please enter board Width: " << endl;
		cin >> boardy;
		cout << "Please enter number of bombs: " << endl;
		cin >> bombs;
		
		cout << "       Time to play minesweeper." << endl;
		cout << endl << "                        ";
		for (int x =0; x <boardx; x++){
				boardxprint(x);
		}
		cout << endl;
		for (int y=0; y < boardy; y++){
			boardyprint(x);
		}
			
		
		
	
	
	
		
	
	
	
	
	
	
	
	
	return 0;
}
