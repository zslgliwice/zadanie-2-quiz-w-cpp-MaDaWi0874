#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;
string imie;
string odp;



int main()
{
    HANDLE uchwyt = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(uchwyt,12);

    cout << "Podaj imie: ";
    cin >> imie;
    int pkt = 0;

    system("cls");

    cout<<"3...";
    Sleep(1000);
    system("cls");
    cout<<"2...";
    Sleep(1000);
    system("cls");
    cout<<"1...";
    Sleep(1000);
    system("cls");


    cout << "Witaj w tescie z PayDay 2, " << imie << "."<<endl;
    Sleep(3000);
    cout << "Pytanie 1. Kim jest Bain?"<<endl;
    cout << "a) Zalozyciel Crime.Net"<<endl;
    cout << "b) Jedna z grywalnych postaci"<<endl;
    cout << "c) Glowny przeciwnik  gangu Payday"<<endl;
    cout<< "Twoja odpowiedz: ";
    cin>> odp;

    if(odp == "a" || odp == "A"){
            system("cls");
        cout<< "Poprawna odpowiedz!"<<endl;
        pkt++;
    }else{
        system("cls");
    cout<< "Zla odpowiedz! Poprawna odpowiedz to A: Zalozyciel Crime.Net.";

    }
    Sleep(3000);
    system("cls");

    cout << "Pytanie 2. Jak nazywa sie przeciwnik z najciezszym pancerzem?"<<endl;
    cout<<"a) Tanker"<<endl;
    cout<<"b) Beater"<<endl;
    cout<<"c) Bulldozer"<<endl;
    cin>> odp;

    if(odp == "c" || odp == "C"){
            system("cls");
        cout<<"Jest to poprawna odpowiedz!"<<endl;
        pkt++;
    }else{
    system("cls");
    cout<<"Jest to bledna odpowiedz. Poprawna odpowiedz to C: Bulldozer"<<endl;
    }

    Sleep(3000);
    system("cls");
    cout<<"Pytanie 3, coraz trudniej! Czego przez wiekszosc swojej kariery, szukal Bain?"<<endl;
    cout<<"a) Pieniedzy"<<endl;
    cout<<"b) Artefaktow"<<endl;
    cout<<"c) Grupy ludzi ktorzy potrafia wszystko"<<endl;
    cin>>odp;

    if(odp == "b" || odp == "B"){
        system("cls");
        cout<<"Jest to poprawna odpowiedz!"<<endl;
        pkt++;
    }else{
    system("cls");
    cout<<"Niestety, jest to bledna odpowiedz. Poprawna odpowiedz to B: Artefaktow."<<endl;
    }

    Sleep(3000);
    system("cls");
    cout<<"Pytanie 4. Czym w gangu zajmowal sie Wolf? (jedna z grywalnych postaci)"<<endl;
    cout<<"a) Sprzetem, typu wiertla, pily"<<endl;
    cout<<"b) Hakowaniem podczas napadow"<<endl;
    cout<<"c) Dowodzil grupa, planowal nastepne napady"<<endl;
    cin>>odp;

    if(odp == "a" || odp == "A"){
        system("cls");
        cout<<"Jest to poprawna odpowiedz!"<<endl;
        pkt++;
    }else{
    system("cls");
    cout<<"Zla odpowiedz. Poprawna odpowiedz to A: Sprzetem, typu wiertla, pily"<<endl;
    }

    Sleep(3000);
    system("cls");
    cout<<"Pytanie 5. Ile losowych osiagniec jest potrzebnych do sekretnego zakonczenia?"<<endl;
    cout<<"a) 5"<<endl;
    cout<<"b) 15"<<endl;
    cout<<"c) 20"<<endl;
    cout<<"d) 47"<<endl;
    cin>>odp;

    if(odp=="c" || odp=="C"){
        system("cls");
        cout<<"Jest to poprawna odpowiedz, brawo!"<<endl;
        pkt++;
    }else{
    system("cls");
    cout<<"Niestety, jest to zla odpowiedz. Poprawna odpowiedz to C: 20"<<endl;
    }

    Sleep(3000);
    system("cls");
    cout<<"Pytanie 6. Kim jest Locke?"<<endl;
    cout<<"a) Komendant policji"<<endl;
    cout<<"b) Ex-najemnik Murkywater"<<endl;
    cout<<"c) Jedna z grywalnych postaci"<<endl;
    cin>>odp;
    if(odp=="b"||odp=="B"){
        system("cls");
        cout<< "Jest to poprawna odpowiedz!"<<endl;
        pkt++;
    }else{
    system("cls");
    cout<<"Niestety, zla odpowiedz. Poprawna odpowiedz to B: Ex-najemnik Murkywater."<<endl;
    }

    Sleep(3000);
    system("cls");
    cout<<"Pytanie 7. Dlaczego gang Payday wlamal sie do Bialego Domu?"<<endl;
    cout<<"a) Aby ukrasc prezydenckie ulaskawienia, i zakonczyc swoja kariere kryminalna"<<endl;
    cout<<"b) Aby wystrzelic glowice nuklearne na caly swiat, i doprowadzic do apokalipsy"<<endl;
    cout<<"c) Aby zabic prezydenta USA i przejac kontrole nad krajem"<<endl;
    cin>>odp;

    if(odp == "a"||odp== "A"){
        system("cls");
        cout<< "Poprawna odpowiedz!"<<endl;
        pkt++;
    }else{
    system("cls");
    cout<< "Niestety, niepoprawna odpowiedz. Odpowiedz to A: Aby ukrasc prezydenckie ulaskawienia..."<<endl;
    }


    Sleep(5000);
    system("cls");
    cout<<"Gratulacje, "<<imie<<" ukonczyles quiz o PayDay 2! Twoja ilosc punktow: "<< pkt<<"/7."<<endl;


    return 0;
}
