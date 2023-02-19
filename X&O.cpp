//
// Created by xy on 14. 6. 2022..
//

#include <iostream>
#include <vector>

using namespace std;
/*
 * X i OX - igrica
 * Napraviti program koji korisnicima naizmjenicno daje mogucnost biranja polja u koje zele upisati svoj znak.
 * Tri znaka u nizu, u bilo kojem smjeru, oznacavaju pobjedu korisnika koji to dostigne.
 */
void osnova(vector<char>&niz){
    cout<<"  -------------"<<endl;
    for(int i=0; i<9; i++){
        cout<<" | "<<niz[i]<<" ";
        if(i==2 || i==5 || i==8){
            cout<<"|"<<endl;
            cout<<"  -------------"<<endl;
        }
    }
}
void provjera1(vector<char>&niz,int a){
    if(a==1){
        niz[0]='X';
    }
    if(a==2){
        niz[1]='X';
    }
    if(a==3){
        niz[2]='X';
    }
    if(a==4){
        niz[3]='X';
    }
    if(a==5){
        niz[4]='X';
    }
    if(a==6){
        niz[5]='X';
    }
    if(a==7){
        niz[6]='X';
    }
    if(a==8){
        niz[7]='X';
    }
    if(a==9){
        niz[8]='X';
    }

}
void provjera2(vector<char>&niz,int b){
    if(b==1){
        niz[0]='O';
    }
    if(b==2){
        niz[1]='O';
    }
    if(b==3){
        niz[2]='O';
    }
    if(b==4){
        niz[3]='O';
    }
    if(b==5){
        niz[4]='O';
    }
    if(b==6){
        niz[5]='O';
    }
    if(b==7){
        niz[6]='O';
    }
    if(b==8){
        niz[7]='O';
    }
    if(b==9){
        niz[8]='O';
    }

}
int ispis1(vector<char>&niz){
    if(niz[0]=='X' && niz[1]=='X' && niz[2]=='X'){
        cout<<"Igrac broj 1 je pobjednik."<<endl;
        system("pause");
        return 0;
    }
    if(niz[3]=='X' && niz[4]=='X' && niz[5]=='X'){
        cout<<"Igrac broj 1 je pobjednik."<<endl;
        system("pause");
        return 0;
    }
    if(niz[6]=='X' && niz[7]=='X' && niz[8]=='X'){
        cout<<"Igrac broj 1 je pobjednik."<<endl;
        system("pause");
        return 0;
    }
    if(niz[0]=='X' && niz[3]=='X' && niz[6]=='X'){
        cout<<"Igrac broj 1 je pobjednik."<<endl;
        system("pause");
        return 0;
    }
    if(niz[1]=='X' && niz[4]=='X' && niz[7]=='X'){
        cout<<"Igrac broj 1 je pobjednik."<<endl;
        system("pause");
        return 0;
    }
    if(niz[2]=='X' && niz[5]=='X' && niz[8]=='X'){
        cout<<"Igrac broj 1 je pobjednik."<<endl;
        system("pause");
        return 0;
    }
    if(niz[0]=='X' && niz[4]=='X' && niz[8]=='X'){
        cout<<"Igrac broj 1 je pobjednik."<<endl;
        system("pause");
        return 0;
    }
    if(niz[2]=='X' && niz[4]=='X' && niz[6]=='X'){
        cout<<"Igrac broj 1 je pobjednik."<<endl;
        system("pause");
        return 0;
    }
}
int ispis2(vector<char>&niz){
    if(niz[0]=='O' && niz[1]=='O' && niz[2]=='O'){
        cout<<"Igrac broj 2 je pobjednik."<<endl;
        system("pause");
        return 1;
    }
    if(niz[3]=='O' && niz[4]=='O' && niz[5]=='O'){
        cout<<"Igrac broj 2 je pobjednik."<<endl;
        system("pause");
        return 1;
    }
    if(niz[6]=='O' && niz[7]=='O' && niz[8]=='O'){
        cout<<"Igrac broj 2 je pobjednik."<<endl;
        system("pause");
        return 1;
    }
    if(niz[0]=='O' && niz[3]=='O' && niz[6]=='O'){
        cout<<"Igrac broj 2 je pobjednik."<<endl;
        system("pause");
        return 1;
    }
    if(niz[1]=='O' && niz[4]=='O' && niz[7]=='O'){
        cout<<"Igrac broj 2 je pobjednik."<<endl;
        system("pause");
        return 1;
    }
    if(niz[2]=='O' && niz[5]=='O' && niz[8]=='O'){
        cout<<"Igrac broj 2 je pobjednik."<<endl;
        system("pause");
        return 1;
    }
    if(niz[0]=='O' && niz[4]=='O' && niz[8]=='O'){
        cout<<"Igrac broj 2 je pobjednik."<<endl;
        system("pause");
        return 1;
    }
    if(niz[2]=='O' && niz[4]=='O' && niz[6]=='O'){
        cout<<"Igrac broj 2 je pobjednik."<<endl;
        system("pause");
        return 1;
    }
}

int main() {
    vector<char>niz={49,50,51,52,53,54,55,56,57};
    int a,b;
    for (int i = 0; i < 9; i++) {
        if(i==0 || i==2 || i==4 || i==6 || i==8){
            osnova(niz);
            cout<<"Igrac 1. Polje: ";
            do {
                cin>>a;

            }while(a<1 || a>9);
            provjera1(niz,a);
            system("CLS");
            osnova(niz);
        }
        else{
            cout<<"Igrac 2. Polje: ";
            do {
                cin>>b;

            }while(b<1 || b>9);
            provjera2(niz,b);
            system("CLS");
        }
        int x=2;
        x=ispis1(niz);
        if (x==0){
            return 0;
        }
        x=ispis2(niz);
        if(x==1){
            return 0;
        }
        if(x==2){
        	cout<<"NERIJESENO!"<<endl;
		}

    }

    system("pause");
    return 0;
}
