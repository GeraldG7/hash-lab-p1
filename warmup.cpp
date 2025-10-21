#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;


int main() {
	unordered_map<string, int> records;
	records["Russia"] = 864;
	records["China"] = 745;
	records["Brazil"] = 651;
	records["Nigeria"] = 934;
	records["USA"] = 521;
	for (auto& [country, population] : records){
		cout << country << " "<< population << endl;
}
if(records.find("Canada")!=records.end())
cout << records["Canada"] << endl;
}
