#include "stdafx.h"
#include "Statistics.h"


namespace Framework
{

	// ��ǰ�������еĹ����߳���
	unsigned long Statistics::AliveTask = 0;
	// ��ǰδ��ɵ�д����
	unsigned long Statistics::PendingWrites = 0;
	// ��ǰδ��ɵĶ�����
	unsigned long Statistics::PendingReads = 0;
	// ��ǰ�����ӵ� socket ��
	unsigned long Statistics::ConnectingSockets = 0;
}