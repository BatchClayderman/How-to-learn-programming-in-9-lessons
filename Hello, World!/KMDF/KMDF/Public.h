/*++

Module Name:

    public.h

Abstract:

    This module contains the common declarations shared by driver
    and user applications.

Environment:

    user and kernel

--*/

//
// Define an Interface Guid so that apps can find the device and talk to it.
//

DEFINE_GUID (GUID_DEVINTERFACE_KMDF,
    0xe342ad7f,0xa1f2,0x489d,0xad,0x84,0x74,0x82,0x9d,0x40,0x50,0xd4);
// {e342ad7f-a1f2-489d-ad84-74829d4050d4}
