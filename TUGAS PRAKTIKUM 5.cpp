#include<iostream>
using namespace std ;
int main ()
{
	int a,b,i, g,z ;
	
cout<<"Gambar bangun datar"<<endl;
	cout<<"1. Kotak bolong"<<endl ;
		cout<<"2. Segitiga"<<endl ;
	cout<<"silahkan pilih";cin>>a ;

	
	switch(a) 
	{
	case 1:
		cout<<"Panjang :";
cin>>a ;
	cout<<"Lebar :";	cin>>b ;
	for (i=1 ; i<=a ; i++)
	{
	for (g=1 ; g<=b; g++)
		{
		if (i==1 || i==a || g==1 || g== b)
			{
		cout<<"*";
			}
	else
			{
				cout<<" ";
			}
		}
		cout<<endl ;
	}
break ;
	
	case 2 :
cout<<"tinggi";
cin>>a ;
	for(g= 1 ; g<=a ; g++)
	{
		z=1 ;
	cout<<g ;
	for(i=1 ; i< g ;i++){
			cout<<" "<<g+(a*i)-z ;
		z=z+i+1 ;
		}
		cout<<endl ;
	}
}
}
