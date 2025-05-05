#include<iostream>

using namespace std;
void display0(char arr[3][3]){
	 
cout<<"\t\t\t      |     |     \n";
	cout<<"\t\t\t  "<<arr[0][0] <<"   |  "<<arr[0][1] <<"  |  "<<arr[0][2] <<"  \n";
	
	cout<<"\t\t\t _____|_____|_____\n";
	cout<<"\t\t\t      |     |     \n";
	cout<<"\t\t\t  "<<arr[1][0] <<"   |  "<<arr[1][1] <<"  |  "<<arr[1][2] <<"  \n";
	
	cout<<"\t\t\t _____|_____|_____\n";
	cout<<"\t\t\t      |     |     \n";
	cout<<"\t\t\t  "<<arr[2][0] <<"   |  "<<arr[2][1] <<"  |  "<<arr[2][2] <<"  \n";
	
	cout<<"\t\t\t      |     |     \n";

}

bool check(char arr[3][3]){
	
  	for(int i=0;i<3;i++)
  	{if((arr[i][0]==arr[i][1] && arr[i][0]==arr[i][2]) || (arr[0][i]==arr[1][i] && arr[0][i]==arr[2][i]))
  	return true;
	}
	  if((arr[0][0]==arr[1][1]&&arr[0][0]==arr[2][2]) || (arr[0][2]==arr[1][1] && arr[2][0]==arr[1][1]))
  	return true;
  	
  		return false;
}
int display1( int n, char arr[3][3]){
	
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
if (arr[i][j] == (char)(n + '0')) {
                arr[i][j] = 'X';
				display0(arr);
				check(arr);
				return 0;
            }
    }
}
}

int display2( int n, char arr[3][3]){
	
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
if (arr[i][j] == (char)(n + '0')) {
                arr[i][j] = 'O';
				display0(arr);
				check(arr);
				return 0;
            }
    }
}
}
void resetarr(char arr[3][3]) {
    char num = '1';
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arr[i][j] = num++;
        }
    }
}
bool checkDraw(char arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            
            if (arr[i][j] >= '1' && arr[i][j] <= '9') {
                return false;
            }
        }
    }
    
    return true;
}
void clearScreen() {
    #ifdef _WIN32
        system("cls"); // For Windows
    #else
        system("clear"); // For Mac/Linux
    #endif
}
bool verify(int a){
          if(a<=9 && a>=1){
			
			return true;
		  } else{
			cout<<" Enter the Valid Number!";
		 return false;
}
}
int main(){
    char arr[3][3]={{'1','2','3',},{'4','5','6',},{'7','8','9',},};
int a,b, i=0, k=1;
cout<<"                       WELCOME TO TIC-TACK-TOE - RRC\n\n";
cout<<"  INSTRUCTIONS:\n - Select a number (1-9) to mark your move.\n - First player to align it's symbol in vertical, horizontal or diagonally wins!\n - If all positions are filled with no winner, it's a draw. \n\n";
cout<<"  Note: If you press the used number again than you will miss your chance.\n\n";
cout<<"  Player 1: 'X' (Cross)\n  Player 2: 'O' (Circle) \n\n";

display0(arr);

while(i!=1){
while(k==1){
cout<<"\n  Player 1[X] Turn : ";
cin>>a;
if(verify(a)){
	k++;
} 
}
k--;
clearScreen();
display1(a, arr);
if(check(arr)){
	cout<<"\n CONGRATULATIONS! Player 1";
	cout<<"\n Continue Playing(Enter 1 for YES, 0 for NO) ";
	cin>>b;
	
	if(b==1){
   resetarr(arr);
   clearScreen();
   display0(arr);
	} else {
		cout<<"Thank You for playing, See you soon";
return 0;
	}
	
}
if(checkDraw(arr)){
cout<<"\n OOPS! It's a Draw. ";
cout<<"\n Continue Playing ?(Enter 1 for YES, 0 for NO) ";
	cin>>b;
	
	if(b==1){
   resetarr(arr);
   clearScreen();
   display0(arr);
	} else {
		cout<<"Thank You for playing, See you soon";
return 0;
	}
	
}

   while(k==1){ 
cout<<"\n  Player 2[O] Turn : ";
cin>>a;  
if(verify(a)){
	k++;
} 
   }
   k--;
clearScreen();
display2(a, arr);

if(check(arr)){
	
	cout<<"\n CONGRATULATIONS! Player 2";
	cout<<"\n Continue Playing ?(Enter 1 for YES, 0 for NO) ";
	cin>>b;
	if(b==1){
	resetarr(arr);
	clearScreen();
	 display0(arr);
	} else {
		cout<<"Thank You for playing, See you soon";
		return 0;
	}
}
if(checkDraw(arr)){
cout<<"\n OOPS! It's a Draw";
cout<<"\n Continue Playing(Enter 1 for YES, 0 for NO) ";
	cin>>b;
	
	if(b==1){
   resetarr(arr);
   clearScreen();
   display0(arr);
	} else {
		cout<<"Thank You for playing, See you soon";
return 0;
	}
	
}
}
}