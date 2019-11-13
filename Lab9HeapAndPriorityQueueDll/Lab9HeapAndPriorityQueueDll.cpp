#include "framework.h"
#include "Lab9HeapAndPriorityQueueDll.h"


//Queue stuffs
bool PriorityQueueWQueue::insert(int num) {
	return false;
}

bool PriorityQueueWQueue::remove(int loc) {
	return false;
}

bool PriorityQueueWQueue::printQueue() {
	return false;
}
//Heap stuffs

bool PriorityQueueWHeap::insert(int num) {
	return false;
}

bool PriorityQueueWHeap::remove(int loc) {
	return false;
}

bool PriorityQueueWHeap::printQueue() {
	return false;
}

Node::Node() 
{
	val = 0;
	left = nullptr;
	right = nullptr;
}

Node::Node(int Val) 
{
	val = Val;
	left = nullptr;
	right = nullptr;
}

Node::Node(Node* Left, Node* Right, int Val) 
{
	val = Val;
	left = Left;
	right = Right;
}