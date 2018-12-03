
#include <iostream>
#include <string>
#include <functional>

// from json-c/json.h
#ifdef __GNUC__
#define THIS_FUNCTION_IS_DEPRECATED(func) func __attribute__ ((deprecated))
#elif defined(_MSC_VER)
#define THIS_FUNCTION_IS_DEPRECATED(func) __declspec(deprecated) func
#elif defined(__clang__)
#define THIS_FUNCTION_IS_DEPRECATED(func) func __deprecated
#else
#define THIS_FUNCTION_IS_DEPRECATED(func) func
#endif

using std::string;
using std::cout;
using std::endl;


class TestA {
public:

	//[[deprecated("don't use")]] void printf(const char* s);
	THIS_FUNCTION_IS_DEPRECATED(void printf(const char* s));
	//void printf(const char* s) __attribute__ ((deprecated));
	//
	void print(string s);
};

void TestA::printf(const char* s)
{
	cout << "printf " << s << endl;
}
void TestA::print(string s)
{
	cout << "print " << s << endl;
}

int main(void)
{
	TestA a;
	const char *str = "abc";
	
	a.printf(str);
	a.print(str);
	
	return 0;
}

