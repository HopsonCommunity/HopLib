#ifndef NONCOPYABLE_H_INCLUDED
#define NONCOPYABLE_H_INCLUDED

namespace HopLib {

class NonCopyable
{
    public:
        NonCopyable() = default;
        NonCopyable(const NonCopyable& other) = delete;
        NonCopyable& operator =(const NonCopyable& other) = delete;
};

}

#endif // NONCOPYABLE_H_INCLUDED
