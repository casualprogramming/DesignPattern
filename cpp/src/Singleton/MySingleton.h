#include "Singleton.h"
#include <string>

class MySingleton : public Singleton<MySingleton>
{
	friend class Singleton<MySingleton>;
	MySingleton();
public:
	void Log(std::string const& log);
};