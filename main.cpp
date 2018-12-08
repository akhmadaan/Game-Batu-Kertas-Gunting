#include <iostream>
#include <conio.h>
#include<stdlib.h>

using namespace std;

main()
{
    system("color b");
	int acak,pilih;
    cout<<"=============================================================================================================================================="<<endl;
            cout<<"NAMA\t : AKHMAD SAIFUL ANAM    ( 311810523 )"<<endl;
            cout<<"KAMPUS\t : STT PELITA BANGSA 2018/2019"<<endl;
            cout<<"CLASS\t  : TI 18.E1"<<endl;
            cout<<"JURUSAN\t    : TEKNIK INFORMATIKA"<<endl;
    cout<<"=============================================================================================================================================="<<endl;
    awal:
    acak = rand()%3;
    cout<<"\n\n\n----------------GAME--------------- --\n\n";
    cout<<"------- Batu Kertas Gunting ------- --\n\n";
    cout<<"----------------GAME--------------- --\n\n";
    cout<<"\t--PILIHAN--\n";
    cout<<" [1]. Batu\n";
    cout<<" [2]. Kertas\n";
    cout<<" [3]. Gunting\n";
    cout<<" [4]. Keluar\n\n";
    cout<< "Masukan Pilihan : ";
    cin>>pilih;
    cout<<endl;

    if(pilih == 1)
    {
        cout<<"\nPilihan Kamu\t\t:Batu\n";
    if(acak == 0)
    {
        cout<<"\nPilihan Komputer\t:Batu\n\n";
        cout<<"\t- DRAW -";
    }
    else if(acak == 1)
    {
        cout<<"\nPilihan Komputer\t:Kertas\n\n";
         cout<<"\t- Kamu Kalah -";
    }
    else if(acak == 2)
    {
        cout<<"\nPilihan Komputer\t:Gunting\n\n";
        cout<<"\t- Kamu Menang -";
    }
    }
    else if(pilih == 2)
    {
        cout<<"\nPilihan Kamu\t\t:Kertas\n";
    if(acak == 0)
    {
        cout<<"\nPilihan Komputer\t:Batu\n\n";
        cout<<"\t- Kamu Menang -";
    }
    else if(acak == 1)
    {
        cout<<"\nPilihan Komputer\t:Kertas\n\n";
         cout<<"\t- DRAW -";
     }
     else if(acak == 2)
    {
        cout<<"\nPilihan Komputer\t:Gunting\n\n";
        cout<<"\t- Kamu Kalah -";
    }
    }
     else if(pilih == 3)
    {
        cout<<"\nPilihan Kamu\t\t:Gunting\n";
    if(acak == 0)
    {
        cout<<"\nPilihan Komputer\t:Batu\n\n";
        cout<<"\t- Kamu Kalah -";
    }
    else if(acak == 1)
    {
        cout<<"\nPilihan Komputer\t:Kertas\n\n";
         cout<<"\t- Kamu Menang -";
     }
     else if(acak == 2)
    {
        cout<<"\nPilihan Komputer\t:Gunting\n\n";
        cout<<"\t- DRAW -";
    }
    }
    else if(pilih == 4)
    {

        cout<<"\n\n TERIMAKASIH SUDAH MENGGUNAKAN PROGRAM INI **";
        getch();
        return 0;
    }

    else if(pilih > 4)
    {
        cout<<"\nPilihan Anda Pilih Tidak Ada\n";
        getch();
        goto awal;
    }

    getch();
    goto awal;
    }






