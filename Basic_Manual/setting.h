#ifndef SETTING_H
#define SETTING_H
//~~~~~~~~~~����~~~~~~~~��ǰ״̬~~~~~~~~~~�Ⱦ�����~~~~~~~~~~~~~~~~~~~
//CAN����,1ʹ�ܣ�0��ֹ
#define CANSetting 			0

//��ʼ�������������Ư��1ʹ�ܣ�0��ֹ
#define GyroFloatSetting 	1

//���Ź���1ʹ�ܣ�0��ֹ
#define WatchDogSetting 	1

//�״ 1ʹ�ܣ�0��ֹ
#define LidarSetting 		1

//������ݔ,1ʹ�ܣ�0��ֹ
#define TransSetting        0

//���ߴ��� 1ʹ�ܣ�0��ֹ  
#define WirelessSetting     0

//�ư壬1ʹ�ܣ�0��ֹ
#define LightBoardSetting 	0

//����LCDҳ����ʾ���ݣ�1ʹ�ܣ�0��ֹ��������������ʹ��LCD_Save��LCD_Load����
#define LCDBufferSetting 	0

//shortcut��1ʹ�ܣ�0��ֹ
#define ShortcutSetting 	0		//LCDBufferSetting��1

//��ͣ����1ʹ�ܣ�0��ֹ
#define HaltSetting 		0		//LCDBufferSetting��1

//�ֱ���1ʹ�ܣ�0��ֹ
#define ManualSetting		1		//CANSetting��1

//�ֶ������ߺ�����1ʹ�ܣ�0��ֹ
#define RouteGroup1Setting	1		//ManualSetting��1��ManualSetting��1

//�������Զ��ָ�״̬��1ʹ�ܣ�0��ֹ
#define RestorationSetting	0

//databackʹ�ܣ�1ʹ�ܣ�0��ֹ
#define DatabackSetting    1

//�߳�ʹ��
#define WalkGroundEnable	0

