#include "pch.h"
#include "CppUnitTest.h"
#include <Queue>
#include <vector>
#include <string>
#include "..\Lab9HeapAndPriorityQueueDll\Lab9HeapAndPriorityQueueDll.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab9UnitTest
{
	TEST_CLASS(Lab9UnitTest)
	{
	public:
		TEST_METHOD(QueueRemoveTest2)
		{
			PriorityQueueWQueue myQueue;
			myQueue.insert(1);
			myQueue.insert(2);
			myQueue.insert(3);
			myQueue.insert(3);
			myQueue.insert(2);
			myQueue.insert(3);
			myQueue.insert(1);
			myQueue.insert(1);
			myQueue.insert(1);
			myQueue.insert(1);
			myQueue.insert(2);
			myQueue.insert(3);
			myQueue.insert(2);
			myQueue.insert(2);
			myQueue.insert(5);
			myQueue.insert(5);
			myQueue.insert(5);
			myQueue.insert(5);

			myQueue.remove(3);
			myQueue.remove(3);
			std::string a = "5 5 5 3 3 3 2 2 2 2 2 1 1 1 1 1 ";
			std::string b = myQueue.printQueue();
			Assert::AreEqual(a, b);
		}

		TEST_METHOD(QueueRemoveTest)
		{
			PriorityQueueWQueue myQueue;
			myQueue.insert(1);
			myQueue.insert(2);
			myQueue.insert(3);
			myQueue.insert(4);
			myQueue.insert(5);
			myQueue.insert(6);
			
			myQueue.remove(3);
			myQueue.remove(3);
			std::string a = "6 5 4 1 ";
			std::string b = myQueue.printQueue();
			Assert::AreEqual(a, b);
		}

		TEST_METHOD(QueueRemoveNone) {
			PriorityQueueWQueue myQueue;
			myQueue.insert(1);
			myQueue.insert(2);
			myQueue.insert(3);
			myQueue.insert(4);
			myQueue.insert(5);
			myQueue.insert(6);

			myQueue.remove(10);

			std::string a = "6 5 4 3 2 1 ";
			std::string b = myQueue.printQueue();

			Assert::AreEqual(a, b);
		}

		TEST_METHOD(QueueInsertPrint) {
			PriorityQueueWQueue myQueue;
			myQueue.insert(1);
			myQueue.insert(2);
			myQueue.insert(3);

			std::string a = "3 2 1 ";
			std::string b = myQueue.printQueue();

			Assert::AreEqual(a, b);
		}

		TEST_METHOD(QueueInsertPrint2) {
			PriorityQueueWQueue myQueue;
			myQueue.insert(1);
			myQueue.insert(2);
			myQueue.insert(3);
			myQueue.insert(1);
			myQueue.insert(2);
			myQueue.insert(3);
			myQueue.insert(1);
			myQueue.insert(2);
			myQueue.insert(3);
			myQueue.insert(1);
			myQueue.insert(2);
			myQueue.insert(3);
			myQueue.insert(1);
			myQueue.insert(2);
			myQueue.insert(3);
			myQueue.insert(1);
			myQueue.insert(2);
			myQueue.insert(3);

			std::string a = "3 3 3 3 3 3 2 2 2 2 2 2 1 1 1 1 1 1 ";

			std::string b = myQueue.printQueue();

			Assert::AreEqual(a, b);
		}

		TEST_METHOD(Heap_Insert_InOrder)
		{
			PriorityQueueWHeap myHeap;
			myHeap.insert(50);
			myHeap.insert(10);
			myHeap.insert(20);
			myHeap.insert(5);
			myHeap.insert(5);
			myHeap.insert(6);
			myHeap.insert(8);

			std::string a = "50 10 20 5 5 6 8 ";
			std::string b = myHeap.printQueue();

			Assert::AreEqual(a, b);
		}

		TEST_METHOD(Heap_Insert_OutofOrder)
		{
			PriorityQueueWHeap myHeap;
			myHeap.insert(8);
			myHeap.insert(6);
			myHeap.insert(5);
			myHeap.insert(5);
			myHeap.insert(20);
			myHeap.insert(10);
			myHeap.insert(50);

			std::string a = "50 8 20 5 6 5 10 ";
			std::string b = myHeap.printQueue();

			Assert::AreEqual(a, b);

		}

		TEST_METHOD(Heap_Remove_Simple)
		{
			PriorityQueueWHeap myHeap;
			myHeap.insert(8);
			myHeap.insert(6);
			myHeap.insert(5);
			myHeap.insert(5);
			myHeap.insert(20);
			myHeap.insert(10);
			myHeap.insert(50);

			myHeap.remove(6);

			std::string a = "50 8 20 5 6 5 ";
			std::string b = myHeap.printQueue();

			Assert::AreEqual(a, b);			
		}

		TEST_METHOD(Heap_Remove_None)
		{
			PriorityQueueWHeap myHeap;
			myHeap.insert(8);
			myHeap.insert(6);
			myHeap.insert(5);
			myHeap.insert(5);
			myHeap.insert(20);
			myHeap.insert(10);
			myHeap.insert(50);

			Assert::IsFalse(myHeap.remove(7));

			std::string a = "50 8 20 5 6 5 10 ";
			std::string b = myHeap.printQueue();

			Assert::AreEqual(a, b);
		}
		
		TEST_METHOD(Heap_Remove_Root)
		{
			PriorityQueueWHeap myHeap;
			myHeap.insert(8);
			myHeap.insert(6);
			myHeap.insert(5);
			myHeap.insert(5);
			myHeap.insert(20);
			myHeap.insert(10);
			myHeap.insert(50);

			myHeap.remove(0);

			std::string a = "20 8 10 5 6 5 ";
			std::string b = myHeap.printQueue();

			Assert::AreEqual(a, b);
		}
	};
}
