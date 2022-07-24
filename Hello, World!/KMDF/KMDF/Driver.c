#include <ntifs.h>
#include <ntddk.h>
#ifndef _KMDF_H
#define _KMDF_H "KMDF"
#endif



/** ��������ں��� **/
/* ����ֹͣ */
VOID DriverUnload(PDRIVER_OBJECT pDriver)
{
	UNREFERENCED_PARAMETER(pDriver);
	DbgPrint("\n%s->DriverUnload()\n", _KMDF_H);
	return;
}

/* �������� */
NTSTATUS DriverEntry(PDRIVER_OBJECT pDriver, PUNICODE_STRING pPath)
{
	UNREFERENCED_PARAMETER(pPath);
	DbgPrint("\n%s->DriverEntry()\n", _KMDF_H);
	DbgPrint("%s->Hello, World!\n", _KMDF_H);
	pDriver->DriverUnload = DriverUnload;
	return STATUS_SUCCESS;
}