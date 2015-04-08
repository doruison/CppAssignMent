
class HasPtr{
public:
	HasPtr(const std::string & s = std::string()) :
		ps(new std::string(s)), i(0), use(new int(1)){}
	~HasPtr();

	HasPtr &operator=(const HasPtr& in);
	HasPtr(const HasPtr&);
	std::string const getps(){ return *ps; }
	
private:
	std::string *ps;
	int i;
	int * use;



};


