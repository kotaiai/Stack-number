#include "data.h"
#include <iostream>

using namespace std;
data::data(int siz)
{
    lis = new int[siz];
    stacksize = siz;
    top = 0;
    //ctor
}

bool data::full(){
    bool status;
    if (top == stacksize)
        status = true;
    else
        status = false;
    return status;

}

bool data::empt(){
    bool status;
    if (top == 0)
        status = true;
    else
        status = false;
    return status;
}

void data::push(int input){
    if (full())
        cout<<"The list is full!!";
    else{
        top++;
        lis[top] = input;
    }
}

void data::pull(int &input){
    if (empt())
        cout<<"There is no data in the list!!";
    else{
        input = lis[top];
        cout<<input;
        top--;
    }
}




