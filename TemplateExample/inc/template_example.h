
class Template_Example
{
public:
   template <class T, class S>
   void swap(T& t1, S& t2);
};



template <class T>
class Template_Calc
{
public:
    T add(T t1, T t2);
    T Sub(T t1, T t2);
    T Mul(T t1, T t2);
    T Div(T t1, T t2);
};
