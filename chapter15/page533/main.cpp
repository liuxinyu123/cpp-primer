
class NoDerived final
{

};

class Base 
{

};

class Final final : public Base
{

};

class Bad : public NoDerived
{

};
