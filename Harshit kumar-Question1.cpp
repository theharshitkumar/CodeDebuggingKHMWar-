#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int getLIndex(char string[],char  c)
{
	int size = strlen(string);
	int i=0;
	while(i<size)
	{
		
		if(string[i]==c){
		    return i;
		  
		}
		 
		i++; 
	}
	
}

int getFindex(char string[], char c)
{
	int size = strlen(string);
	int i=size; 
	while(i>=0)
    {		
		if(string[i]==c){
		    return i;
           
		}
	
		
	i--;
    }
		
}

int main()
{
	char str[100];
	char ch; 
	int Lindex,Findex; 
	cin>>str;
	cin>>ch;
	Lindex = getLIndex(str,ch);
	Findex = getFindex(str,ch);
	if(Lindex!=-1)
		cout<<Lindex<<endl<<Findex;
	else
		cout<<"NOT FOUND"<<endl;
	return 0;	
}
