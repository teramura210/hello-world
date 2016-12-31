#ifndef __GRAPH_H__
#define __GRAPH_H__

#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <unistd.h>
using namespace std;
class Graph3Class{
	private:
		FILE *gp;	
	public:
		Graph3Class();
		~Graph3Class(){};
		void Init(){};
		void PrintGraphPoint(double x,double y,double z);
		//void PrintLine(double x,double y,double z);

};

#endif
