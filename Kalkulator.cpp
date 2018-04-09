#include<iostream>
#include<conio.h>

using namespace std;

class oper{
	public:
		
		int add(int x, int y){
			int op = x+y;
			return op;
		}
		int subtract(int x, int y){
			int op= x-y;
			return op;
		}
		int multi(int x, int y){
			int op = x*y;
			return op;
		}
		int dev(int x, int y){
			int op = x/y;
			return op;
		}
};

int main(){
	int pilih;
	int x, y;
	char exit;
	int yes = 0;
	
	oper key;

	
	while(!yes){
		cout<<"---Menu Kalkulator---\n";	
		cout<<"Silahkan pilih operator dibawah ini !"<<endl;
		cout<<"1. Penjumlahan\n";
		cout<<"2. Pengurangan\n";
		cout<<"3. Perkalian\n";
		cout<<"4. Pembagian\n";
		cout<<"Masukkan : \n";
		cin>>pilih;
		cout<<endl;	
			
		switch(pilih){
		case 1:
			cout<<"--Penjumlahan--\n";
			cout<<"Masukkan angka pertama : ";
			cin>>x;
			cout<<"Masukkan angka kedua : ";
			cin>>y;
			cout<<x<< "+" <<y<< " = ";
			cout<<key.add(x, y)<<endl;
			break;
		case 2:
			cout<<"--Pengurangan--\n";
			cout<<"Masukkan angka pertama : ";
			cin>>x;
			cout<<"Masukkan angka kedua : ";
			cin>>y;
			cout<<x<< "-" <<y<< " = ";
			cout<<key.subtract(x, y)<<endl;
			break;
		case 3:
			cout<<"--Perkalian--\n";
			cout<<"Masukkan angka pertama : ";
			cin>>x;
			cout<<"Masukkan angka kedua : ";
			cin>>y;
			cout<<x<< "*" <<y<< " = ";
			cout<<key.multi(x, y)<<endl;
			break;
		case 4:
			cout<<"--Pembagian--\n";
			cout<<"Masukkan angka pertama : ";
			cin>>x;
			cout<<"Masukkan angka kedua : ";
			cin>>y;
			cout<<x<< "/" <<y<< " = ";
			cout<<key.dev(x, y)<<endl;
			break;
		default:
			cout<<"Input salah";
			break;
		}
		cout<<"Exit? (y/n) : ";
		cin>>exit;
		if(exit=='n'||exit=='N'){
			cout<<"\n";
		}else if(exit=='Y'||exit=='y'){
			yes++;			
		}
	}
	return 0;
	
}
