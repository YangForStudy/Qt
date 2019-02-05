/** @file    GlobalDefines.h
 *  @date    2019/02/04 11:17
 *  @brief   �������ݶ���
 *
 *  @author  yu
 *  @contact ylesliefish@gmail.com
 */

#pragma once
#include <QObject>
#include <QMetaType>

namespace qqfriendlist
{
	// ����״̬
	enum class OnlineState
	{
		Online, // ����
		Leave,	// �뿪
		Busy,   // æµ
	};

	// ��ϵ�˽ṹ
	struct Contact
	{
		QString name{};						// ����
		int sex{ 0 };						// �Ա� 0�� 1Ů
		QString nickName{};					// �ǳ�
		QString id{};						// QQ��
		QString signature{"nice to meet you .."};// ����ǩ��
		QString headPortrait{};				// ͷ��·��
		OnlineState onlineState{ OnlineState::Online }; // ����״̬
		bool isVip{0};						// VIP���� 0����vip; 1 vip; 2 svip 
	};

	// ����
	struct Group
	{
		QString groupName{};
		std::vector<Contact> contactList{}; // ��ϵ���б�
	};

	// ���ƽ�ɫ
	enum class CustomRole
	{
		IsGroupRole = Qt::UserRole + 1000, // �Ƿ���Ⱥ��
		GroupNameRole,					   // Ⱥ������
		ContactRole,					   // ��ϵ����Ϣ
		IsExpandedRole,					   // �Ƿ�����
		VideoRole,						   // ��Ƶͨ��role
		SignatureRole,					   // ����ǩ��
	};

	Q_DECLARE_METATYPE(Contact);
}