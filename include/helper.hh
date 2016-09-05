#include <stdio.h>
#include <string>

class Helper
{
public:
	Helper();
	void printscan();
	void adding();
	int getPrivateVal();
	void setPrivateVal(int value);
	
private:
	int privateVal;
};
