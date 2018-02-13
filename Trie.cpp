#include <iostream>
using namespace std;

#define MAX_CHILD 27
#define MAX_N 5000


int num_nodes = 0;
int map[MAX_CHILD][MAX_N];
bool created[MAX_N];
bool is_end[MAX_N];

void insert(char[] value)
{
	int i = 0;
	int v = 0;
	while(value[i]!='0')
	{
		int c = value[i] - 'a';
		if(!created[map[c][v]])
		{
			map[c][v] = ++num_nodes
			created[v] = true;
		}
		v = map[c][v];
	}
	end[v] = true;
}

int search(char[] value)
{
	int i=0; int v=0;
	while(value[i]!='0')
	{
		int c = value[i] - 'a';
		if ( !created[map[c][v]] )
			return -1;
		v = map[c][v];
	}
	if(end[v])
		return v;
	else
		return -1;
}



int main()
{
	
}
