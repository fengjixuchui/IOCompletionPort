

#ifndef _Statistics_H_
#define _Statistics_H_

namespace Framework
{
	class Statistics
	{
	public:
		// ��ǰ�������еĹ����߳���
		static unsigned long AliveTask;
		// ��ǰδ��ɵ�д����
		static unsigned long PendingWrites;
		// ��ǰδ��ɵĶ�����
		static unsigned long PendingReads;
		// ��ǰ�����ӵ� socket ��
		static unsigned long ConnectingSockets;
	};

}


#endif