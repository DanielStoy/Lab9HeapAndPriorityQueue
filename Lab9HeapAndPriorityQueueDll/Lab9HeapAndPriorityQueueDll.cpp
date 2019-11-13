#include "framework.h"
#include "Lab9HeapAndPriorityQueueDll.h"


//Queue stuffs

PriorityQueueWQueue::PriorityQueueWQueue() {

}

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

//PriorityQueueWHeap::PriorityQueueWHeap() {
//	top = nullptr;
//	size = 0;
//}

bool PriorityQueueWHeap::insert(int num) {
	int holder = Heap.size();
	Heap.push_back(num);

	//Enqueue from new location
	engueue(holder);

	//Old code that used a while instead of recursize
	//Kept for prosterity

	//int currentLoc = holder;
	//if (holder % 2 == 1)
	//{
	//	holder++;
	//}
	//int parentLoc = (holder / 2) - 1;
	////int holder = 0;
	//while (parentLoc >= 0)
	//{
	//	//If the Heap is now ordered end this while loop
	//	if (Heap[parentLoc] > Heap[currentLoc])
	//	{
	//		break;
	//	}
	//	//Swap values so the child is in the spot of the parent
	//	holder = Heap[parentLoc];
	//	Heap[parentLoc] = Heap[currentLoc];
	//	Heap[currentLoc] = holder;

	//	//Find the proper parent to this location
	//	currentLoc = parentLoc;
	//	holder = currentLoc;
	//	if (holder % 2 == 1)
	//	{
	//		holder++;
	//	}
	//	parentLoc = holder / 2 - 1;
	//}
	
	return true;
}

//Takes in a child and engueues upwards towards root
bool PriorityQueueWHeap::engueue(int Loc)
{
	//Explain the math behind parentLoc
	int parentLoc = (Loc - 1) / 2;
	//Has hit the end of the array
	if (parentLoc < 0)
	{
		return true;
	}

	//Preforms a swap
	if (Heap[parentLoc] < Heap[Loc]){
		int holder = Heap[parentLoc];
		Heap[parentLoc] = Heap[Loc];
		Heap[Loc] = holder;
	}

	//Continues on with parent
	return engueue(parentLoc);
}

//Not needed but will be left since it shows how to find children
//Goes from the top and works it's way down
bool PriorityQueueWHeap::IsValidHeap(int loc) {
	return true;
	//
	bool holder;
	int left = 2 * loc + 1;
	int right = 2 * (loc + 1);
	if (left >= Heap.size() || right >= Heap.size())
	{
		return true;
	}
	

	//if (right >= Heap.size())
	//{
	//	//Do something
	//}
	//else if (Heap[loc] >= Heap[right])
	//{
	//	holder = IsValidHeap(right);
	//}
	////Incorrect
	////This implementation may cause out of bounds errors
	////Get around this by checking against size
	////An out of bounds should return true
	////A failure of left or right should return false
	//
	////Still is failing since a false does not end the string
	//if (Heap[loc] < Heap[right] || Heap[loc] < Heap[left])
	//{
	//	
	//}
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