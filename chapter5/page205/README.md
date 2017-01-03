#返回数组指针    
> 因为数组不能拷贝，所以函数不能返回数组。 不过可以返回数组的指针或者引用    
#定义返回数组指针的函数    
1.直接定义，比较繁琐     Type(*func(paralist))[dimension]   
2.使用类型别名      
>  typedef int ArrT[10];     
>  using ArrT = int[10];      
3.使用尾置返回类型    auto func(paralist) -> int(*)[10]    
4.使用decltype    
>  int odd[] = {1,3,5,7,9};
>  int even[] = {2, 4, 6, 8};
>  decltype(odd) *func()     

