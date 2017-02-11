#include "mst.h"
#include <memory>

int main()
{
	/*
	     2    3
      (0)--(1)--(2)
       |   / \   |
      6| 8/   \5 |7
       | /     \ |
      (3)-------(4)
            9      
	*/
	graph g(5);
	g.addEdge(0, 1, 2);
	g.addEdge(0, 3, 6);
	g.addEdge(1, 0, 2);
	g.addEdge(1, 2, 3);
	g.addEdge(1, 3, 8);
	g.addEdge(1, 4, 5);
	g.addEdge(2, 1, 3);
	g.addEdge(2, 4, 7);
	g.addEdge(3, 0, 6);
	g.addEdge(3, 1, 8);
	g.addEdge(3, 4, 9);
	g.addEdge(4, 1, 5);
	g.addEdge(4, 2, 7);
	g.addEdge(4, 3, 9);

	std::unique_ptr<MSTStrategy> s = std::make_unique<PrimeMST>();
	s->mst(g);
}