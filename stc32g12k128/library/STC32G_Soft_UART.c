/*---------------------------------------------------------------------*/
/* --- STC MCU Limited ------------------------------------------------*/
/* --- STC 1T Series MCU Demo Programme -------------------------------*/
/* --- Mobile: (86)13922805190 ----------------------------------------*/
/* --- Fax: 86-0513-55012956,55012947,55012969 ------------------------*/
/* --- Tel: 86-0513-55012928,55012929,55012966 ------------------------*/
/* --- Web: www.STCMCU.com --------------------------------------------*/
/* --- Web: www.STCMCUDATA.com  ---------------------------------------*/
/* --- QQ:  800003751 -------------------------------------------------*/
/* ���Ҫ�ڳ�����ʹ�ô˴���,���ڳ�����ע��ʹ����STC�����ϼ�����            */
/*---------------------------------------------------------------------*/

/*************	����˵��	**************

���ļ�Ϊģ�⴮�ڷ��ͳ���, һ��Ϊ���Լ����.

���ڲ���:9600,8,n,1.

���Ը�����ʱ���Զ���Ӧ.

******************************************/

#include	"STC32G_Soft_UART.h"

sbit	P_TXD = P3^1;	//����ģ�⴮�ڷ��Ͷ�,����������IO

//========================================================================
// ����: void	BitTime(void)
// ����: λʱ�亯����
// ����: none.
// ����: none.
// �汾: VER1.0
// ����: 2013-4-1
// ��ע: 
//========================================================================
void	BitTime(void)
{
	u16 i;
	i = ((MAIN_Fosc / 100) * 138) / 130000L - 1;		//������ʱ��������λʱ��
	while(--i);
}

//========================================================================
// ����: void	TxSend(uchar dat)
// ����: ģ�⴮�ڷ���һ���ֽڡ�9600��N��8��1
// ����: dat: Ҫ���͵������ֽ�.
// ����: none.
// �汾: VER1.0
// ����: 2013-4-1
// ��ע: 
//========================================================================
void	TxSend(u8 dat)
{
	u8	i;
	EA = 0;
	P_TXD = 0;
	BitTime();
	for(i=0; i<8; i++)
	{
		if(dat & 1)		P_TXD = 1;
		else			P_TXD = 0;
		dat >>= 1;
		BitTime();
	}
	P_TXD = 1;
	EA = 1;
	BitTime();
	BitTime();
}

//========================================================================
// ����: void PrintString(unsigned char code *puts)
// ����: ģ�⴮�ڷ���һ���ַ�����9600��N��8��1
// ����: *puts: Ҫ���͵��ַ�ָ��.
// ����: none.
// �汾: VER1.0
// ����: 2013-4-1
// ��ע: 
//========================================================================
void PrintString(unsigned char code *puts)
{
    for (; *puts != 0;	puts++)  TxSend(*puts);
}
