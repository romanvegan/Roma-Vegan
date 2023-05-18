#pragma once
class personnel{

public:

	personnel();
	static int count;
	static void print();
	void add();
	virtual void Show()=0;
	~personnel();

protected:
private:
}; 

