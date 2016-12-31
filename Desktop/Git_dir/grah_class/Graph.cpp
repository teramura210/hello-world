#include "Graph.h"

Graph3Class::Graph3Class()
{
	gp = popen("gnuplot","w");
	fprintf(gp, "set xrange [-1.2:1.2]\n"); // 範囲の指定
	fprintf(gp, "set yrange [-1.2:1.2]\n");
	fprintf(gp, "set zrange [10:0]\n");
	fprintf(gp, "set xlabel \"x\"\n"); // ラベル表示
	fprintf(gp, "set ylabel \"y\"\n");
	fprintf(gp, "set zlabel \"z\"\n");
}

//Graph3Class::~Graph3Class()
//{
	//fprintf(gp,"quit\n");
//}
#if 1
void Graph3Class::Init()
{

}
#endif
#if 1
void Graph3Class::PrintGraphPoint(double x,double y,double z)
{
	fprintf(gp, "splot '-' with points pointtype 1\n");
	fprintf(gp,"%f\t%f\t%f\n",x,y,z);
	fprintf(gp,"e\n");

}
#endif
#if 0
void Graph3Class::PrintLine(double x,double y,double z)
{

}
#endif
