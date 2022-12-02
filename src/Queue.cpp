#include "Queue.hpp"

Queue::Queue()
{
    cap = 100;
    front = 0;
    back = -1; //back once artacak sonra koyulacak o yuzden -1(ilk eleman 0 olsun diye)
    length = 0;
    items = new int[cap];
}

Queue::~Queue()
{
    delete []items;
}

void Queue::reserve(int newCap)
{
    int *tmp = new int[newCap];

    for(int i = 0, j = front; i < length; i++)
    {
        tmp[i] = items[j];
        j = (j + 1) % cap; // https://youtu.be/oMPYf_yVcY4?list=PLh8R31K8J_9ClTt-87z7y2F-uzOrDgIof&t=656

    }
    
    delete []items;
    items = tmp;

    cap = newCap;
    front = 0;
    back = length - 1;

}

void Queue::clear()
{
    front = 0;
    back = -1;
    length = 0;

}

int Queue::count()const
{
    return (length);
}

bool Queue::isEmpty()const
{
    return (length == 0);
}

const int& Queue::peek()
{
    if(isEmpty()) throw "empty Queue";
    
    return (items[front]);
}



void Queue::enqueue(const int& item)
{
    if(length == cap)
    {
        reserve (2 * cap);
    }
    
    back = (back + 1) % cap;
    items[back] = item;
    length++;

}

void Queue::dequeue(const int& item) //silmek
{
    if(isEmpty()) throw "empty Queue";
    
    front = (front + 1) % cap;
    length--;

}