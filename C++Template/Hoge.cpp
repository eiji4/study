#include "Hoge.h"



///////////////////////////////////////////////////////////////////////////////
// 
//	Template �N���X�̃����o�֐��� cpp �Œ�`����ꍇ�B
//  cpp �t�@�C�����Ŏg���\��̌^�̃C���X�^���X���쐬����B
//  �t�Ɍ����ƁAcpp �Œ�`����Ă��Ȃ��^�͎g���Ȃ��Ȃ�̂ŁA
//  ���C�u������񋟂���Ƃ��ɗ\�����Ȃ��^�ŃC���X�^���X�������̂�h�����Ƃ��ł���B
// 
///////////////////////////////////////////////////////////////////////////////

template<class T>
T Foo<T>::GetValue() {
	return value;
}

// template �̓w�b�_���ŋL�q���邪�A�����ʃt�@�C���ɕ�����ꍇ�͖����I�ɃC���X�^���X������K�v������B
template class Foo<int>;
template class Foo<float>;




///////////////////////////////////////////////////////////////////////////////
// 
//	Template �N���X�ɑ��݂��Ȃ��֐����g���Ă���ꍇ�B
//  cpp �t�@�C�����ŕK�v�Ȋ֐��������C���X�^���X���B
// 
///////////////////////////////////////////////////////////////////////////////

template<class T>
T Bar<T>::GetValue() {
	return value;
}

// ���̂悤�Ƀe���v���[�g�N���X�̃C���X�^���X��������ƁA�S�Ẵ����o�֐����C���X�^���X������Ă��܂��A���݂��Ȃ��֐�������ƃG���[�ɂȂ�B
//template class Bar<int>;		// error
//template class Bar<float>;		// error

// �e���v���[�g�N���X�S�Ă��C���X�^���X������̂ł͂Ȃ��A����̃����o�֐��������ʃC���X�^���X�����邱�Ƃ��ł���B
template int Bar<int>::GetValue();
template float Bar<float>::GetValue();  // �f�t�H���g�̌^�ł����Ă��A�����I�ȃC���X�^���X�����K�v