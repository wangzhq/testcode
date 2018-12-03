
#include <iostream>
#include <string>
#include <memory>

using namespace std;

constexpr size_t cnt = 10;

int main(void)
{
	allocator<string> alloc;
	string *head = alloc.allocate(cnt);
	string *p = head; 
	alloc.construct(p++, string("ab"));
	alloc.construct(p++, string("cd"));
	cout << "alloc size is " << alloc.max_size() << endl;
	for(auto i = p; i != head;) {
		alloc.destroy(--i);
	}
	alloc.deallocate(head, cnt);
	return 0;
}

