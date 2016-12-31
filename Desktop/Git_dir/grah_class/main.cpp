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
	gp = popen("gnuplot", "w"); // パイプを開き、gnuplotの立ち上げ
	fprintf(gp, "set xrange [-1.2:1.2]\n"); // 範囲の指定
	fprintf(gp, "set yrange [-1.2:1.2]\n");
	fprintf(gp, "set zrange [10:0]\n");
	fprintf(gp, "set xlabel \"x\"\n"); // ラベル表示
	fprintf(gp, "set ylabel \"y\"\n");
	fprintf(gp, "set zlabel \"t\"\n");
	
	// 三次元プロットのアニメーション表示
	for (int j = 0; j < 100; ++j) {
		usleep(50000); // usec待機
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
	fprintf(gp, "quit\n"); // gnuplotの終了
	//fprintf(gp, "exit\n"); // gnuplotの終了
	fflush(gp);
	pclose(gp); // パイプを閉じる*/

	Graph3Class testgraph;
	testgraph.Init();
	for(int i = 0;i<100;i++){
		usleep(50000);
		testgraph.PrintGraphPoint(i*0.01,i*0.01,i*0.01);
	}
	
	return 0;
}
