// Author: Shubham Bhagwansing Rajput
// CPP
#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	char c;
	
	ofstream of("file.txt",ios::out);
	

	cout<<"Enter the contents to write in the file(Enter '#' to stop writing records)";
	cin>>c;
	
	while(c!='#')
	{
		of<<c;
		cin>>c;
	}
	cout<<"Data written in file successfully!!!!!";
	of.close();
	
