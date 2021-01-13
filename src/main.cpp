#include <cstdlib>
#include <iostream>
#include "MyStack.h"
using namespace std;
int main()
{
    MyStack<int> st(10);
    st.push(400);
    st.push(2);
    st.push(3);
    st.push(229);
    st.push(228);
    st.push(322);
    if(st.isFull())
        cout<<"Stack is full:(" << endl;
    else
        cout<<"There's still room:)" << endl;
    if(st.isEmpty())
        cout <<"Stack is empty(((" << endl;
    else
        cout <<"COOL! Stack isn't empty))))" << endl;

    while(!st.isEmpty())
        std::cout << st.pop() <<" ";
    if(st.isEmpty())
        cout << endl <<"Stack is empty(((" << endl << endl << endl;

    MyStack<char*> st_1(5);
    st_1.push("capitan Andrej \"ALWAYSWANNAFLY\" Bondarenko");
    st_1.push("Vladimir \"RodjER\" Nikogosian");
    st_1.push("Victor \"GeneRaL\" Nigrini");
    st_1.push("Bogdan \"Iceberg\" Vasilenko");
    st_1.push("Alik \"V-TUNE\" Vorobey");
    st_1.push("sostav NA'VI");
    if(st_1.isFull())
        cout<<"Stack is full:(" << endl;
    else
        cout<<"There's still room:)" << endl;
    if(st_1.isEmpty())
        cout <<"Stack is empty(((" << endl;
    else
        cout <<"COOL! Stack isn't empty))))" << endl;
    while(!st_1.isEmpty()){
        std::cout << st_1.pop() << endl;

    }

    return 0;
}