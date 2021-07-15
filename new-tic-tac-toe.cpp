#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<string.h>

using namespace std;

#define N 3

void frontPage();
void createNewBoard(char[N][N]);

class game{
	int spotTaken=0, compRow, compCol, userRow, userCol, firstMove=1;
	char board[N][N], winner = 'N', difficulty;
	string name = "You", name2 = "Computer";
	public:
		game(){
			frontPage();
			cout<<"\t\tTIC TAC TOE\n";
			srand((int) time (0));
			createNewBoard(board);
		}
};

int main(){
	game g1;
	
	return 0;
}

void frontPage(){
	cout<<"\n*******************************************************************************\n";
	cout<<"\n\n¦¦¦¦¦¦¦¦ ¦¦ ¦¦¦¦¦¦¦     ¦¦¦¦¦¦¦¦  ¦¦¦¦¦  ¦¦¦¦¦¦¦     ¦¦¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦¦ \n   ¦¦    ¦¦ ¦¦             ¦¦    ¦¦   ¦¦ ¦¦             ¦¦    ¦¦    ¦¦ ¦¦      \n   ¦¦    ¦¦ ¦¦             ¦¦    ¦¦¦¦¦¦¦ ¦¦             ¦¦    ¦¦    ¦¦ ¦¦¦¦¦   \n   ¦¦    ¦¦ ¦¦             ¦¦    ¦¦   ¦¦ ¦¦             ¦¦    ¦¦    ¦¦ ¦¦      \n   ¦¦    ¦¦ ¦¦¦¦¦¦¦        ¦¦    ¦¦   ¦¦ ¦¦¦¦¦¦¦        ¦¦     ¦¦¦¦¦¦  ¦¦¦¦¦¦¦ \n                                                                           \n";
	cout<<"\n*******************************************************************************\n";
	cout<<"\n++++++++++++++++++++++++++++\tTEAM MEMBERS\t++++++++++++++++++++++++++++++++\n";
	cout<<"\n\n\t\t--> MANPREET SINGH [Group Leader] : 20BCS6444"<<endl;
	cout<<"\n\t\t--> NRIPESH KUMAR : 20BCS6465"<<endl;
	cout<<"\n\t\t--> SHREYA KOHLI  : 20BCS6451\n\n"<<endl;
	cout<<"Press any key to continue";
	getchar();
	system("cls");
}

void createNewBoard(char arr[N][N]){
	cout<<endl;
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			arr[i][j]=' ';
		}
	}
	for(int i =0 ; i<3 ; i++){
		cout<<"\t\t";
		for(int j=0 ; j<3 ; j++){
			if(j<2)
			cout<<" "<<arr[i][j]<<" | ";
			else
			cout<<" "<<arr[i][j]<<endl;
		}
		if(i<2)
		cout<<"\t\t-----------\n";
	}
}
