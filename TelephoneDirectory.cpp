// Author: Shubham Bh

#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;

class TelephoneDirectory
{
    public:
    char name[30];
    long cn;

    public:
    void accept()
    {
        cout<<"\n\tEnter the name : ";
        cin>>name;

        cout<<"\tEnter the contact number : ";
        cin>>cn;
    }
    void display()
    {
        cout<<"\n\tNAME : "<<name;
        cout<<"\n\tCONTACT NUMBER : "<<cn;
    }
};
int main()
{
    char ans;
    int ch;
    TelephoneDirectory obj;
    fstream f;

    do
    {
        cout<<"\n\t**********TELEPHONE DIRECTORY**********\n\t1. Add New Contact\n\t2. Display Contacts\n\t3. Search Contact\n\t4. Update Contact\n";
        cout<<"\n\tChoose an Option for Performing Operation : ";
        cin>>ch;

        switch(ch)
        {
            case 1:
            {
                f.open("SHU.txt",ios::app|ios::binary|ios::out);
                obj.accept();
                f.write((char*)&obj,sizeof(obj));
                cout<<"\n\tContact is Saved";
                f.close();
                break;
            }
            case 2:
            {
                f.open("SHU.txt",ios::app|ios::binary|ios::in);
                while(f)
                {
                    f.read((char*)&obj,sizeof(obj));
                    if(f)
                        obj.display();
                }
                f.close();
                break;
            }
            case 3:
            {
                int flag=0;
                char na[30];
                long nm;
                int ch;

                f.open("SHU.txt",ios::binary|ios::in);

                cout<<"\n\t*****SEARCH BY*****\n\t1. Search by Name\n\t2. Search by Number";
                cout<<"\n\tChoose an option to find the number : ";
                cin>>ch;

                switch(ch)
                {
                    case 1:
                    {
                        cout<<"\n\tEnter the name to search : ";
                        cin>>na;

                        while(f)
                        {
                            f.read((char*)&obj,sizeof(obj));

                            if(!strcmp(obj.name,na))
                            {
                                cout<<"\n\tContact is Found";
                                obj.display();
                                flag++;
                                break;
                            }

                        }
                        if(flag==0)
                        {
                            cout<<"\n\tContact is not found";
                        }
                        break;
                    }
                    case 2:
                    {
                        cout<<"\n\tEnter the number to search : ";
                        cin>>nm;

                        while(f)
                        {
                            f.read((char*)&obj,sizeof(obj));

                            if(obj.cn==nm)
                            {
                                cout<<"\n\tContact is Found";
                                obj.display();
                                flag++;
                                break;
                            }
                        }
                        if(flag==0)
                        {
                            cout<<"\n\tContact is not found";
                        }
                        break;
                    }
                }
                f.close();
                break;
            }
            case 4:
            {
                f.open("SHU.txt",ios::in|ios::binary|ios::out);

                int flag=0;
                int ch;
                int i=0;
                char na[30];
                long nm;

                cout<<"\n\t*****SEARCH BY*****\n\t1. Search by Name\n\t2. Search by Number";
                cout<<"\n\tChoose an option for searching details : ";
                cin>>ch;

                switch(ch)
                {
                    case 1 :
                    {
                        cout<<"\n\tEnter the name to search : ";
                        cin>>na;

                        while(f)
                        {
                            f.read((char*)&obj,sizeof(obj));
                            if(!strcmp(obj.name,na))
                            {
                                cout<<"\n\tEnter new details : ";
                                obj.accept();
                                f.seekp(i*sizeof(obj),ios::beg);
                                f.write((char*)&obj,sizeof(obj));
                                cout<<"\n\tContact is updated";
                                flag++;
                            }
                        }
                        if(flag==0)
                        {
                            cout<<"\n\tContact is not found : ";
                            break;
                        }
                    }
                    case 2 :
                    {
                        cout<<"\n\tEnter the number to search : ";
                        cin>>nm;
                        while(f)
                        {
                            f.read((char*)&obj,sizeof(obj));

                            if(obj.cn==nm)
                            {
                                cout<<"\n\tEnter new details : ";
                                obj.accept();
                                f.seekp(i*sizeof(obj),ios::beg);
                                f.write((char*)&obj,sizeof(obj));
                                cout<<"\n\tContact is updated";
                                flag++;
                            }
                        }
                        if(flag==0)
                        {
                            cout<<"\n\tContact is not found";
                        }
                        break;
                    }
                }
                break;
            }
            default: cout<<"\n\tInvalid Input";
        }
        cout<<"\n\n\tDo You Want to Continue? ";
        cin>>ans;

    }while(ans=='Y'||ans=='y');

    return 0;
}
