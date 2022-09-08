/*
 * r2h_dlink_error_code.h
 *
 *  Created on: 2017-7-11
 *      Author: CrazyHein
 */

#ifndef R2H_DLINK_ERROR_CODE_H_
#define R2H_DLINK_ERROR_CODE_H_

#include "r2h_dlink_data_type.h"

//extern R2H_UINT32 R2H_DLINK_ERROR_CODE_PREFIX;
#define R2H_DLINK_ERROR_CODE_PREFIX		(0x00010000)

#define R2H_DLINK_ERROR_CODE_MASK		(0xFFFF)
//Socket
#define R2H_DLINK_NO_ERROR				(R2H_INT32)(0x00000000)
#define R2H_DLINK_SOCKET_ERROR			(R2H_INT32)(0x00000001|R2H_DLINK_ERROR_CODE_PREFIX)
#define R2H_DLINK_BIND_ERROR			(R2H_INT32)(0x00000002|R2H_DLINK_ERROR_CODE_PREFIX)
#define R2H_DLINK_LISTEN_ERROR			(R2H_INT32)(0x00000003|R2H_DLINK_ERROR_CODE_PREFIX)
#define R2H_DLINK_ACCEPT_ERROR			(R2H_INT32)(0x00000004|R2H_DLINK_ERROR_CODE_PREFIX)
#define R2H_DLINK_CONNECT_ERROR			(R2H_INT32)(0x00000005|R2H_DLINK_ERROR_CODE_PREFIX)

#define R2H_DLINK_INVALID_IPADDR		(R2H_INT32)(0x0000000F|R2H_DLINK_ERROR_CODE_PREFIX)

//Data Packager
#define R2H_DLINK_OPERATION_TIMEOUT			(R2H_INT32)(0x00000010|R2H_DLINK_ERROR_CODE_PREFIX)
#define R2H_DLINK_INVALID_FRAME				(R2H_INT32)(0x00000011|R2H_DLINK_ERROR_CODE_PREFIX)
#define R2H_DLINK_LARGE_PACKAGE_SIZE		(R2H_INT32)(0x00000012|R2H_DLINK_ERROR_CODE_PREFIX)
#define R2H_DLINK_SMALL_PACKAGE_SIZE		(R2H_INT32)(0x00000013|R2H_DLINK_ERROR_CODE_PREFIX)
#define R2H_DLINK_LARGE_PACKAGE_QUANTITY	(R2H_INT32)(0x00000014|R2H_DLINK_ERROR_CODE_PREFIX)
#define R2H_DLINK_INVALID_PACKAGE_DATA_SIZE	(R2H_INT32)(0x00000015|R2H_DLINK_ERROR_CODE_PREFIX)
#define R2H_DLINK_CORRUPT_DATA				(R2H_INT32)(0x00000020|R2H_DLINK_ERROR_CODE_PREFIX)
#define R2H_DLINK_CORRUPT_INDEX				(R2H_INT32)(0x00000021|R2H_DLINK_ERROR_CODE_PREFIX)

#define R2H_DLINK_NETWORK_ERROR				(R2H_INT32)(0x00000030|R2H_DLINK_ERROR_CODE_PREFIX)
#define R2H_DLINK_TRANSID_MISMATCH			(R2H_INT32)(0x00000031|R2H_DLINK_ERROR_CODE_PREFIX)
#define R2H_DLINK_FUNC_MISMATCH				(R2H_INT32)(0x00000032|R2H_DLINK_ERROR_CODE_PREFIX)
#define R2H_DLINK_ADDRESS_MISMATCH			(R2H_INT32)(0x00000033|R2H_DLINK_ERROR_CODE_PREFIX)

#define R2H_DLINK_PROTOCOL_ERROR_START		(R2H_INT32)(0x00000040|R2H_DLINK_ERROR_CODE_PREFIX)

//Protocol
#define R2H_DLINK_INVALID_PROTOCOL				(R2H_INT32)(0x00000040|R2H_DLINK_ERROR_CODE_PREFIX)
#define R2H_DLINK_INVALID_FUNCTION				(R2H_INT32)(0x00000041|R2H_DLINK_ERROR_CODE_PREFIX)


//Memory Object
#define R2H_DLINK_CREATE_MEMORY_OBJECT			(R2H_INT32)(0x00000050|R2H_DLINK_ERROR_CODE_PREFIX)
#define R2H_DLINK_INVALID_MEMORY_ADDRESS		(R2H_INT32)(0x00000051|R2H_DLINK_ERROR_CODE_PREFIX)
#define R2H_DLINK_MEMORY_ACCESS_DENIED			(R2H_INT32)(0x00000052|R2H_DLINK_ERROR_CODE_PREFIX)
#define R2H_DLINK_MEMORY_RW_LOCK				(R2H_INT32)(0x00000053|R2H_DLINK_ERROR_CODE_PREFIX)
#define R2H_DLINK_MEMORY_DEVICE_IO_FULL			(R2H_INT32)(0x00000054|R2H_DLINK_ERROR_CODE_PREFIX)



//Server
#define R2H_DLINK_NULL_DATA_BUFFER				(R2H_INT32)(0x00000060|R2H_DLINK_ERROR_CODE_PREFIX)
#define R2H_DLINK_UNSUPPORTED_FUNCTION			(R2H_INT32)(0x00000061|R2H_DLINK_ERROR_CODE_PREFIX)
#define R2H_DLINK_INVALID_MEMORY_SEGMENT		(R2H_INT32)(0x00000062|R2H_DLINK_ERROR_CODE_PREFIX)
#define R2H_DLINK_OUT_OF_SERVER_BUFFER			(R2H_INT32)(0x00000063|R2H_DLINK_ERROR_CODE_PREFIX)
#define R2H_DLINK_SERVER_HAS_STARTED			(R2H_INT32)(0x00000064|R2H_DLINK_ERROR_CODE_PREFIX)
#define R2H_DLINK_CREATE_LISTEN_THREAD			(R2H_INT32)(0x00000065|R2H_DLINK_ERROR_CODE_PREFIX)
#define R2H_DLINK_CREATE_WORKER_SEM				(R2H_INT32)(0x00000066|R2H_DLINK_ERROR_CODE_PREFIX)
#define R2H_DLINK_SERVER_HAS_NOT_STARTED		(R2H_INT32)(0x00000067|R2H_DLINK_ERROR_CODE_PREFIX)
#define R2H_DLINK_INVALID_MEMORY_LENGTH			(R2H_INT32)(0x00000068|R2H_DLINK_ERROR_CODE_PREFIX)
//Master



#endif /* R2H_DLINK_ERROR_CODE_H_ */