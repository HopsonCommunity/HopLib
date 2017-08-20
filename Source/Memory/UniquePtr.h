#ifndef UNIQUEPTR_H_INCLUDED
#define UNIQUEPTR_H_INCLUDED

#include "../Utility/NonCopyable.h"

namespace HopLib {

template<typename T>
class UniquePtr : public NonCopyable
{

};

}

#endif // UNIQUEPTR_H_INCLUDED
