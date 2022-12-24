#include "Organizma.hpp"

Organizma::Organizma()
{
    this->head = NULL;
    this->size = 0;
}

//BAK BAK BAKBAK
Sistem* Organizma::FindPrevByPosition(int pos) //0 gelmeyecek bu fonk a
{
    if (pos < 0 || pos > size)
		throw("No Such Element");

	int index = 1;
	for (Sistem *itr = head; itr != NULL; itr = itr->next)
	{
		if (pos == index)
		{
			return (itr);
		}
		index++;
	}
	return NULL;
}
void Organizma::addBack(Sistem *node)
{
    insert(node, size);
}
void Organizma::insert(Sistem *node, int index)
{
    Sistem *iter = this->head;

    if (index < 0 || index > size)
		throw "Index out of Range";

	if (index == 0)
	{
		this->head = node;

		if (this->head->next != NULL)
		{
			this->head->next->prev = head;
		}
		
	}

	else
	{
		Sistem *prev = FindPrevByPosition(index);

		prev->next = node;

		if (prev->next->next != NULL)
		{
			prev->next->next->prev = prev->next;
		}
		
	}

	this->size++;


}


void Organizma::yazdir()
{
	Sistem *iter = head;

	while(iter != NULL)
	{
		for (int i = 0; i < 100; i++)
		{
			if (iter->organlar[i]->Tree->isBalanced())
			{
				cout << " ";
			}
			else
			{
				cout << "#";
			}
		}
		cout << endl;

		iter = iter->next;
		
	}
}

void Organizma::mutasyon()
{
	Sistem *iter = head;

	while(iter != NULL)
	{
		
		for (int i = 0; i < 100; i++)
		{
			if (iter->organlar[i]->Tree->shouldMutate())
			{
				
				Doku **dokular = iter->organlar[i]->Tree->returnMutated();

				//tree clear
				iter->organlar[i]->Tree = new BST();
				

				for (int j = 0; j < 20; j++)
				{
					int *arr = dokular[j]->returnArr();
					Radix *radix = new Radix(arr, dokular[j]->size);
					delete[] arr;
					arr = radix->sort();
					Doku *doku = new Doku(arr, dokular[j]->size);
					delete[] arr;
					delete radix;

					iter->organlar[i]->Tree->add(doku);
				}
				
			}
		}
		

		iter = iter->next;
		
	}
}