#include <ntddk.h>




extern "C" NTSTATUS DriverEntry(PDRIVER_OBJECT driver_object,PUNICODE_STRING registry_path) {

	// they are invalid for mapped drivers!
	UNREFERENCED_PARAMETER(driver_object);
	UNREFERENCED_PARAMETER(registry_path);

	DbgPrintEx(0, 0, "Driver mapped in kernel space!\n");

	return STATUS_SUCCESS;
}