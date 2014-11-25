#include <iostream>
#include <cstring>
#include <time.h>
using namespace std;

class LOG{

public:
	LOG(void);
	void reset(void);
	void out(int module, string str);


private:
	int _start;


};
