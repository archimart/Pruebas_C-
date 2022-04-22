class CClaseA
{
public:
    CClaseA() {}
    virtual ~CClaseA() {}
};

class CClaseC
{
public:
    CClaseC() {}
    virtual ~CClaseC() {}
};

class CClaseB : public CClaseA
{
public:
    CClaseB() {}
    virtual ~CClaseB() {}
};

class CClasePrueba
{
public:
    static void Test();
    static void Test2(CClaseC *a_param);
};
