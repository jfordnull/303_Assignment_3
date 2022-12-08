#pragma once
#include <queue>
#include <string>
#include <iostream>
#include <iterator>
#include <map>
using std::queue; using std::string; using std::cout; using std::endl; using std::map; 
using std::iterator; using std::cin;

//Function takes STL queue as an argument, uses queue methods to move front item to rear
template<typename Item_Type>
void move_to_rear(queue<Item_Type>& q) {
	q.push(q.front());
	q.pop();
}

//Prints a copy of queue
template<typename Item_Type>
void printQueue(queue<Item_Type> q) {
	while (!q.empty()) {
		cout << q.front() << endl;
		q.pop();
	}
}

//Function compares front and back of string argument and trims it recursively.
//If front and back differ return false. If we reach the middle of the word, return true
bool isPalindrome(string str){
	if (str.length() <= 1) { return true; }
	else if (str[0] == str[str.length() - 1]) { return isPalindrome(str.substr(1, str.length() - 2)); }
	return false;
}

//Prints result of palindrome function
void printResult(bool palindrome) {
	if (palindrome) {
		cout << "Is a palindrome" << endl;
	}
	else {
		cout << "Not a palindrome" << endl;
	}
}

//Iterates through map and prints each state,capital pair
void printMap(map<string, string> usr_map) {
	map<string, string>::iterator itr;
	cout << endl;
	for (itr = usr_map.begin(); itr != usr_map.end(); itr++) {
		cout << "State: " << itr->first << " - Capital: " << itr->second << endl;
	}
	cout << endl;
}

//Looks for user's key and outputs corresponding capital
void printCapital(map<string, string> usr_map) {
	string key;
	cout << "Enter a state to search for: ";
	cin >> key;
	key[0] = toupper(key[0]);
	map<string, string>::iterator itr = usr_map.end();
	map<string, string>::iterator itr2 = usr_map.find(key);
	if (itr2 != itr) {
		cout << "Capital: " << itr2->second << endl;
	}
	else {
		cout << "State requested could not be found" << endl;
	}
}

//Configures stateDataMap
void setupMap(map<string, string>& usr_map) {
	usr_map["Nebraska"] = "Lincoln";
	usr_map["New York"] = "Albany";
	usr_map["Ohio"] = "Columbus";
	usr_map["California"] = "Sacramento";
	usr_map["Massachusetts"] = "Boston";
	usr_map["Texas"] = "Austin";
}


