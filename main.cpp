#include <iostream>
#include "data.h"

using namespace std;

int siz = 0;

int main()
{
    int choice, val,oval;
    if (siz ==0){
        cout<<"Set the size of the list"<<endl;
        cin>>siz;

        system("pause");
        system("cls");
        //sleep(2s);
        main();
    }data record(siz);








    do {
    choice = 0;
    cout<<"[1] Input numbers "<<endl;
    cout<<"[2] Output numbers"<<endl<<endl;
    cin>>choice;
    if (choice == 1){
        if (siz == 0){
                cout<<"INPUT THE SIZE FIRST!!!"<<endl;
                //sleep(2s);
                system("pause");
                system("cls");
                            }

            else{

                for (int i = 0; i < siz; i++){
                    cout<<"Input the value here: ";
                    cin>>val;
                    record.push(val);
                }
                //sleep(2s);
                system("pause");
                system("cls");

            }
    }
    else if(choice==2){
        if (siz == 0){

                cout<<"INPUT THE SIZE FIRST!!!";
                //sleep(2s);
                system("pause");
                system("cls");

            }
            else{
                for (int i = 0; i < siz; i++){
                    record.pull(oval);
                    cout<<" "<<endl;
                }
                //sleep(2s);
                system("pause");
                system("cls");

            }
    }
    else{
        cout<<"INVALID INPUT!!";
        //sleep(2s);
        system("pause");
        system("cls");

    }
    } while ((choice >0)&&(choice <3));



    return 0;
}
