#include <bits/stdc++.h>
using namespace std;

struct Queuelink 
{
	int n;
	Queuelink* nxt;
	Queuelink(int x)
	{
		n = x;
		nxt = NULL;
	}
};

struct qu 
{
	Queuelink *a, *z;
	qu()
	{
		a = z = NULL;
	}

	void enq(int i)
	{
		Queuelink* t = new Queuelink(i);
		cout<<"Elements inserted in a Queue: ";
		if (z == NULL) 
		{
		    a = z = t;
		Queuelink* t1 = a;
		while(t1!=NULL)
		{
			cout<<t1->n<<"<-";
			t1 = t1->nxt;
		}
		cout<<"\n";
		}
		else
	{
		z->nxt = t;
		z = t;
		Queuelink* t1 = a;
		while(t1!=NULL)
		{
			cout<<t1->n<<"<-";
			t1 = t1->nxt;
		}
		cout<<"\n";
	 }
	}
	void deq()
	{
		if (a == NULL)
		{
			cout<<"Empty Queue!!\n";
		}
		else
	{
		Queuelink* t = a;
		a = a->nxt;
		delete(t);
		if (a == NULL)
		{
			z = NULL;
		    cout<<"Empty Queue!!\n";
	    }
	    else
	    {
	    	cout<<"Elements deleted from Queue ";
	    	Queuelink* t1 = a;
	    	while(t1!=NULL)
	    	{
	    		cout<<t1->n<<"->";
	    		t1 = t1->nxt;
			}
			cout<<"\n";
		}
	}

  }
   void printqu()
   {
   	if(a==NULL || z==NULL)
   	{
   		cout<<"Empty Queue!!\n";
	}
	else
	{
		cout<<"The elements present in a queue: ";
		Queuelink* t = a;
		while(t!=NULL)
		{
			cout<<t->n<<" ";
			t = t->nxt;
		}
	}
 }	
};
int main()
{

	qu ob;
	ob.enq(12);
	ob.enq(15);
	ob.enq(20);
	ob.deq();
	ob.deq();
	ob.deq();
	ob.enq(10);
	ob.enq(20);
	ob.deq();
    ob.printqu();
}


