#include<iostream>
using namespace std;

struct pegawai{
	char nama[50];
	int nip;
	int hari;
	int gaji;
	int total;
};

pegawai pg[100];

int x;
int main(){
	cout<<"Masukkan Jumlah Pegawai : ";
	cin>>x;
	for(int i=1; i<=x; i++){
		cout<<"Input data ke-"<<i<<"\n";		
		cin.getline(pg[i].nama,50);
		cout<<"Nama			= ";
		cin.getline(pg[i].nama,50);
		cout<<"Nip			= ";
		cin>>pg[i].nip;
		cout<<"Hari Kerja		= ";
		cin>>pg[i].hari;
		cout<<"Gaji Perhari		= ";
		cin>>pg[i].gaji;
		cout<<endl;
	}
	cout<<endl;
	system("cls");
	cout<<"=================== OUTPUT ===================\n";
	cout<<"DATA GAJI PEGAWAI\n";
	for(int j=1; j<=x; j++){
		cout<<"Nama			: "<<pg[j].nama<<endl;
		cout<<"Nip			: "<<pg[j].nip<<endl;
		cout<<"Hari Kerja		: "<<pg[j].hari<<endl;
		cout<<"Gaji Perhari		: "<<pg[j].gaji<<endl;
		cout<<"Total Gaji		: "<<pg[j].hari*pg[j].gaji<<endl;
		cout<<endl;
		cout<<"----------------------------------------------\n";
	}
}
