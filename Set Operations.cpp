#include <iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
class sets
{
	node *hn;
public:	sets()
		{
			hn=NULL;
		}

		void insert(int x)
		{
			node *nn=new node;
			nn->data=x;
			nn->next=NULL;

			if(hn==NULL)
			{
				hn=nn;
			}

			else
			{
				node *cn=hn;
				while(cn->next!=NULL)
					cn=cn->next;
				cn->next=nn;
			}
		}

		void display()
		{

			if(hn==NULL)
				{
					cout<<"\nLIST EMPTY";
					return;
				}
				node *cn=hn;
				while(cn!=NULL)
				{
				cout<<cn->data<<"\t";
				cn=cn->next;
				}
		}

		void Del(int x)
		{
			node*temp;
					if(hn->data==x)
					{
						temp=hn;
						hn=hn->next;
						delete temp;
						cout<<"\nThe element "<<x<<" is deleted";
						return;
					}

					else
					{
						node *cn=hn->next;
						temp=hn;
						while(cn!=NULL)
						{

							if(cn->data==x)
							{
								temp->next=cn->next;
								delete cn;
							}
						temp=cn;
						cn=cn->next;
						}
					}
		}

			void search(int x)
			{
				if(hn==NULL)
				{
					cout<<"\nLIST EMPTY";
					return;
				}

				node *cn=hn;
				while(cn!=NULL)
				{
					if(cn->data==x)
					{
					cout<<"\nThe element is present";
					return;
					}
					cn=cn->next;
				}
				cout<<"\nThe element is not present";
			}
        void union_set(sets s1,sets s2)
		{
			node *cn1=s1.hn;
			node *cn2=s2.hn;
			node*cn=hn;

			while(cn1!=NULL)
			{
				insert(cn1->data);
				cn1=cn1->next;
			}

				int flag;

			while(cn2!=NULL)
			{
				cn=hn;
				flag=0;
					while(cn!=NULL)
					{
						if(cn->data==cn2->data)
						{
							flag++;
							break;
						}
						cn=cn->next;
					}

				if(flag==0)
				{
					insert(cn2->data);
				}

				cn2=cn2->next;
			}
		}

		void intersection_set(sets s1,sets s2)
				{
					node *cn1=s1.hn;
					node *cn2=s2.hn;



					int flag;

					while(cn2!=NULL)
					{
						cn1=s1.hn;
						flag=0;
							while(cn1!=NULL)
							{
								if(cn1->data==cn2->data)
								{
									flag++;
									break;
								}
								cn1=cn1->next;
							}

						if(flag==1)
						{
							insert(cn2->data);
						}

						cn2=cn2->next;
					}
				}

		void count()
		{
			int n=0;
			node *cn=hn;
			while(cn!=NULL)
			{
				n++;
				cn=cn->next;
			}
			cout<<"Count is "<<n<<"\n";
		}
};




int main()
{
	sets S1,S2,S3,S4,d;
	int choice,ch,data;
	int value;
	do
	{
		cout<<"\n\t\t****************MENU***************";
		cout<<"\n\t1.INSERT ELEMENT";
		cout<<"\n\t2.DELELTE ELEMENT";
		cout<<"\n\t3.SEARCH ELEMENT";
		cout<<"\n\t4.COUNT";
		cout<<"\n\t5.DISPLAY SET";
		cout<<"\n\t6.UNION";
		cout<<"\n\t7.INTERSECTION";
		cout<<"\n\t8.EXIT";
		cout<<"\nEnter your choice:";
		cin>>choice;

		switch(choice)
		{
		case 1:

		            cout << "\n1.Insert in Set 1 \n2.Insert in Set 2\n>>";
		            cin >> ch;

						switch (ch)
						{
						case 1:

								cout << "\nEnter data to Insert: ";
								cin>>value;
								S1.insert(value);
								break;

						case 2:

								cout << "\nEnter data to Insert: ";
								cin>>value;
								S2.insert(value);
								break;
						}
		            break;

		 case 2:

						            cout << "\n1.Delete from Set 1 \n2.Search from Set 2\n>>";
						            cin >> ch;
						            cout << "\nEnter element to delete: ";
						            cin >> data;
						            switch (ch)
						            {
						            case 1:
						            {
						                S1.Del(data);
						                break;
						            }
						            case 2:
						            {
						                S2.Del(data);
						                break;
						            }
						            }
						            break;                                                                                                                                                                                                    
        case 3:
                                    cout << "\n1.Search from Set 1 \n2.Search from Set 2\n>>";
						            cin >> ch;
						            cout << "\nEnter element to Search: ";
						            cin >> data;
						            switch (ch)
						            {
						            case 1:
						            {
						                S1.search(data);
						                break;
						            }
						            case 2:
						            {
						                S2.search(data);
						                break;
						            }
						            }
						            break;
        case 4:
                                    cout << "\n1.Count from Set 1 \n2.Count from Set 2\n>>";
						            cin >> ch;
                                    switch (ch)
						            {
						            case 1:
						            {
						                S1.count();
						                break;
						            }
						            case 2:
						            {
						                S2.count();
 
                                       break;
						            }
						            }
						            break;
 
        case 5:
                                    cout << "\n1.Display from Set 1 \n2.Display from Set 2\n>>";
						            cin >> ch;
						            switch (ch)
						            {
						            case 1:
						            {
						                S1.display();
						                break;
						            }
						            case 2:
						            {
						                S2.display();
						                break;
						            }
						            }
						            break;
        case 6:
                                    cout << "\nUnion is\n>>";
						            S3.union_set(S1,S2);
						            S3.display();
        case 7:
                                    cout << "\nIntersection is\n>>";
						            S3.intersection_set(S1,S2);
						            S3.display();
        default:
                                    cout<<"Enter valid choice! \n";
		}
	}while(choice!=8);

	return 0;
}