//����/���ֵ���ѡ��def���֣�ndef����
//#define WheelSelectSetting	1

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~���ֹ��ܺ��÷�˵��~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//--------------------------------------------setting.h----------------------------------------------------------------------
//������Ӧע�����ñ�־λ������ֻ��������Ҫ�Ĳ���
//��������Ҫ��������ԭ��1.ģ�����̫�ණ��֮��������࣬�����벻��Ҫ�Ķ�����ʹ��ĳ���С�ܶ࣬��дҲ�����
//						  2.���������д���������Ķ���������ģ�壬�����Ļ��ƿ��Ա�֤������һ��û�������������Ķ�����������
//							Ҳ���ᱻ�����������Ѿ�����̫��ǰ�˵ĳɹ��ˣ�Ҫ��ȡ��ѵ~�ʹ��һ�仰�����ߵú��������ҴӲ�����
//
//----------------------------------------------LED-------------------------------------------------------------------------
//LED1����nandflash��ʼ���ڴ�װ�س���ǰ���𣬴�ʱ�Ѿ������ϵͳʱ�����ã�����ڴ棬���ö�ջ�ȹ���
//LED2����nandflash���ڴ�װ�س������������ǰ������Ҫ�ǲ����������Ʊȥ��
//LED3��ϵͳ������������Ź�ʹ�ܣ�ϵͳ���������ͻ�����
//LED4�����cpuռ����100%��������������ĳ�������ƾ���������ÿ����Ż�һ�³����ˣ�����ʵʱ�Ի�������
//
//------------------------------------------�����û�����--------------------------------------------------------------------
//���ڵĲ˵�Ϊ�����˵����������һ�����߶����˵��������û�������ÿ��menu���������8�����������Ҫ������Ӧmenu��countֵŶ��
//�����һ���˵������Ӻ�����һ���˵���Ӧλ�����Բ�����FOLDER
//����ڶ����˵������Ӻ�����һ���˵���Ӧλ�����Ա�����FOLDER
//���ڶ����˵���Ӧλ�����ԣ��������ʲô����
//���Ӻ���ʱ������дDisplay_Page=APPILICATION;LCD_Clear();LCD_Set(0,0);��Щ�Ѿ���ϵͳ��Ĭ����
//
//----------------------------------------�˵����system����----------------------------------------------------------------
//ģ�彫ԭ����system��values�µĺ������Ͻ�����һ���ļ���
//��Ӧ�Ķ���Gyro������3floatѡ�������ʱ����������Ư�����������ѡ���ֹ��ʼ�������Ư�����Դ��ӿ쿪���ٶ�Ŷ�ף���
//				  ������������ҵ���Ӧ�ĺ���
//			encoder��"Con:"��Ϊ0ʱ�����̲Ż��ж���
//			lightboard��������4.Yu Zhi���Բ�����ֵ������ƴ���ǲ��������ˣ�
//			Mecanum����������Ϣ����˵�ҳ��ʾ
//				���裺�Ƚ���3.SetPort���ö˿ڣ�Ȼ�����2.ChangeArgu���ò������ٽ���4.SaveChange��ã��Ժ�1.SpeedMode������������
//			SA_ST��ST�ǽӴ����أ�SA�ǽӽ����أ����뺯������һֱ��ˢ�£�����״̬�ı仯ʱʵʱ��ʾ��
//			Relay������һ���ڴ�ǰ������ܱ����ĺ������������ڴ�ǰsystem�����ĵڶ�ҳ���ܶ��˱�ʾû�м�������̯���ʼ磩��
//					������������ͷ�ˣ���д����Relay��������λ���������ơ������뺯�������ȿ��Կ���ǰ8���̵�����״̬��
//					��1-8���ɸı�̵�����״̬������ҳ���ɲ鿴����8���̵���
//			gps����Ϊ����ҳ��ֱ����ʾ��̬gps�����ҿ��Խ������ú��������
//			pid����Ϊ����ҳ��ֱ����ʾpid
//			���⣬������Ϊsave��load�ȵ�ѡ���ȥû���κη�Ӧ��ã����������ѡ�������ʾ��
//
//--------------------------------------------shortcut----------------------------------------------------------------------
//shortcut����ݷ�ʽ����˼���ҲŲ�����������Ƿ��ʵ��ҳ����ģ���ּ�����û���������ͬʱ�鿴�͸��ĸ���ȫ�ֱ�����Ĵ�����
//			�㻹Ϊ���û���������ʾgps�����̶������Ӵ�����״̬���������㻹Ϊ�ϲ���������һ���ף�gps����һ��0���������ճ���
//			���û�����Щͳͳ����shortcut��
//shortcut�ķ��أ���shortcut���˳�shortcutʱ��ע�ⲻ��ֹͣ����ֹͣ���Ὣshortcut���û�����һ���˳��������Է���Shortcutʹ��ǰ��
//				  LCDҳ�棬�����������û�����û��ִ����Ĳ���
//SaveScreen() and ShowScreen()������������ܷ��֣��뷵���û������LCD���治��һ���򵥵��£��ðɷ�����������ͷ�ˣ���
//								 �������������Ľ�֣�shortcut��ͳ��������С�ʵ��������������ҳ���½���shortcut����
//								 Ȼ�����~������ʲô�ã����ӣ�û�õģ������ˡ���
//����ͣ����ϣ����˳��û�����������shortcut����������������뵽�ˣ���Ϊ���������
//						1.�û������shortcutͬʱ���У��������Բ�����û��������ʺ���ʵʱ��Ҫ��ĳ��ϣ�������û�������
//						  LCDѭ����ʾ�����������������ʾ��
//						2.�û�����������˳�shortcutʱ�������������Ա�֤shortcut���򼴱����û����򲻼����ʾ��������ʱ
//						  Ҳ������������ʾ�������������û�������ʵʱ��Ҫ��ĳ���
//�Զ���SC_SelfDef�������������ĳ��������޸Ļ��߲鿴һЩ���ڱ��û�����ʹ�õı������ɽ�����Ϊȫ�ֱ���������κ�����
//					��Ҳ�����Լ���д�Զ���ĺ�������Ҫע��shortcut�������û����������������������У������������ͬʱ���ʾ�̬����
//					����Դʱ��������Բ���Ĵ���
//
//---------------------------------------------��ͣ��-----------------------------------------------------------------------
//��һ�»���ͣ�û�������ͣʱ����LCD���½ǳ���һ��halt��־���ٰ�һ�»�����û�����
//��ͣ�������ã�1.��shortcut���
//				2.ʹ��ʾ��holdס�����ڼ�¼����
//				3.���ڷֶε��Գ����޹���ͨ��ֹͣ�������ͣס���򣬶���ͣ������ֱ����ͣ����
//ע�⣺��ͣ������ֹͣ���û�����֮������ж�����Ҳ����˵�����һ���豸���Զ������û�����֮�⹤������ͣ����ֹͣ���˵�
//
//--------------------------------------------���ݼ�ֵ----------------------------------------------------------------------
//key_flag�Ѿ�ȡ�����ˣ�ȫ�ֱ������ݼ�ֵ�ķ������ʺ϶������ü���
//��ֵӦ��������ȡ�ã����û�������ΪOSMboxPend(AppKey1Mbox,0,&err)��OSMboxAccept(AppKey2Mbox,0,&err)
//                    ��shortcut������ΪOSMboxPend(SCKey1Mbox,0,&err)��OSMboxAccept(SCKey2Mbox,0,&err)
//1��2���������ڣ�1�����ڵȴ��û�������2������δ֪������ʱ������Ҳ����ϣ������÷����Բμ�MenuSystem.c��MenuShortcut.c
//ͨ����˵����1����
//
//----------------------------------------------uart------------------------------------------------------------------------
//���û���������󣬾�����Ϊ����fifo�жϣ����ֱ�ӷ�����fifo�жϿ��Լ������ݹ�ģ�ϴ�ʱ�жϵĴ�����ͬʱҲ���ή��̫��ʵʱ��
//�����ĸ�ʽͳһдΪUart0_��Uart2_���������Ժ�ͳһ����д����������ֲ
//
//----------------------------------------------GPIO------------------------------------------------------------------------
//����ΪRelay_Set��Relay_Clear��Relay_Read��SA_Read��ST_Read���������Relay:�̵�����SA���ӽ����أ�ST���Ӵ�����
//
//--------------------------------------------WatchDog----------------------------------------------------------------------
//�ж�ʱ��100ms���ж�����ʱ���������򣬱�֤������ת����Ҫ��Ϊ�����ߺͼ����״�������������Ƶ�
//����㿪�����Ź��������û�����ʱ����������Ե�޹ʷ������˵��ˣ���Ҫ���ɣ�һ����������֮��������
//
//-----------------------------------nandflash and ValuesManager------------------------------------------------------------
//�µ��ص㣺1.���ڿ�����ÿһ����ַ�ϸ������ˣ���Ȼ������40000�Ժ�ֵ
//			2.��Ϊ���뺯��ֱ����ʾ��ֵ���������Ƚ���˵�ҳ�棬��ʾ��Ϊ��̬��ʾ����������ڱ仯�������ǿ��Կ�����
//			3.����ַ��ֵС��30000ʱ����������nandflash��ȡѡ��
//�����ע�����Ϊ�˵�ַ��д�ظ���������def.h�ײ�ͳһ��������
//				  һ����ַ����д��2k���ݣ���Ҫд���������ʱ����Ҫ�ճ��㹻�ĵ�ַ��������������
//				  nandflash�л�������⣬������Ӧ��ECCУ��Ҳ����������Ȼ���������Ϊ��������ļ��ʻ���Ϊ0�������Ǳ���ʱ����
//				  ��Ҫ��nandflash�������Ϊ�ã�Ҫֱ�Ӱ�����д�ڱ����ĳ�ʼ����
//
//--------------------------------------------2440lib.c---------------------------------------------------------------------
//ʲô����û�ҵ�����ʵ�������Ѿ���ʧ�ˣ���ʧ�ĺ����ܶ࣬������������������¶����


