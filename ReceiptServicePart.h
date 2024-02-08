/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "EfcDsrcApplication"
 * 	found in "../../asn1/../ttcn/AtsIS/lib/asn1/iso-patched/EfcDsrcApplication.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include "DateAndTime.h"
#include "Provider.h"
#include <NativeInteger.h>
#include <BIT_STRING.h>
#include "EfcDsrcApplication_StationType.h"
#include "ResultOp.h"
#include "ResultFin.h"
#include <constr_SEQUENCE.h>
#ifndef	_ReceiptServicePart_H_
#define	_ReceiptServicePart_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ReceiptServicePart */
typedef struct ReceiptServicePart {
	DateAndTime_t	 sessionTime;
	Provider_t	 sessionServiceProvider;
	long	 stationLocation;
	BIT_STRING_t	 sessionLocation;
	EfcDsrcApplication_StationType_t	 typeOfSession;
	ResultOp_t	 sessionResultOperational;
	ResultFin_t	 sessionResultFinancial;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ReceiptServicePart_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ReceiptServicePart;

#ifdef __cplusplus
}
#endif

#endif	/* _ReceiptServicePart_H_ */
#include <asn_internal.h>
