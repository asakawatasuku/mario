	//__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/
	//! @file   GameMain.cpp
	//!
	//! @brief  �Q�[���֘A�̃\�[�X�t�@�C��
	//!
	//! @date   ���t		
	//!
	//! @author ����Җ�	
	//__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/

// �w�b�_�t�@�C���̓ǂݍ��� ================================================
#define _GAMEMAIN_
#include "GameMain.h"
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include "GamePlay.h"

using namespace DirectX::SimpleMath;
using namespace DirectX;
using namespace std;

// ��ʉ𑜓x
static const int WINDOW_W = 640;
static const int WINDOW_H = 480;

// �v���g�^�C�v�錾 ====================================================

// �O���[�o���ϐ��̒�` ====================================================
GameBase* base;

// �֐��̒�` ==============================================================

//----------------------------------------------------------------------
//! @brief �Q�[���̏���������
//!
//! @param[in] �Ȃ�
//!
//! @return �Ȃ�
//----------------------------------------------------------------------
void InitializeGame(void)
{
	//�V�[���̏�����
	base = new GamePlay();

	//�@�摜�̓ǂݍ��� 
	g_grpHandle = new Texture(L"Resources\\Images\\TridentLogo.png");
	g_PongImage = new Texture(L"Resources\\Images\\PongImage.png");
	g_logo		= new Texture(L"Resources\\Images\\TridentLogo.png");

}

//----------------------------------------------------------------------
//! @brief �Q�[���̍X�V����
//!
//! @param[in] �Ȃ�
//!
//! @return �Ȃ�
//----------------------------------------------------------------------
void UpdateGame(void)
{
	base->Update();
}

//----------------------------------------------------------------------
//! @brief �Q�[���̕`�揈��
//!
//! @param[in] �Ȃ�
//!
//! @return �Ȃ�
//----------------------------------------------------------------------
void RenderGame(void)
{
	base->Render();
}

//----------------------------------------------------------------------
//! @brief �Q�[���̏I������
//!
//! @param[in] �Ȃ�
//!
//! @return �Ȃ�
//----------------------------------------------------------------------
void FinalizeGame(void)
{
	delete base;
}
