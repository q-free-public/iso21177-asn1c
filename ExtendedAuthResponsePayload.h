/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "Iso21177AccessControl"
 * 	found in "../../asn1/../ttcn/Ats21177/21177/EN_ISO_21177_access_control.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include <NativeInteger.h>
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>
#ifndef	_ExtendedAuthResponsePayload_H_
#define	_ExtendedAuthResponsePayload_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ExtendedAuthResponsePayload */
typedef struct ExtendedAuthResponsePayload {
	long	 part;
	long	 maxPart;
	OCTET_STRING_t	 requestHash;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ExtendedAuthResponsePayload_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ExtendedAuthResponsePayload;

#ifdef __cplusplus
}
#endif

#endif	/* _ExtendedAuthResponsePayload_H_ */
#include <asn_internal.h>
