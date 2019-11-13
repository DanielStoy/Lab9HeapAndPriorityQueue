#include "framework.h"
#include "Lab9HeapAndPriorityQueueDll.h"


//Queue stuffs
PriorityNode::PriorityNode(int val, int Priority) {
	priority = Priority;
	value = val;
}

PriorityQueueWQueue::PriorityQueueWQueue() {

}

bool PriorityQueueWQueue::insert(int num, int count) {
	int priority = 0;
	for (int i = 0; i < queue.size(); i++) {
		if (num > queue[i].value){
			queue[i].priority++;
		}
		else {
			priority++;
		}
	}
	queue.push_back(PriorityNode(num, priority));
	return true;
}

bool PriorityQueueWQueue::remove(int loc) { //Imma guess location means priority
	bool removed = false;
	for (int i = 0; i < queue.size(); i++) {
		if (queue[i].priority == loc) {
			removed = true;
			queue.erase(queue.begin() + i);
		}
	}
	if (removed) {
		for (int i = 0; i < queue.size(); i++) {
			if (queue[i].priority > loc) {
				queue[i].priority--;
			}
		}
		return true;
	}
	return false;
}

 std::string PriorityQueueWQueue::printQueue() {
	std::vector<PriorityNode> temp = queue;
	std::string returnString;
		for (int i = 0; i < queue.size(); i++) {
			temp = queue;
			for (int j = 0; j < queue.size(); j++) {
				if (temp[0].priority == i) {
					returnString += std::to_string(queue[j].value) + " ";
				}
				temp.erase(temp.begin());
			}
		}
	return returnString;
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
	enqueue(holder);

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
bool PriorityQueueWHeap::enqueue(int Loc)
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
	return enqueue(parentLoc);
}

//Not needed but will be left since it shows how to find children
//Goes from the top and works it's way down
bool PriorityQueueWHeap::IsValidHeap(int loc) {
	//return true;
	//Get Children
	int left = 2 * loc + 1;
	int right = 2 * (loc + 1);
	//Check if left or right are out of range

	if (left >= Heap.size() || right >= Heap.size())
	{
		return true;
	}

	//see if children are less than parent and that children are heaps
	else if (Heap[loc] >= Heap[left] && Heap[loc] >= Heap[right] && IsValidHeap(left) && IsValidHeap(right))
	{
		return true;
	}

	return false;
}

bool PriorityQueueWHeap::remove(int loc) {
	//Swap with last element
	int temp = Heap[loc];
	Heap[loc] = Heap.back();
	Heap.back() = temp;

	//Delete the last element
	Heap.pop_back();


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