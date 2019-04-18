#include <iostream>
using namespace std;

int main()

 {
float sum ,sub, mult,div;
 float z,x;
 int  num;
cout<< "ENTER ANY TWO INTIGER"<<endl;
cin>>z    ;
cin>>x    ;

cout <<"Please enter 1 For Addition"   <<endl;
cout <<"Please enter 2 For SUbtraction" <<endl;
cout <<"Please enter 3 For Multiplayer" <<endl;
cout <<"Please enter 4 For DIVION"    <<endl;


cin >>num;
if (num==1)
{
	sum =z+x;
	cout<<"your divion is "<< sum<<endl;
}
if (num==2)
{
	sub=z-x;
	cout<<"your divion is "<<sub<<endl;
}
if (num==3)
{
	mult=z*x;
	cout<<"your divion is "<<mult<<endl;
}
if (num==4)
{
	div=z/x;
	cout<<"your Divion is "<<div<<endl;
}
else if (num>=5)
{

   cout <<"You ENter Wrong Number"<< endl;
}

	return 0;
}
