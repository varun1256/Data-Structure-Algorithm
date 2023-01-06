
#include<bits/stdc++.h>
using namespace std;

class Queue
{
	
	int rear, front;


	int size;
	int *arr;
public:
	Queue(int s)
	{
	front = rear = -1;
	size = s;
	arr = new int[s];
	}

	void enQueue(int value);
	int deQueue();
	void displayQueue();
};



void Queue::enQueue(int value)
{
   if(((rear+1)==front)||((rear==size-1)&&front==0)){
     printf("\nQueue is Full");

   }else{
   if(front==-1){
    front=front+1;
   }
   if(rear==(size-1)){
    rear=0;
   }else{
   rear=rear+1;
   }
   arr[rear]=value;
   }

}


int Queue::deQueue()
{  int a;
   if(front==-1){
    printf("\nQueue is empty");
   }
   else{
      a=arr[front];
   if(front==size-1){
    front=0;
   }
   else{
    front=front+1;
   }
   }
   return a;
}


void Queue::displayQueue()
{
	if (front == -1)
	{
		printf("\nQueue is Empty");
		return;
	}
	printf("\nElements in Circular Queue are: ");
	if (rear >= front)
	{
		for (int i = front; i <= rear; i++)
			printf("%d ",arr[i]);
	}
	else
	{
		for (int i = front; i < size; i++)
			printf("%d ", arr[i]);

		for (int i = 0; i <= rear; i++)
			printf("%d ", arr[i]);
	}
}

int main()
{
	Queue q(5);

	q.enQueue(14);
	q.enQueue(22);
	q.enQueue(13);
	q.enQueue(-6);
	q.displayQueue();

	printf("\nDeleted value = %d", q.deQueue());
	printf("\nDeleted value = %d", q.deQueue());

	q.displayQueue();

    q.enQueue(9);
	q.enQueue(20);
	q.enQueue(5);

	q.displayQueue();

	q.enQueue(20);
	return 0;
}
