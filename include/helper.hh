#include <stdio.h>
#include <string>

class Helper
{
public:
//	struct buffer {
//		int size;
//		char data[1];
//	};

	Helper();
	void printscan();
	void adding();
	int getPrivateVal();
	void setPrivateVal(int value);
	
private:
	int privateVal;
};
