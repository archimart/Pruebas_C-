#include <clases.h>
// _ASSERT
#include <assert.h>
using namespace std;

void CClasePrueba::Test()
{
    CClaseA *pClase = new CClaseB();
    Test2(reinterpret_cast<CClaseC *>(pClase));
}

void CClasePrueba::Test2(CClaseC *a_param)
{
    CClaseB *pClase = dynamic_cast<CClaseB *>(a_param);
    assert(pClase);
}

int main()
{
    CClasePrueba::Test();
    return 0;
}