//�����ջ����
#define TaskStkLengh    2048

extern OS_EVENT *I2cMbox;
extern OS_EVENT *MenuMbox;
extern OS_EVENT *AppStartMbox;
extern OS_EVENT *AppKey1Mbox;
extern OS_EVENT *AppKey2Mbox;
	#if ShortcutSetting
extern OS_EVENT *SCKey1Mbox;
extern OS_EVENT *SCKey2Mbox;
	#endif
extern OS_EVENT *RouteMbox;
extern OS_EVENT *ArmMbox;
extern OS_EVENT *AutoMbox;               

extern OS_STK	TaskI2cKeysStk		[TaskStkLengh];//���̷�������







extern OS_STK   TaskLcdDisplayStk  	[TaskStkLengh];//Һ����ʾ����
extern OS_STK  TaskLcdRefreshStk  	[TaskStkLengh];
extern OS_STK	TaskPathSelStk		[TaskStkLengh];//·����������
extern OS_STK  TaskUpdateStk       [TaskStkLengh];
	#if ManualSetting
extern OS_STK	TaskManualStk		[TaskStkLengh];
	#endif
extern OS_STK	TaskArmStk			[TaskStkLengh];
extern OS_STK  TaskRouteStk        [TaskStkLengh];
extern OS_STK   TaskAutoStk         [TaskStkLengh];
	#if WirelessSetting
extern OS_STK	TaskWirelessStk		[TaskStkLengh];
	#endif
	#if LidarSetting
extern OS_STK	TaskLidarStk		[TaskStkLengh];
	#endif
extern OS_STK	TaskSonicStk		[TaskStkLengh];
extern OS_STK  TaskAutoSwitchStk	[TaskStkLengh];
extern OS_STK  TaskRetryStk			[TaskStkLengh];

//�������ȼ�
//���ȼ���4-59֮��

#define UpdatePrio				4
#define I2cKeysPrio				5
#define PathSelPrio				6



 	#if LidarSetting
#define  TaskLidarPrio          16
 	#endif
 	
#define SonicPrio				13 	
#define AutoSwitchPrio			8
#define RetryPrio				9
#define AutoPrio				11
#define RoutePrio               12
#define ArmPrio                 10

	#if ManualSetting
#define ManualPrio				7
	#endif

#define TaskLcdDisplayPrio		14
#define TaskLcdRefreshPrio		15



#endif