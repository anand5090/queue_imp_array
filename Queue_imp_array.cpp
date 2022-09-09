#include <iostream>
using namespace std;
int queue[100], n = 100, front = - 1, rear = - 1;
void Insert(int value) 
{
   if (rear == n - 1)
   {
   cout<<"Queue Overflow"<<endl;
   }
   
   else
   {
    if(front==-1)
      front=0;
       
       
      //  cout<<"Element are";
        rear=rear+1;
        queue[rear]=value;
   } 
}
void Delete()
{
if(front==-1 || front>rear)
{
    cout<<"Queue Underflow";
    return;
}
/*
else if(front==rear)
{
    front=-1;
    rear=-1;

}*/
else
{   
  //  cout<<"Element deleted from queue is : "<< queue[front] <<endl;
    front=front+1;
}
}
void display()
{
    if(front==-1)
    {
        cout<<"Queue is empty";
    }
    else{
        for(int i=front;i<=rear;i++)
        {
          cout<<queue[i]<<" ";  
        }
    }
}
int main()
{
int ch,value;
   cout<<"1) Insert element to queue"<<endl;
   cout<<"2) Delete element from queue"<<endl;
   cout<<"3) Display all the elements of queue"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter your choice : "<<endl;
      cin>>ch;
      switch (ch) {
         case 1:
         cout<<"Enter the element";
         cin>>value;
         Insert(value);
         break;
         case 2: Delete();
         break;
         case 3: display();
         break;
         case 4: cout<<"Exit"<<endl;
         break;
         default: cout<<"Invalid choice"<<endl;
      }
   } while(ch!=0);
   return 0;
}


