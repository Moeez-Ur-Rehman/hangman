#include<iostream>
#include<cstdlib>//to include random
#include<fstream>//to include file
#include<ctime>//
#include<string>//to include string
using namespace std;
int main()
{
	//start screen
	cout<<"|          }             |"<<endl;
	cout<<"|          O             |"<<endl;
	cout<<"|          |             |"<<endl;	
	cout<<"|          |             |"<<endl;
	cout<<"|        / | \\           |"<<endl;
	cout<<"|       /  |  \\          |"<<endl;
	cout<<"|          |             |"<<endl;
	cout<<"|          |             |"<<endl;
	cout<<"|        /   \\           |"<<endl;
	cout<<"|       /     \\          |"<<endl;
	char start;
	cout<<"       HANG MAN GAME !!!!!  "<<endl;
	cout<<endl;
	cout<<"Enter any key to start and press enter : ";
	cin>>start;
	cout<<endl;
	//game
	//set variables used throughout the game
	int tries=6;
	char guess;
	bool isfound=false;
	string word;//the word player has to guess
	string wordlist[99];//is an array of 100 strings
	//get random word
	srand (time(NULL));//Creates a random seed used to get a random word from array above 
	ifstream randomword;//this file stream reads in the variable
	randomword.open("words.txt");//Reads in this file list of words
	for(int i=0;i<99;i++)
	{
		randomword>>wordlist[i];//store the word from the list in the array
	}
	int RandomNum=rand()%100;//returns a random number 0 to 99
	word=wordlist[RandomNum];//put the random word the the word string
	//cout<<word<<endl;
	randomword.close();
	//Mystery word
	string Mysteryword(word.length(),'*');//this function takes the The word and print *s equal to the length of the word
	//cout<<Mysteryword<<endl;
	while(tries>=0)
	{
		//reset bool
		isfound=false;
		//Display for player
		cout<<"The word you have to guess is : ";
		cout<<endl;
		cout<<Mysteryword<<endl;
		cout<<"There are "<<Mysteryword.length()<<" letters in the word"<<endl;
		cout<<"You have "<<tries + 1 <<" guesses left"<<endl;
		cout<<"Guess a letter : ";
		cin>>guess;
		for(int i=0;i<Mysteryword.length();i++)
		{
			
			if(word[i]==guess)
			{
				Mysteryword[i]=guess;
				cout<<"congrats!! "<<guess<<" is one of the letters! ";
				isfound=true;
			}
		}
		cout<<endl;
		if(word==Mysteryword)
		{
			cout<<"Congratulation You have got the right word "<<Mysteryword<<endl;
			break;
		}
		else if(isfound==false)
		{
			cout<<"Try again!!!"<<endl;
			tries--;
		}
				switch(tries)
		{
			case 6:
			{
			
	cout<<"|          }             |"<<endl;
	cout<<"|                        |"<<endl;
	cout<<"|                        |"<<endl;	
	cout<<"|                        |"<<endl;
	cout<<"|                        |"<<endl;
	cout<<"|                        |"<<endl;
	cout<<"|                        |"<<endl;
	cout<<"|                        |"<<endl;
	cout<<"|                        |"<<endl;
	cout<<"|                        |"<<endl;
		
			break;
}
			case 5:{
			
	cout<<"|          }             |"<<endl;
	cout<<"|          O             |"<<endl;
	cout<<"|                        |"<<endl;	
	cout<<"|                        |"<<endl;
	cout<<"|                        |"<<endl;
	cout<<"|                        |"<<endl;
	cout<<"|                        |"<<endl;
	cout<<"|                        |"<<endl;
	cout<<"|                        |"<<endl;
	cout<<"|                        |"<<endl;	
				break;
			}
			case 4:
	{
	
	cout<<"|          }             |"<<endl;
	cout<<"|          O             |"<<endl;
	cout<<"|          |             |"<<endl;	
	cout<<"|                        |"<<endl;
	cout<<"|                        |"<<endl;
	cout<<"|                        |"<<endl;
	cout<<"|                        |"<<endl;
	cout<<"|                        |"<<endl;
	cout<<"|                        |"<<endl;
	cout<<"|                        |"<<endl;
			
				break;
			}
			case 3:
	{
	
	cout<<"|          }             |"<<endl;
	cout<<"|          O             |"<<endl;
	cout<<"|          |             |"<<endl;	
	cout<<"|          |             |"<<endl;
	cout<<"|        / |             |"<<endl;
	cout<<"|       /  |             |"<<endl;
	cout<<"|          |             |"<<endl;
	cout<<"|          |             |"<<endl;
	cout<<"|                       |"<<endl;
	cout<<"|                       |"<<endl;
			
			
				break;
			}
			case 2:
	{
	
	cout<<"|          }             |"<<endl;
	cout<<"|          O             |"<<endl;
	cout<<"|          |             |"<<endl;	
	cout<<"|          |             |"<<endl;
	cout<<"|        / | \\           |"<<endl;
	cout<<"|       /  |  \\          |"<<endl;
	cout<<"|          |             |"<<endl;
	cout<<"|          |             |"<<endl;
	cout<<"|                        |"<<endl;
	cout<<"|                        |"<<endl;
			
			break;
}
			case 1:
	{
	
	cout<<"|          }             |"<<endl;
	cout<<"|          O             |"<<endl;
	cout<<"|          |             |"<<endl;	
	cout<<"|          |             |"<<endl;
	cout<<"|        / | \\           |"<<endl;
	cout<<"|       /  |  \\          |"<<endl;
	cout<<"|          |             |"<<endl;
	cout<<"|          |             |"<<endl;
	cout<<"|        /               |"<<endl;
	cout<<"|       /                |"<<endl;
			
				break;
}
			case 0:
	{
	
	cout<<"|          }             |"<<endl;
	cout<<"|          O             |"<<endl;
	cout<<"|          |             |"<<endl;	
	cout<<"|          |             |"<<endl;
	cout<<"|        / | \\           |"<<endl;
	cout<<"|       /  |  \\          |"<<endl;
	cout<<"|          |             |"<<endl;
	cout<<"|          |             |"<<endl;
	cout<<"|        /   \\           |"<<endl;
	cout<<"|       /     \\          |"<<endl;
	
				break;
}
			default:
				cout<<"Game over :( You lose ";	
			
		}	
		
	}
}
