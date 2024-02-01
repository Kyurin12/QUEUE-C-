#include <iostream>
#include <conio.h>
using namespace std;

int que[4],belakang=-1,depan=-1;

int datakosong()
{
	if (belakang==-1)
	  return 1;
	else
	   return 0;  
}
  
int datapenuh()
{
	if (belakang==3)
	  return 1;
	else
	   return 0;  
}
void dequeue()
{
	if (datakosong())
	   cout<<"data Kosong";
	else
	   if(depan==belakang)
		  belakang=depan=-1;
	   else
	      depan++;
		     
}


void enqueue(int dat)
{
	que[belakang]=dat;
}

void tampil()

{
	if (datakosong())
	   cout<<"Data Kosong";
	else
	{
		cout<<"  depan <--   ";
		for (int i=depan;i<=belakang;i++)
	       cout<<que[i]<<"   ";
	    cout<<"--> belakang" ;  
	}
}

int main()  
{
  int pil=1,data;
  while(pil!=4)
  {
     system("cls");
     cout<<"--------Program Queue----------\n";
     cout<<"1.EnQueue\n";
     cout<<"2.Tampil Isi QUEUE\n";
     cout<<"3.DeQueue\n";
     cout<<"4.Exit\n\n";
     cout<<"Pilihan Anda = ";
     cin>>pil;
     if(pil==1)
     {
     	if (datapenuh())
     	    cout<<"penuh";
     	else
		{
		  if(belakang==-1)
		    depan++;	
		  belakang++;
		  cout<<"Masukkan Nilai = ";
		  cin>>data
		  enqueue(data);
		}
	 }
     else if(pil==2)
          tampil();
     else if(pil==3)
          dequeue();
     else 
	 cout<<"\n\n\nTerimakasih";
     getch();
  }
   return 0;    
   
}


