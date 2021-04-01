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
