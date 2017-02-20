
class A
{
public:
		virtual void f1 (int i)
		{
		}
		virtual void f2 ();
		void f3 ();
};

class B : public A
{

public: 
		void f1 (int i) override
		{}
		void f2 (int i) override
		{}
		void f3 () override
		{}
		void f4 () override
		{}
};
