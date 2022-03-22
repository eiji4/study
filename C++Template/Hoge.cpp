#include "Hoge.h"



///////////////////////////////////////////////////////////////////////////////
// 
//	Template クラスのメンバ関数を cpp で定義する場合。
//  cpp ファイル内で使う予定の型のインスタンスを作成する。
//  逆に言うと、cpp で定義されていない型は使えなくなるので、
//  ライブラリを提供するときに予期しない型でインスタンス化されるのを防ぐことができる。
// 
///////////////////////////////////////////////////////////////////////////////

template<class T>
T Foo<T>::GetValue() {
	return value;
}

// template はヘッダ内で記述するが、もし別ファイルに分ける場合は明示的にインスタンス化する必要がある。
template class Foo<int>;
template class Foo<float>;




///////////////////////////////////////////////////////////////////////////////
// 
//	Template クラスに存在しない関数が使われている場合。
//  cpp ファイル内で必要な関数だけをインスタンス化。
// 
///////////////////////////////////////////////////////////////////////////////

template<class T>
T Bar<T>::GetValue() {
	return value;
}

// このようにテンプレートクラスのインスタンス化をすると、全てのメンバ関数もインスタンス化されてしまい、存在しない関数があるとエラーになる。
//template class Bar<int>;		// error
//template class Bar<float>;		// error

// テンプレートクラス全てをインスタンス化するのではなく、特定のメンバ関数だけを個別インスタンス化することができる。
template int Bar<int>::GetValue();
template float Bar<float>::GetValue();  // デフォルトの型であっても、明示的なインスタンス化が必要
