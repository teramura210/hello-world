#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <unistd.h>
#include "Graph.h"
using namespace std;
int main(void) 
{
/*	FILE *gp;
	double x,y,z,t;
	gp = popen("gnuplot", "w"); // $B%Q%$%W$r3+$-!"(Bgnuplot$B$NN)$A>e$2(B
	fprintf(gp, "set xrange [-1.2:1.2]\n"); // $BHO0O$N;XDj(B
	fprintf(gp, "set yrange [-1.2:1.2]\n");
	fprintf(gp, "set zrange [10:0]\n");
	fprintf(gp, "set xlabel \"x\"\n"); // $B%i%Y%kI=<((B
	fprintf(gp, "set ylabel \"y\"\n");
	fprintf(gp, "set zlabel \"t\"\n");
	
	// $B;0<!85%W%m%C%H$N%"%K%a!<%7%g%sI=<((B
	for (int j = 0; j < 100; ++j) {
		usleep(50000); // usec$BBT5!(B
		fprintf(gp,"splot '-' with lines linetype 2\n");
		for (int i=0;i<10;i++){
			t = 10-i;
			x = cos(t+j);
			y = sin(t+j);
			z = t;
			fprintf(gp,"%f\t%f\t%f\n",x,y,z);
		}
		fprintf(gp, "e\n");
	}
	fprintf(gp, "quit\n"); // gnuplot$B$N=*N;(B
	//fprintf(gp, "exit\n"); // gnuplot$B$N=*N;(B
	fflush(gp);
	pclose(gp); // $B%Q%$%W$rJD$8$k(B*/

	Graph3Class testgraph;
	testgraph.Init();
	for(int i = 0;i<100;i++){
		usleep(50000);
		testgraph.PrintGraphPoint(i*0.01,i*0.01,i*0.01);
	}
	
	return 0;
}
