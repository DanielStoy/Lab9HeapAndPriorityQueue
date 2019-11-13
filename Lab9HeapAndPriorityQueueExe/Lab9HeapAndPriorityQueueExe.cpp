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
	vector<int> nums;
	PriorityQueueWQueue myQueue;
	PriorityQueueWHeap myHeap;
	int amount = 0;
	int remove = 0;
	cout << "enter amount" << endl;
	cin >> amount;
	for (int i = 0; i < amount; i++) {
		nums.push_back(rand() % 10000);
	}
	Clock::time_point in1;
	Clock::time_point in2;

	cout << "insert and sort Queue" << endl;
	in1 = Clock::now();
	for (int i = 0; i < amount; i++) {
		myQueue.insert(nums[i]);
	}
	cout<< myQueue.printQueue() <<endl;
	in2 = Clock::now();
	cout << "queue insert took " << chrono::duration_cast<chrono::nanoseconds>(in2 - in1).count() << " nanoseconds" <<endl;
	cout << "remove all queue" << endl;
	in1 = Clock::now();
	for (int i = 0; i < amount; i++) {
		myQueue.remove(0);
	}
	in2 = Clock::now();
	cout << "queue remove took " << chrono::duration_cast<chrono::nanoseconds>(in2 - in1).count() << " nanoseconds" <<endl << endl <<endl;

	cout << "insert and sort heap" << endl;
	in1 = Clock::now();
	for (int i = 0; i < amount; i++) {
		myHeap.insert(nums[i]);
	}
	cout << myHeap.printQueue() << endl;
	in2 = Clock::now();
	cout << "heap insert took " << chrono::duration_cast<chrono::nanoseconds>(in2 - in1).count() << " nanoseconds" << endl;
	cout << "remove all Heap" << endl;
	in1 = Clock::now();
	for (int i = 0; i < amount; i++) {
		myHeap.remove(0);
	}
	in2 = Clock::now();
	cout << "Heap remove took " << chrono::duration_cast<chrono::nanoseconds>(in2 - in1).count() << " nanoseconds" << endl;
}
