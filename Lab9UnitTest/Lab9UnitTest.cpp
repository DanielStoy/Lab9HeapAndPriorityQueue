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
	};
}
