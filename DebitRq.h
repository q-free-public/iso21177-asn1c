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
#ifndef	_DebitRq_H_
#define	_DebitRq_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DebitRq */
typedef struct DebitRq {
	PaymentFee_t	 debitPaymentFee;
	OCTET_STRING_t	 nonce;
	long	 keyRef;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DebitRq_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DebitRq;

#ifdef __cplusplus
}
#endif

#endif	/* _DebitRq_H_ */
#include <asn_internal.h>
