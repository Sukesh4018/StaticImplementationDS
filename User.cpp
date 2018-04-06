const int MAX = 100000;

struct node
{
	int next;
	int prev;
	int value;
	int pointer; // pointer to sorted and viceversa
} nodes[MAX+10], sorted[MAX+10];

int empty[MAX + 10], empty_sorted[MAX + 10], sze = 0, sze_sort = 0;

int created = 0, created_sort = 0;
int sz = 0, sz_sort = 0;
int root, root_sort, end, end_sort;

int GetNewId()
{
	if (sze > 0)
	{
		sze--;
		return empty[sze];
	}
	sz++;
	return sz - 1;
}

int GetNewIdSort()
{
	if (sze_sort > 0)
	{
		sze_sort--;
		return empty_sorted[sze_sort];
	}
	sz_sort++;
	return sz_sort - 1;
}


void insert(int value)
{
	if (sz == 0)
	{
		root = 0;
		nodes[root].next = 0;
		nodes[root].prev = 0;
		nodes[root].value = value;
		end = 0;
		sz++;
		return;
	}
	int id = GetNewId();
	nodes[id].next = root;
	nodes[id].prev = end;
	nodes[id].value = value;
	end = id;
	sz++;
}


void init(int track_size, int head){
	// TO DO
	
}

void request(int track){
	// TO DO
}

int fcfs(){
	int track_no = -1;	// TO DO : Need to be changed

	return track_no;
}

int sstf(){
	int track_no = -1;	// TO DO : Need to be changed

	return track_no;
}

int look(){
	int track_no = -1;	// TO DO : Need to be changed

	return track_no;
}

int clook(){
	int track_no = -1;	// TO DO : Need to be changed

	return track_no;
}

