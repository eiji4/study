
#include <iostream>
#include "Hoge.h"

// using を使ったテンプレートのエイリアス
using hoge_dbl = Hoge<double>;


int main()
{
    Hoge<int> hi;
    Hoge<float> hf;
    hoge_dbl hd;



    std::cout << hi.value << std::endl;
    std::cout << hf.value << std::endl;
    std::cout << hd.value << std::endl;
    std::cout << std::endl;
    
	std::cout << hi.convert<int>(8.4) << std::endl;
	std::cout << hi.convert<float>(8.4) << std::endl;
	std::cout << hd.convert<int>(8.4) << std::endl;
    std::cout << std::endl;

	Foo<int> fi;
	Foo<float> ff;
    //Foo<double> fd;
	std::cout << fi.GetValue() << std::endl;
	std::cout << ff.GetValue() << std::endl;
	//std::cout << fd.GetValue() << std::endl;  // cpp 内部で double 型がインスタンス化されていないので使えない
    std::cout << std::endl;

    Bar<int> bi;
    Bar<> bf;  // デフォルトで float 型
	std::cout << bi.GetValue() << std::endl;
	std::cout << bf.GetValue() << std::endl;
    std::cout << std::endl;

    MyArray<float, 10> arr_f;    
    std::cout << arr_f.NumArray() << std::endl;
	MyArray<double> arr_d;  // デフォルトパラメーターの 4 が使われる。
	std::cout << arr_d.NumArray() << std::endl;

}
