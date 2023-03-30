#pragma once
#include <iostream>
//stack allocated array
// template<typename T, size_t S>
// class Array{
//     public:
//         size_t Size() const {return S;}

//         //index operator
//         T& operator[](size_t index) {return m_Data[index];}

//         const T& operator[](size_t index) const {return m_Data[index];}
//     private:
//         T m_Data[S];


// };
template<typename T, size_t S>
class Array
{
    public:
        Array() {}
        size_t Size() {return S;}
        // index operator
        T& operator[](size_t Index) {return m_Data[Index];}
        //index operator for const reading
        const T& operator[](size_t Index) const {return m_Data[Index];}
        
    private:
        T m_Data[S];

};