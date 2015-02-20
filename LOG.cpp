#include <iostream>
#include "LOG.h"


LOG::LOG(void){
	_start = 0; 
}

void LOG::reset(void){
	time_t *q;
	time_t stime, p;
	stime = time(NULL);
	//p = time(q);
	char *currenttimestring;
	char *Buf = new char[2048];

	ctime_s(Buf, 2048,&stime);
	//stime=sysfm
	for (int i = 0; i < 24; i++){
		if (*(Buf+i) != NULL){
			cout << *(Buf + i);
		}
	}
	//cout << stime << "\n" << p;
       //
	delete[] Buf;
}


void LOG::out(int module, string str){

	time_t stime;
	char *timebuf = new char[24];
	ctime_s(timebuf, 24, &stime);
	//console.log('{' + ts + 'ms} [' + module + '] ' + str);

}
//
//log = {
//_start: 0,
//
//	reset : function() {
//	d = new date(); log._start = d.gettime();
//	},
//
//	out : function(module, str) {
//		t = new date(); ts = t.gettime() - log._start;
//		console.log('{'+ts+'ms} ['+module+'] '+str);
//		document.getelementbyid('msg').innerhtml += ('{' + ts + 'ms} [' + module + '] ' + str + '<br>');
//	}
//};
