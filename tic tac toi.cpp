#include<iostream>
#include<ctime>
using namespace std;


void drawboard( char* space);

void playermove(char *space,char player){
	int number;
	do{
		cout<<"enter anumber ";
		cin>>number;
		number--;
		if(space[number]==' '){
			space[number]=player;
			break;
		}
	}while(!number>0||!number<8);
	
}

void computermove(char *space , char computer){
	int number;
	srand(time(0));
	while(true){
		number=rand()%9;
		if(space[number]==' '){
			space[number]=computer;
			break;
		}
	}
	


	
}

bool checkwinner(char *space , char player,char computer){
	if(space[0]==space[1]&&space[1]==space[2]&&space[1]!=' '){ 
	space[1]==player?cout<<"YOU WIN ":cout<<"YOU LOSE";

	
	}
	
	  else	if(space[3]==space[4]&&space[3]==space[5]&&space[3]!=' '){ 
	space[1]==player?cout<<"YOU WIN ":cout<<"YOU LOSE";
	
	
	}
	 else	if(space[6]==space[7]&&space[6]==space[8]&&space[6]!=' '){ 
	space[6]==player?cout<<"YOU WIN ":cout<<"YOU LOSE";
	
	
	}
	 else	if(space[0]==space[4]&&space[0]==space[8]&&space[0]!=' '){ 
	space[0]==player?cout<<"YOU WIN ":cout<<"YOU LOSE";
	
	
	}
    	else if(space[2]==space[4]&&space[2]==space[6]&&space[2]!=' '){ 
	space[2]==player?cout<<"YOU WIN ":cout<<"YOU LOSE";
	
	
	}
		else if(space[0]==space[3]&&space[0]==space[6]&&space[0]!=' '){ 
	space[0]==player?cout<<"YOU WIN ":cout<<"YOU LOSE";
	
	
	}
		else if(space[1]==space[4]&&space[1]==space[7]&&space[1]!=' '){ 
	space[1]==player?cout<<"YOU WIN ":cout<<"YOU LOSE";
	
	
	}
		else if(space[2]==space[5]&&space[2]==space[8]&&space[2]!=' '){ 
	space[2]==player?cout<<"YOU WIN ":cout<<"YOU LOSE";

	}
	
	else { 
	return false;
	}
	
return 0;	
}
bool checktie(char * space) {
	
	
return 0;	
}

int main(){

char space[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
char player='X';
char computer='O';
bool running=true;

      drawboard(space);
	while(running){
		playermove(space,player);
	drawboard(space);
		computermove(space ,  computer);
			drawboard(space);
			checkwinner(space , player, computer);
		
	}
	
	
	return 0;
}
void drawboard( char *space){
	cout<<"     |     |     \n";
	cout<<"  "<<space[0]<<"  |  "<<space[1]<<"  |  "<<space[2]<<" "<<"\n";
	
	cout<<"_____|_____|_____\n";
	cout<<"  "<<space[3]<<"  |  "<<space[4]<<"  |  "<<space[5]<<" "<<"\n";
	
	cout<<"     |     |     \n";
	cout<<"_____|_____|_____\n";
	cout<<"     |     |     \n";
	cout<<"     |     |     \n";
	cout<<"  "<<space[6]<<"  |  "<<space[7]<<"  |  "<<space[8]<<" "<<"\n";
	
}