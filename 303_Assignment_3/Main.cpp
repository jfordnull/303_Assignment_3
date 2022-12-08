#include "Header.h"

int main() {
	//Testing queue
	queue<int> nums;
	for (int i = 1; i <= 3; i++) { nums.push(i); }
	cout << "Queue before method: " << endl;
	printQueue(nums);
	move_to_rear(nums);
	cout << "Queue after method: " << endl;
	printQueue(nums);

	//Testing recursion
	cout << endl << "Testing 'linear' for palindrome recursively" << endl;
	printResult(isPalindrome("linear"));
	cout << endl << "Testing 'civic' for palindrome recursively" << endl;
	printResult(isPalindrome("civic"));

	//Testing map
	map<string, string> stateDataMap;
	setupMap(stateDataMap);
	printMap(stateDataMap);
	stateDataMap["California"] = "Los Angeles";
	printCapital(stateDataMap);

	return 0;
}



