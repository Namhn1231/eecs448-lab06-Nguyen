#include "TestSuite.h"

TestSuite::TestSuite(){}
TestSuite::~TestSuite(){}
	
void TestSuite::runTests(){
	
	testIsEmpty();
	testSize();
	testSearch();
	testAddBack();
	testAddFront();
	testRemoveBack();	
	testRemoveFront();
	
	}
	
void TestSuite::testIsEmpty(){
	LinkedListOfInts list;
	std::vector<int> listVector = list.toVector();
	
	bool emptyCheck = false;
	bool nonemptyCheck = false;
	
	if( listVector.empty() && list.isEmpty() ){
		emptyCheck = true;
	} 
	for(int i=0; i<10; i++){
		list.addFront(i);
	}
	listVector = list.toVector();
	if( !listVector.empty() && !list.isEmpty() ){
		nonemptyCheck = true;
	}
	
	std::cout << "====================\n";
	if(emptyCheck){
		std::cout << "isEmpty()'s check for an empty list: Passed\n";
	}
	else{
		std::cout << "isEmpty()'s check for an empty list: Failed\n";
	}
	if(nonemptyCheck){
		std::cout << "isEmpty()'s check for a non-empty list: Passed\n";
	}
	else{
		std::cout << "isEmpty()'s check for a non-empty list: Failed\n";
	}
}
	
void TestSuite::testSize(){
	LinkedListOfInts list;
	bool sizeCheck = true;
	std::vector<int> listVector = list.toVector();
	
	for(int i=0; i<10; i++){
		list.addFront(i);
		listVector = list.toVector();
		if(listVector.size() != (i+1)){
			sizeCheck = false;
		}
	}
	std::cout << "====================\n";
	if(sizeCheck){
		std::cout << "size()'s check for correct number: Passed\n";
	}
	else{
		std::cout << "size()'s check for correct number: Failed\n";
	}
}

void TestSuite::testSearch(){
	LinkedListOfInts list;
	bool existCheck = true;
	bool nonexistCheck = true;
	
	for(int i=0; i<10; i=i+2){
		list.addFront(i);
	}
	
	for(int i=0; i<10; i=i+2){
		if(!list.search(i)){
			existCheck = false;
		}
		if(list.search(i+1)){
			nonexistCheck = false;
		}
	}
	std::cout << "====================\n";
	if(existCheck){
		std::cout << "search()'s check for existing numbers: Passed\n";
	}
	else{
		std::cout << "search()'s check for existing numbers: Failed\n";
	}
	if(nonexistCheck){
		std::cout << "search()'s check for non-existing numbers: Passed\n";
	}
	else{
		std::cout << "search()'s check for non-existing numbers: Failed\n";
	}
	
}

void TestSuite::testAddBack(){
	LinkedListOfInts list;
	bool sizeCheck = true;
	bool backCheck = true;
	std::vector<int> listVector = list.toVector();
	
	for(int i=0; i<10; i++){
		list.addBack(i);
		listVector = list.toVector();
		if(listVector.size() != (i+1)){
			sizeCheck = false;
		}
		if(listVector.back() != (10-i)){
			backCheck = false;
		}
	}
	std::cout << "====================\n";
	if(sizeCheck){
		std::cout << "addBack()'s check for correct size: Passed\n";
	}
	else{
		std::cout << "addBack()'s check for correct size: Failed\n";
	}
	if(backCheck){
		std::cout << "addBack()'s check for number being added to the back: Passed\n";
	}
	else{
		std::cout << "addBack()'s check for number being added to the back: Failed\n";
	}
}

void TestSuite::testAddFront(){
	LinkedListOfInts list;
	bool sizeCheck = true;
	bool frontCheck = true;
	std::vector<int> listVector = list.toVector();
	
	for(int i=0; i<10; i++){
		list.addFront(i);
		listVector = list.toVector();
		if(listVector.size() != (i+1)){
			sizeCheck = false;
		}
		if(listVector.front() != i){
			frontCheck = false;
		}
	}
	std::cout << "====================\n";
	if(sizeCheck){
		std::cout << "addFront()'s check for correct size: Passed\n";
	}
	else{
		std::cout << "addFront()'s check for correct size: Failed\n";
	}
	if(frontCheck){
		std::cout << "addFront()'s check for number being added to the front: Passed\n";
	}
	else{
		std::cout << "addFront()'s check for number being added to the front: Failed\n";
	}
}

void TestSuite::testRemoveBack(){
	LinkedListOfInts list;
	bool sizeCheck = true;
	bool backCheck = true;
	std::vector<int> listVector = list.toVector();
	
	for(int i=0; i<10; i++){
		list.addFront(i);
	}
	listVector = list.toVector();
	for(int i=0; i<10; i++){
		list.removeBack();
		if(list.toVector().back() == listVector.back()){
			backCheck = false;
		}
		if(listVector.size() != (10-i)){
			sizeCheck = false;
		}
		listVector = list.toVector();
	}
	std::cout << "====================\n";
	if(sizeCheck){
		std::cout << "removeBack()'s check for correct size: Passed\n";
	}
	else{
		std::cout << "removeBack()'s check for correct size: Failed\n";
	}
	if(backCheck){
		std::cout << "removeBack()'s check for number being removed from the back: Passed\n";
	}
	else{
		std::cout << "removeBack()'s check for number being removed from the back: Failed\n";
	}
}

void TestSuite::testRemoveFront(){
	LinkedListOfInts list;
	bool sizeCheck = true;
	bool frontCheck = true;
	std::vector<int> listVector = list.toVector();
	
	for(int i=0; i<10; i++){
		list.addFront(i);
	}
	listVector = list.toVector();
	for(int i=0; i<10; i++){
		list.removeFront();
		if(list.toVector().front() == listVector.front()){
			frontCheck = false;
		}
		if(listVector.size() != (10-i+1)){
			sizeCheck = false;
		}
		listVector = list.toVector();
	}
	std::cout << "====================\n";
	if(sizeCheck){
		std::cout << "removeFront()'s check for correct size: Passed\n";
	}
	else{
		std::cout << "removeFront()'s check for correct size: Failed\n";
	}
	if(frontCheck){
		std::cout << "removeFront()'s check for number being removed from the front: Passed\n";
	}
	else{
		std::cout << "removeFront()'s check for number being removed from the front: Failed\n";
	}
}


