#include <iostream>

using namespace std;

//  Untitled 2.cpp

//  Link: https://youtu.be/3dHBFBw13E0
//  Title: How to Write a C++ Class
//  Creator: The Cherno

//  Questo codice non è buono è molto semplice. 

class Log {
	
public:
	
	const int LogLevelError = 0;
	const int LogLevelWarning = 1;
	const int LogLEvelInfo = 2;
	
	
private:
	
	int m_LogLevel = LogLEvelInfo;
	
	
public:
	
	void SetLevel (int level) {
		
		m_LogLevel = level;
	}
	
	void Warn (const char* message) {
		
		if (m_LogLevel >= LogLevelWarning)
			cout << "[Warning]: " << message << endl;
	}
	
	void Error (const char* message) {
		
		if (m_LogLevel >= LogLevelError)
			cout << "[Error]: " << message << endl;
	}
	
	void Info (const char* message) {
		
		if (m_LogLevel >= LogLEvelInfo)
			cout << "[Info]: " << message << endl;
	}
	
	
};

int main() {
	setlocale(LC_ALL, "italian");
	
	Log log;
	log.SetLevel(log.LogLevelError);
	log.Warn("Hello");
	log.Info("Hello");
	log.Error("Hello");
	
	
	return 0;
}