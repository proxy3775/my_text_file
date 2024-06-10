#include<iostream>
#include<fstream>
//#include<ofstream>//
#include<string>

using namespace std;

int main(){

int option;

fstream operations;

operations.open("crud_operations.txt"); ios:: app;

operations<<"Hi there!""\n";
operations<<"Nice to me you!""\n";

operations.close();
start:
cout<<"Welcome to CRUD operations!"<<endl;
cout<<"\n";
cout<<"Do you want to read your file?  (1.yes) (2.no)"<<endl;
cin>>option;

if (option==1){

    cout<<"These are your file contents:""\n\n";

    operations.open("crud_operations.txt");

    if (operations){

         char record;
         operations.get(record);

        while(operations){
            std:: cout<<record;
            operations.get(record);


        }
        operations.close();
    }
    else{

        cout<<" file not open!!!!!!!!"<<endl;
    }

}

else if(option==2){

cout<<"Very well then"<<endl;
}

else{
    goto start;
}

cout<<"...........................................""\n";
cout<<"Thank you for using CRUD operations!""\n";
cout<<"...........................................""\n";

return 0;
}
