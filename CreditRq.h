/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "EfcDsrcApplication"
 * 	found in "../../asn1/../ttcn/AtsIS/lib/asn1/iso-patched/EfcDsrcApplication.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include "PaymentFee.h"
#include <OCTET_STRING.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>
#ifndef	_CreditRq_H_
#define	_CreditRq_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CreditRq */
typedef struct CreditRq {
	PaymentFee_t	 refund;
	OCTET_STRING_t	 nonce;
	long	 key;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CreditRq_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CreditRq;

#ifdef __cplusplus
}
#endif

#endif	/* _CreditRq_H_ */
#include <asn_internal.h>