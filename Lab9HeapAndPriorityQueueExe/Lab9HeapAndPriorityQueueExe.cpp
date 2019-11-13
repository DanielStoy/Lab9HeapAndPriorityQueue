// Lab9HeapAndPriorityQueueExe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <chrono>
#include "..//Lab9HeapAndPriorityQueueDll/Lab9HeapAndPriorityQueueDll.h"

using namespace std;
typedef std::chrono::high_resolution_clock Clock;

int main()
{
	PriorityQueueWQueue myQueue;
	myQueue.insert(1);
	myQueue.insert(0);
	myQueue.insert(5);
	myQueue.insert(2);
	myQueue.insert(4);
	myQueue.insert(10);
	myQueue.insert(100);
	myQueue.insert(1000000);
	cout << myQueue.printQueue();
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
