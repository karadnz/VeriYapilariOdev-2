#include "Radix.hpp"

int Radix::getMaxStepCount()
{
    int max = 0;

    for(int i = 0; i < length; i++)
    {
        if(StepCount(numbers[i] > max))
        max = StepCount(numbers[i]);
    }
    return (max);
}

int Radix::StepCount(int number)
{
    number = abs(number);
    int digitCount = 0;

    while (number > 0)
    {
        digitCount++;
        number /= 10;
    }

    return (digitCount);
}

Radix::Radix(int *numbers, int length)
{
    this->numbers = new int[length];
    this->length = length;

    for(int i = 0; i < length; i++)
    {
        this->numbers[i] = numbers[i];
    }
    
    queues = new Queue* [10]; //niye fix bi sayi

    for(int i = 0; i < 10; i++)
    {
        queues[i] = new Queue();
    }

    maxStep = getMaxStepCount();

}

int* Radix::QueueCurrentLengths(){
	int *lengths = new int[10];

	for(int i=0;i<10;i++)
    {
		lengths[i] = queues[i]->count();
	}
	return lengths;
}

int *Radix::sort()
{
    int numIndex = 0;

    for(; numIndex<length; numIndex++)
    {
        int stepValue = numbers[numIndex] % 10;
        int num = numbers[numIndex];

        queues[stepValue]->enqueue(num);

    }

    for(int i = 1; i < maxStep; i++)
    {
        int *qlengths = QueueCurrentLengths();

        for(int j = 0; j < 10; j++)
        {
            int len = qlengths[j];

            for(; len > 0; len--)
            {
                int number = queues[j]->peek();

                queues[j]->dequeue();

                int stepValue = (number / (int)pow(10, i)) % 10;
                queues[stepValue]->enqueue(number);
            }
        }
        delete []qlengths;
    }

    int *ordered = new int[length];
    numIndex = 0;

    for(int index = 0; index < 10; index++)
    {
        while(!queues[index]->isEmpty())
        {
            int number = queues[index]->peek();
            ordered[numIndex++] = number;
            queues[index]->dequeue();
        }
    }

    return ordered;
}

Radix::~Radix()
{
    delete [] numbers;
    for(int i = 0; i < 10; i++)
    {
        delete queues[i];
    }
    delete []queues;
}