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