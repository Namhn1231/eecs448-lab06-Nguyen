#ifndef TESTSUITE_H
#define TESTSUITE_H
#include "LinkedListOfInts.h"
class TestSuite
{
	public:
	TestSuite();
	~TestSuite();
	void runTests();
	private:
	void testIsEmpty();
	void testSize();
	void testSearch();
	void testAddBack();
	void testAddFront();
	void testRemoveBack();	
	void testRemoveFront();
	
};

#endif
