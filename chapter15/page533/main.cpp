
class NoDerived final
{

};

class Base 
{

};

class Final final : public Base
{

};

class Bad1 : public NoDerived
{

};

class Bad2 : public Final
{

};
