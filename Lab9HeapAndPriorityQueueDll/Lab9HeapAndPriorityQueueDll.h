// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the LAB9HEAPANDPRIORITYQUEUEDLL_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// LAB9HEAPANDPRIORITYQUEUEDLL_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef LAB9HEAPANDPRIORITYQUEUEDLL_EXPORTS
#define LAB9HEAPANDPRIORITYQUEUEDLL_API __declspec(dllexport)
#else
#define LAB9HEAPANDPRIORITYQUEUEDLL_API __declspec(dllimport)
#endif

#include <Queue>
#include <vector>
#include <algorithm>

// This class is exported from the dll
class LAB9HEAPANDPRIORITYQUEUEDLL_API PriorityQueueWQueue {
public:
	bool insert(int num);
	bool remove(int loc);
	bool printQueue();
	// TODO: add your methods here.
private:
	std::vector<int> queue; // i dunno what the hell is going on
};

class LAB9HEAPANDPRIORITYQUEUEDLL_API PriorityQueueWHeap {
public:
	//PriorityQueueWHeap();
	bool insert(int num);
	bool remove(int loc);
	bool printQueue();
	bool IsValidHeap(int loc);

private:
	std::vector<int> Heap; //I think we just do heap stuffs with this
	//Node* top;

	bool engueue(int loc);

};

class LAB9HEAPANDPRIORITYQUEUEDLL_API Node {
public:
	int val;
	Node* left;
	Node* right;

	Node(Node* Left, Node* Right, int Val);
	Node(int Val);
	Node();
};
