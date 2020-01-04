#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files:
#include <windows.h>
#include <memory.h>
#include <crtdbg.h>

class statBase
{
    //int *i;
public:
    //statBase() {i = new int(5);}
    virtual ~statBase() {delete i;}
};

class virtSub : public statBase
{
    virtual void newfunc() {}
};

void main()
{
    // Set up Memory allocation debugging
#ifdef _DEBUG
    _CrtSetDbgFlag ( _CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF );
#endif  // _DEBUG
    // Uncomment this line and put the memory allocation # for where there is a leak
    // _CrtSetBreakAlloc( 5790 ); 

    statBase *c1 = new virtSub();
    //delete c1;
}