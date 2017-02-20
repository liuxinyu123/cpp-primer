
class A
{
public:
		virtual void f1 (int i)
		{
		}
		virtual void f2 ();
		virtual void f3 () final;
};

class B : public A
{

public: 
		void f1 (int i) override
		{}
		void f2 (int i) override
		{}
		void f3 () 
		{}
		void f4 () override
		{}
};
