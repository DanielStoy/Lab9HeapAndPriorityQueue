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

	if (sortMethod == 0) {
		PriorityQueueWQueue myQueue;
		for (int i = 0; i < amount; i++) {
			myQueue.insert(rand() % 10000);
		}
		cout << myQueue.printQueue();
	}
	else {
		PriorityQueueWHeap myHeap;
	}
	////A simple main function to make it easier to test
	//int elems = 0;
	//int sort = 0;
	//cout << "How many elements would you like?" << endl;
	//cin >> elems;
	//cout << "which sort, 0: bubble, 1:insertion, 2: Merge, 3:Quick, 4:Radix" << endl;
	//cin >> sort;
	//Clock::time_point t1;
	//Clock::time_point t2;
	//if (sort == 0) {
	//	t1 = Clock::now();
	//	t2 = Clock::now();
	//}
	//else if (sort == 1) {
	//	t1 = Clock::now();
	//	t2 = Clock::now();
	//}
	//cout << chrono::duration_cast<chrono::nanoseconds>(t2 - t1).count() << " nanoseconds" << endl;
}
