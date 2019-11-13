// Lab9HeapAndPriorityQueueExe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <chrono>
#include <cstdlib>
#include "..//Lab9HeapAndPriorityQueueDll/Lab9HeapAndPriorityQueueDll.h"

using namespace std;
typedef std::chrono::high_resolution_clock Clock;

int main()
{
	int sortMethod = 0;
	int amount = 0;
	cout << "enter queue method, 0 for queue, 1 for heap" << endl;
	cin >> sortMethod;
	cout << endl;
	cout << "enter amount" << endl;
	cin >> amount;
	cout << endl;
	Clock::time_point t1;
	Clock::time_point t2;

	if (sortMethod == 0) {
		PriorityQueueWQueue myQueue;
		t1 = Clock::now();
		for (int i = 0; i < amount; i++) {
			myQueue.insert(rand() % 10000);
		}
		cout << myQueue.printQueue();
		t2 = Clock::now();
	}
	else {
		PriorityQueueWHeap myHeap;
		t1 = Clock::now();
		for (int i = 0; i < amount; i++) {
			myHeap.insert(rand() % 10000);
		}
		cout << myHeap.printQueue();
		t2 = Clock::now();
	}

	cout << "That took " << chrono::duration_cast<chrono::nanoseconds>(t2 - t1).count() << " nanoseconds";
}
