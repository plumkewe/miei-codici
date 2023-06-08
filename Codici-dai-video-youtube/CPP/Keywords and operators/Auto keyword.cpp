#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

//  Untitled.cpp

//  Link: https://youtu.be/2vOPEuiGXVo
//  Title: The "auto" keyword in C++
//  Creator: The Cherno

//  

class Device {};

class DeviceManager {
	
private:
	unordered_map<string, vector <Device*>> m_Devices;
	
	
public:
	const unordered_map<string, vector <Device*>>& GetDevices() const;
};

string GetName () {
	
	return "Ciao";
	
}

int main() {
	setlocale(LC_ALL, "italian");
	
	auto a = 5;
	auto aa = 5L;
	auto aaa = 5.5f;
	auto aaaa = "Ciao";
	
	
	auto name = GetName();
	string name2 = GetName();
	
	int b = name.size();
	
	
	vector <string> strings;
	strings.push_back("Apple");
	strings.push_back("Orange");
	
	for (vector <string>::iterator it = strings.begin(); it != strings.end(); it++) {
		
		cout << *it << endl; //  è uguale a scirevere
		
	}
	
	for (auto it = strings.begin(); it != strings.end(); it++) {
		
		cout << *it << endl;
		
	}
	
	using DeviceMap = unordered_map<string, vector <Device*>>; //  è uguale a
	typedef unordered_map<string, vector <Device*>> DeviceMap;
	
	DeviceManager dm;
//	const unordered_map<string, vector <Device*>> & devices = dm.GetDevices();
	//  è uguale a scrivere
	
//	DeviceMap& devices = dm.GetDevices();
	//  è uguale a
	
	const auto& devices = dm.GetDevices();
	
	
	return 0;
}

//  auto è comodo ma bisognerebbe evitarlo, a volte puo tornare utile e a volte
//  siamo quasi costretti ad usarlo (nei tempaltes)