#include <iostream>
#include <fstream>
#include <windows.h>
#include <cstdlib>
#include <string>
#include <algorithm>

using namespace std;

int wybor, code[10000];
string text;

int Q=10101 ,W=14456, E=16697, R=20678, T=24688, Y=29987, U=32689, I=36790, O=39876, P=42689, A=44687, S=46789, D=48123, F=50356,
    G=52019 ,H=56422, J=58113 ,K=60125, L=62756, Z=66322, X=68069, C=70134, V=72887, B=74110, N=76001, M=78090, SPACE=90020;

int main()
{
    cout<<" Super Coder by Scazza"<<endl<<endl;
    cout<<" User manual: You can use uppercase or lowercase letters (the program will convert them to uppercase).\n use a dot instead of spaces."<<endl;
    cout<<" Tap to continue";
    getchar(); system("cls");
    cout<<"New text select - 1: "<<endl;
    cout<<"Open text select - 2: "<<endl;
    cin>>wybor; system("cls");

    switch(wybor)
    {
    case 1:
        {
            cout<<"enter text:"<<endl<<endl;
            cin>>text;
            transform(text.begin(),text.end(),text.begin(),::toupper);
            int licznik=text.length();

                for(int i=0; i<=licznik; i++)
                {
                    if (text[i]=='Q') {code[i]=Q; Q+=17;} if (text[i]=='W') {code[i]=W; W+=17;} if (text[i]=='E') {code[i]=E; E+=17;}
                    if (text[i]=='R') {code[i]=R; R+=17;} if (text[i]=='T') {code[i]=T; T+=17;} if (text[i]=='Y') {code[i]=Y; Y+=17;}
                    if (text[i]=='U') {code[i]=U; U+=17;} if (text[i]=='I') {code[i]=I; I+=17;} if (text[i]=='O') {code[i]=O; O+=17;}
                    if (text[i]=='P') {code[i]=P; P+=17;} if (text[i]=='A') {code[i]=A; A+=17;} if (text[i]=='S') {code[i]=S; S+=17;}
                    if (text[i]=='D') {code[i]=D; D+=17;} if (text[i]=='F') {code[i]=F; F+=17;} if (text[i]=='G') {code[i]=G; G+=17;}
                    if (text[i]=='H') {code[i]=H; H+=17;} if (text[i]=='J') {code[i]=J; J+=17;} if (text[i]=='K') {code[i]=K; K+=17;}
                    if (text[i]=='L') {code[i]=L; L+=17;} if (text[i]=='Z') {code[i]=Z; Z+=17;} if (text[i]=='X') {code[i]=X; X+=17;}
                    if (text[i]=='C') {code[i]=C; C+=17;} if (text[i]=='V') {code[i]=V; V+=17;} if (text[i]=='B') {code[i]=B; B+=17;}
                    if (text[i]=='N') {code[i]=N; N+=17;} if (text[i]=='M') {code[i]=M; M+=17;} if (text[i]=='.') {code[i]=SPACE; SPACE+=17;}
                }

            for(int i=0; i<=licznik; i++)
            {
        fstream plik;
            plik.open("text.txt",ios::out | ios::app);
            plik<<code[i];
            plik.close();
            }

        break;}
    case 2:
        {
        fstream plik;
            plik.open("text.txt",ios::in);
            if (plik.good()==false) {cout<<" File not found!"<<endl; exit(0);}
        string linia;
            while(getline(plik,linia))
            plik.close();

            int licznik_open=linia.length();
        string open_code[10000];

            int c=0;
            for (int i=0; i<=licznik_open; i+=5)
            {
                open_code[c]=linia.substr(i,5);
                c++;
            }

                for (int i=0 ;i<=(licznik_open/5); i++)
                {
                    int buffer;
                    buffer=atoi(open_code[i].c_str());

                    if (buffer==Q) {cout<<"Q";Q=Q+17;}  if (buffer==W) {cout<<"W";W=W+17;}  if (buffer==E) {cout<<"E";E=E+17;}
                    if (buffer==R) {cout<<"R";R=R+17;}  if (buffer==T) {cout<<"T";T=T+17;}  if (buffer==Y) {cout<<"Y";Y=Y+17;}
                    if (buffer==U) {cout<<"U";U=U+17;}  if (buffer==I) {cout<<"I";I=I+17;}  if (buffer==O) {cout<<"O";O=O+17;}
                    if (buffer==P) {cout<<"P";P=P+17;}  if (buffer==A) {cout<<"A";A=A+17;}  if (buffer==S) {cout<<"S";S=S+17;}
                    if (buffer==D) {cout<<"D";D=D+17;}  if (buffer==F) {cout<<"F";F=F+17;}  if (buffer==G) {cout<<"G";G=G+17;}
                    if (buffer==H) {cout<<"H";H=H+17;}  if (buffer==J) {cout<<"J";J=J+17;}  if (buffer==K) {cout<<"K";K=K+17;}
                    if (buffer==L) {cout<<"L";L=L+17;}  if (buffer==Z) {cout<<"Z";Z=Z+17;}  if (buffer==X) {cout<<"X";X=X+17;}
                    if (buffer==C) {cout<<"C";C=C+17;}  if (buffer==V) {cout<<"V";V=V+17;}  if (buffer==B) {cout<<"B";B=B+17;}
                    if (buffer==N) {cout<<"N";N=N+17;}  if (buffer==M) {cout<<"M";M=M+17;}  if (buffer==SPACE) {cout<<" ";SPACE=SPACE+17;}
                }
        break;}
    }
    return 0;
}
